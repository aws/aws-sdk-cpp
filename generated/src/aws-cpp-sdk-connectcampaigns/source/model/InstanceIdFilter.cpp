/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InstanceIdFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

InstanceIdFilter::InstanceIdFilter() : 
    m_valueHasBeenSet(false),
    m_operator(InstanceIdFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

InstanceIdFilter::InstanceIdFilter(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_operator(InstanceIdFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceIdFilter& InstanceIdFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = InstanceIdFilterOperatorMapper::GetInstanceIdFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceIdFilter::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", InstanceIdFilterOperatorMapper::GetNameForInstanceIdFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
