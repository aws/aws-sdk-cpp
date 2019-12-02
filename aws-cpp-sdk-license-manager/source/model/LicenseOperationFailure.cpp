/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/license-manager/model/LicenseOperationFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

LicenseOperationFailure::LicenseOperationFailure() : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_failureTimeHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_operationRequestedByHasBeenSet(false),
    m_metadataListHasBeenSet(false)
{
}

LicenseOperationFailure::LicenseOperationFailure(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_failureTimeHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_operationRequestedByHasBeenSet(false),
    m_metadataListHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseOperationFailure& LicenseOperationFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureTime"))
  {
    m_failureTime = jsonValue.GetDouble("FailureTime");

    m_failureTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationName"))
  {
    m_operationName = jsonValue.GetString("OperationName");

    m_operationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceOwnerId"))
  {
    m_resourceOwnerId = jsonValue.GetString("ResourceOwnerId");

    m_resourceOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationRequestedBy"))
  {
    m_operationRequestedBy = jsonValue.GetString("OperationRequestedBy");

    m_operationRequestedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataList"))
  {
    Array<JsonView> metadataListJsonList = jsonValue.GetArray("MetadataList");
    for(unsigned metadataListIndex = 0; metadataListIndex < metadataListJsonList.GetLength(); ++metadataListIndex)
    {
      m_metadataList.push_back(metadataListJsonList[metadataListIndex].AsObject());
    }
    m_metadataListHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseOperationFailure::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_failureTimeHasBeenSet)
  {
   payload.WithDouble("FailureTime", m_failureTime.SecondsWithMSPrecision());
  }

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("OperationName", m_operationName);

  }

  if(m_resourceOwnerIdHasBeenSet)
  {
   payload.WithString("ResourceOwnerId", m_resourceOwnerId);

  }

  if(m_operationRequestedByHasBeenSet)
  {
   payload.WithString("OperationRequestedBy", m_operationRequestedBy);

  }

  if(m_metadataListHasBeenSet)
  {
   Array<JsonValue> metadataListJsonList(m_metadataList.size());
   for(unsigned metadataListIndex = 0; metadataListIndex < metadataListJsonList.GetLength(); ++metadataListIndex)
   {
     metadataListJsonList[metadataListIndex].AsObject(m_metadataList[metadataListIndex].Jsonize());
   }
   payload.WithArray("MetadataList", std::move(metadataListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
