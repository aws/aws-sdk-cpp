/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

ErrorResponse::ErrorResponse() : 
    m_accountIdHasBeenSet(false),
    m_additionalDetailsHasBeenSet(false),
    m_code(ErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(ErrorResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

ErrorResponse::ErrorResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_additionalDetailsHasBeenSet(false),
    m_code(ErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(ErrorResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorResponse& ErrorResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalDetails"))
  {
    Aws::Map<Aws::String, JsonView> additionalDetailsJsonMap = jsonValue.GetObject("AdditionalDetails").GetAllObjects();
    for(auto& additionalDetailsItem : additionalDetailsJsonMap)
    {
      m_additionalDetails[additionalDetailsItem.first] = additionalDetailsItem.second.AsString();
    }
    m_additionalDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Code"))
  {
    m_code = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ErrorResourceTypeMapper::GetErrorResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_additionalDetailsHasBeenSet)
  {
   JsonValue additionalDetailsJsonMap;
   for(auto& additionalDetailsItem : m_additionalDetails)
   {
     additionalDetailsJsonMap.WithString(additionalDetailsItem.first, additionalDetailsItem.second);
   }
   payload.WithObject("AdditionalDetails", std::move(additionalDetailsJsonMap));

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", ErrorCodeMapper::GetNameForErrorCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ErrorResourceTypeMapper::GetNameForErrorResourceType(m_resourceType));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
