/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/BatchJobIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

BatchJobIdentifier::BatchJobIdentifier() : 
    m_fileBatchJobIdentifierHasBeenSet(false),
    m_s3BatchJobIdentifierHasBeenSet(false),
    m_scriptBatchJobIdentifierHasBeenSet(false)
{
}

BatchJobIdentifier::BatchJobIdentifier(JsonView jsonValue) : 
    m_fileBatchJobIdentifierHasBeenSet(false),
    m_s3BatchJobIdentifierHasBeenSet(false),
    m_scriptBatchJobIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchJobIdentifier& BatchJobIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileBatchJobIdentifier"))
  {
    m_fileBatchJobIdentifier = jsonValue.GetObject("fileBatchJobIdentifier");

    m_fileBatchJobIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BatchJobIdentifier"))
  {
    m_s3BatchJobIdentifier = jsonValue.GetObject("s3BatchJobIdentifier");

    m_s3BatchJobIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptBatchJobIdentifier"))
  {
    m_scriptBatchJobIdentifier = jsonValue.GetObject("scriptBatchJobIdentifier");

    m_scriptBatchJobIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchJobIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_fileBatchJobIdentifierHasBeenSet)
  {
   payload.WithObject("fileBatchJobIdentifier", m_fileBatchJobIdentifier.Jsonize());

  }

  if(m_s3BatchJobIdentifierHasBeenSet)
  {
   payload.WithObject("s3BatchJobIdentifier", m_s3BatchJobIdentifier.Jsonize());

  }

  if(m_scriptBatchJobIdentifierHasBeenSet)
  {
   payload.WithObject("scriptBatchJobIdentifier", m_scriptBatchJobIdentifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
