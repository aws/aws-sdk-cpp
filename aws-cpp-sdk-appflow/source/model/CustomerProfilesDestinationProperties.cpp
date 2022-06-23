/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomerProfilesDestinationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

CustomerProfilesDestinationProperties::CustomerProfilesDestinationProperties() : 
    m_domainNameHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false)
{
}

CustomerProfilesDestinationProperties::CustomerProfilesDestinationProperties(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerProfilesDestinationProperties& CustomerProfilesDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("objectTypeName");

    m_objectTypeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerProfilesDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("objectTypeName", m_objectTypeName);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
