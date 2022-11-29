/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SequenceInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SequenceInformation::SequenceInformation() : 
    m_alignmentHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_totalBaseCount(0),
    m_totalBaseCountHasBeenSet(false),
    m_totalReadCount(0),
    m_totalReadCountHasBeenSet(false)
{
}

SequenceInformation::SequenceInformation(JsonView jsonValue) : 
    m_alignmentHasBeenSet(false),
    m_generatedFromHasBeenSet(false),
    m_totalBaseCount(0),
    m_totalBaseCountHasBeenSet(false),
    m_totalReadCount(0),
    m_totalReadCountHasBeenSet(false)
{
  *this = jsonValue;
}

SequenceInformation& SequenceInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alignment"))
  {
    m_alignment = jsonValue.GetString("alignment");

    m_alignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generatedFrom"))
  {
    m_generatedFrom = jsonValue.GetString("generatedFrom");

    m_generatedFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalBaseCount"))
  {
    m_totalBaseCount = jsonValue.GetInt64("totalBaseCount");

    m_totalBaseCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalReadCount"))
  {
    m_totalReadCount = jsonValue.GetInt64("totalReadCount");

    m_totalReadCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SequenceInformation::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("alignment", m_alignment);

  }

  if(m_generatedFromHasBeenSet)
  {
   payload.WithString("generatedFrom", m_generatedFrom);

  }

  if(m_totalBaseCountHasBeenSet)
  {
   payload.WithInt64("totalBaseCount", m_totalBaseCount);

  }

  if(m_totalReadCountHasBeenSet)
  {
   payload.WithInt64("totalReadCount", m_totalReadCount);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
