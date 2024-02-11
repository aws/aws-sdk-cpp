/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AppBundle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

AppBundle::AppBundle() : 
    m_arnHasBeenSet(false),
    m_customerManagedKeyArnHasBeenSet(false)
{
}

AppBundle::AppBundle(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_customerManagedKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

AppBundle& AppBundle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerManagedKeyArn"))
  {
    m_customerManagedKeyArn = jsonValue.GetString("customerManagedKeyArn");

    m_customerManagedKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AppBundle::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_customerManagedKeyArnHasBeenSet)
  {
   payload.WithString("customerManagedKeyArn", m_customerManagedKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
