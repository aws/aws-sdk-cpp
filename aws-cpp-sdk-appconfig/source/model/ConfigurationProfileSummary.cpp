/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ConfigurationProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

ConfigurationProfileSummary::ConfigurationProfileSummary() : 
    m_applicationIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_locationUriHasBeenSet(false),
    m_validatorTypesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ConfigurationProfileSummary::ConfigurationProfileSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_locationUriHasBeenSet(false),
    m_validatorTypesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationProfileSummary& ConfigurationProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

    m_locationUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidatorTypes"))
  {
    Aws::Utils::Array<JsonView> validatorTypesJsonList = jsonValue.GetArray("ValidatorTypes");
    for(unsigned validatorTypesIndex = 0; validatorTypesIndex < validatorTypesJsonList.GetLength(); ++validatorTypesIndex)
    {
      m_validatorTypes.push_back(ValidatorTypeMapper::GetValidatorTypeForName(validatorTypesJsonList[validatorTypesIndex].AsString()));
    }
    m_validatorTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_locationUriHasBeenSet)
  {
   payload.WithString("LocationUri", m_locationUri);

  }

  if(m_validatorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validatorTypesJsonList(m_validatorTypes.size());
   for(unsigned validatorTypesIndex = 0; validatorTypesIndex < validatorTypesJsonList.GetLength(); ++validatorTypesIndex)
   {
     validatorTypesJsonList[validatorTypesIndex].AsString(ValidatorTypeMapper::GetNameForValidatorType(m_validatorTypes[validatorTypesIndex]));
   }
   payload.WithArray("ValidatorTypes", std::move(validatorTypesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
