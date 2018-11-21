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

#include <aws/ssm/model/AttachmentContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

AttachmentContent::AttachmentContent() : 
    m_nameHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashType(AttachmentHashType::NOT_SET),
    m_hashTypeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

AttachmentContent::AttachmentContent(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashType(AttachmentHashType::NOT_SET),
    m_hashTypeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

AttachmentContent& AttachmentContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hash"))
  {
    m_hash = jsonValue.GetString("Hash");

    m_hashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HashType"))
  {
    m_hashType = AttachmentHashTypeMapper::GetAttachmentHashTypeForName(jsonValue.GetString("HashType"));

    m_hashTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue AttachmentContent::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("Hash", m_hash);

  }

  if(m_hashTypeHasBeenSet)
  {
   payload.WithString("HashType", AttachmentHashTypeMapper::GetNameForAttachmentHashType(m_hashType));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
