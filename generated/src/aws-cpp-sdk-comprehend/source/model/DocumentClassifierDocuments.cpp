/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierDocuments.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentClassifierDocuments::DocumentClassifierDocuments() : 
    m_s3UriHasBeenSet(false),
    m_testS3UriHasBeenSet(false)
{
}

DocumentClassifierDocuments::DocumentClassifierDocuments(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_testS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassifierDocuments& DocumentClassifierDocuments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestS3Uri"))
  {
    m_testS3Uri = jsonValue.GetString("TestS3Uri");

    m_testS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassifierDocuments::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_testS3UriHasBeenSet)
  {
   payload.WithString("TestS3Uri", m_testS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
