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
#include <aws/clouddirectory/model/BatchReadOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchReadOperation::BatchReadOperation() : 
    m_listObjectAttributesHasBeenSet(false),
    m_listObjectChildrenHasBeenSet(false)
{
}

BatchReadOperation::BatchReadOperation(const JsonValue& jsonValue) : 
    m_listObjectAttributesHasBeenSet(false),
    m_listObjectChildrenHasBeenSet(false)
{
  *this = jsonValue;
}

BatchReadOperation& BatchReadOperation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ListObjectAttributes"))
  {
    m_listObjectAttributes = jsonValue.GetObject("ListObjectAttributes");

    m_listObjectAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListObjectChildren"))
  {
    m_listObjectChildren = jsonValue.GetObject("ListObjectChildren");

    m_listObjectChildrenHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchReadOperation::Jsonize() const
{
  JsonValue payload;

  if(m_listObjectAttributesHasBeenSet)
  {
   payload.WithObject("ListObjectAttributes", m_listObjectAttributes.Jsonize());

  }

  if(m_listObjectChildrenHasBeenSet)
  {
   payload.WithObject("ListObjectChildren", m_listObjectChildren.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws