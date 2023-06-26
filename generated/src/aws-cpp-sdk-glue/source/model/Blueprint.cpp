/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Blueprint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Blueprint::Blueprint() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_parameterSpecHasBeenSet(false),
    m_blueprintLocationHasBeenSet(false),
    m_blueprintServiceLocationHasBeenSet(false),
    m_status(BlueprintStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastActiveDefinitionHasBeenSet(false)
{
}

Blueprint::Blueprint(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_parameterSpecHasBeenSet(false),
    m_blueprintLocationHasBeenSet(false),
    m_blueprintServiceLocationHasBeenSet(false),
    m_status(BlueprintStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastActiveDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

Blueprint& Blueprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");

    m_createdOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

    m_lastModifiedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterSpec"))
  {
    m_parameterSpec = jsonValue.GetString("ParameterSpec");

    m_parameterSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlueprintLocation"))
  {
    m_blueprintLocation = jsonValue.GetString("BlueprintLocation");

    m_blueprintLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlueprintServiceLocation"))
  {
    m_blueprintServiceLocation = jsonValue.GetString("BlueprintServiceLocation");

    m_blueprintServiceLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = BlueprintStatusMapper::GetBlueprintStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastActiveDefinition"))
  {
    m_lastActiveDefinition = jsonValue.GetObject("LastActiveDefinition");

    m_lastActiveDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue Blueprint::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_parameterSpecHasBeenSet)
  {
   payload.WithString("ParameterSpec", m_parameterSpec);

  }

  if(m_blueprintLocationHasBeenSet)
  {
   payload.WithString("BlueprintLocation", m_blueprintLocation);

  }

  if(m_blueprintServiceLocationHasBeenSet)
  {
   payload.WithString("BlueprintServiceLocation", m_blueprintServiceLocation);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BlueprintStatusMapper::GetNameForBlueprintStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_lastActiveDefinitionHasBeenSet)
  {
   payload.WithObject("LastActiveDefinition", m_lastActiveDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
