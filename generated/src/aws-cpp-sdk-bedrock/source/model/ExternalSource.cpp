/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ExternalSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ExternalSource::ExternalSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ExternalSource& ExternalSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = ExternalSourceTypeMapper::GetExternalSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("byteContent"))
  {
    m_byteContent = jsonValue.GetObject("byteContent");
    m_byteContentHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", ExternalSourceTypeMapper::GetNameForExternalSourceType(m_sourceType));
  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_byteContentHasBeenSet)
  {
   payload.WithObject("byteContent", m_byteContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
