/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/Checksum.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

Checksum::Checksum() : 
    m_type(ChecksumType::NOT_SET),
    m_typeHasBeenSet(false),
    m_sumHasBeenSet(false)
{
}

Checksum::Checksum(JsonView jsonValue) : 
    m_type(ChecksumType::NOT_SET),
    m_typeHasBeenSet(false),
    m_sumHasBeenSet(false)
{
  *this = jsonValue;
}

Checksum& Checksum::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChecksumTypeMapper::GetChecksumTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sum"))
  {
    m_sum = jsonValue.GetString("Sum");

    m_sumHasBeenSet = true;
  }

  return *this;
}

JsonValue Checksum::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChecksumTypeMapper::GetNameForChecksumType(m_type));
  }

  if(m_sumHasBeenSet)
  {
   payload.WithString("Sum", m_sum);

  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
