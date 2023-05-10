/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/OutputNotebookS3LocationForOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

OutputNotebookS3LocationForOutput::OutputNotebookS3LocationForOutput() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

OutputNotebookS3LocationForOutput::OutputNotebookS3LocationForOutput(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

OutputNotebookS3LocationForOutput& OutputNotebookS3LocationForOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputNotebookS3LocationForOutput::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
