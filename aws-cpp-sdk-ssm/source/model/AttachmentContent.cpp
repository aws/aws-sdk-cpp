/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
