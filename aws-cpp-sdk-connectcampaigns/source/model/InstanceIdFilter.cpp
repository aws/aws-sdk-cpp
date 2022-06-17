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
    m_operator(InstanceIdFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

InstanceIdFilter::InstanceIdFilter(JsonView jsonValue) : 
    m_operator(InstanceIdFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceIdFilter& InstanceIdFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = InstanceIdFilterOperatorMapper::GetInstanceIdFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceIdFilter::Jsonize() const
{
  JsonValue payload;

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", InstanceIdFilterOperatorMapper::GetNameForInstanceIdFilterOperator(m_operator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
