/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DocumentIdOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DocumentIdOptions::DocumentIdOptions() : 
    m_defaultDocumentIdFormat(DefaultDocumentIdFormat::NOT_SET),
    m_defaultDocumentIdFormatHasBeenSet(false)
{
}

DocumentIdOptions::DocumentIdOptions(JsonView jsonValue) : 
    m_defaultDocumentIdFormat(DefaultDocumentIdFormat::NOT_SET),
    m_defaultDocumentIdFormatHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentIdOptions& DocumentIdOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultDocumentIdFormat"))
  {
    m_defaultDocumentIdFormat = DefaultDocumentIdFormatMapper::GetDefaultDocumentIdFormatForName(jsonValue.GetString("DefaultDocumentIdFormat"));

    m_defaultDocumentIdFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentIdOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultDocumentIdFormatHasBeenSet)
  {
   payload.WithString("DefaultDocumentIdFormat", DefaultDocumentIdFormatMapper::GetNameForDefaultDocumentIdFormat(m_defaultDocumentIdFormat));
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
