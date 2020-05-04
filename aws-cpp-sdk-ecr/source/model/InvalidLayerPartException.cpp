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

#include <aws/ecr/model/InvalidLayerPartException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

InvalidLayerPartException::InvalidLayerPartException() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_lastValidByteReceived(0),
    m_lastValidByteReceivedHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InvalidLayerPartException::InvalidLayerPartException(JsonView jsonValue) : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_lastValidByteReceived(0),
    m_lastValidByteReceivedHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidLayerPartException& InvalidLayerPartException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

    m_uploadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastValidByteReceived"))
  {
    m_lastValidByteReceived = jsonValue.GetInt64("lastValidByteReceived");

    m_lastValidByteReceivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidLayerPartException::Jsonize() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_uploadIdHasBeenSet)
  {
   payload.WithString("uploadId", m_uploadId);

  }

  if(m_lastValidByteReceivedHasBeenSet)
  {
   payload.WithInt64("lastValidByteReceived", m_lastValidByteReceived);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
