/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetDocumentClassifierInputDataConfig.h>
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

DatasetDocumentClassifierInputDataConfig::DatasetDocumentClassifierInputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_labelDelimiterHasBeenSet(false)
{
}

DatasetDocumentClassifierInputDataConfig::DatasetDocumentClassifierInputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_labelDelimiterHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetDocumentClassifierInputDataConfig& DatasetDocumentClassifierInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelDelimiter"))
  {
    m_labelDelimiter = jsonValue.GetString("LabelDelimiter");

    m_labelDelimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetDocumentClassifierInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_labelDelimiterHasBeenSet)
  {
   payload.WithString("LabelDelimiter", m_labelDelimiter);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
