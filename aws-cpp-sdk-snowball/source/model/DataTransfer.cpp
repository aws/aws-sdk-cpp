/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/model/DataTransfer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

DataTransfer::DataTransfer() : 
    m_bytesTransferred(0),
    m_bytesTransferredHasBeenSet(false),
    m_objectsTransferred(0),
    m_objectsTransferredHasBeenSet(false),
    m_totalBytes(0),
    m_totalBytesHasBeenSet(false),
    m_totalObjects(0),
    m_totalObjectsHasBeenSet(false)
{
}

DataTransfer::DataTransfer(const JsonValue& jsonValue) : 
    m_bytesTransferred(0),
    m_bytesTransferredHasBeenSet(false),
    m_objectsTransferred(0),
    m_objectsTransferredHasBeenSet(false),
    m_totalBytes(0),
    m_totalBytesHasBeenSet(false),
    m_totalObjects(0),
    m_totalObjectsHasBeenSet(false)
{
  *this = jsonValue;
}

DataTransfer& DataTransfer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BytesTransferred"))
  {
    m_bytesTransferred = jsonValue.GetInt64("BytesTransferred");

    m_bytesTransferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectsTransferred"))
  {
    m_objectsTransferred = jsonValue.GetInt64("ObjectsTransferred");

    m_objectsTransferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalBytes"))
  {
    m_totalBytes = jsonValue.GetInt64("TotalBytes");

    m_totalBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalObjects"))
  {
    m_totalObjects = jsonValue.GetInt64("TotalObjects");

    m_totalObjectsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataTransfer::Jsonize() const
{
  JsonValue payload;

  if(m_bytesTransferredHasBeenSet)
  {
   payload.WithInt64("BytesTransferred", m_bytesTransferred);

  }

  if(m_objectsTransferredHasBeenSet)
  {
   payload.WithInt64("ObjectsTransferred", m_objectsTransferred);

  }

  if(m_totalBytesHasBeenSet)
  {
   payload.WithInt64("TotalBytes", m_totalBytes);

  }

  if(m_totalObjectsHasBeenSet)
  {
   payload.WithInt64("TotalObjects", m_totalObjects);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws