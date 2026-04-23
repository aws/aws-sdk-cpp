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

#include <aws/sagemaker/model/LabelingJobS3DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

LabelingJobS3DataSource::LabelingJobS3DataSource() : 
    m_manifestS3UriHasBeenSet(false)
{
}

LabelingJobS3DataSource::LabelingJobS3DataSource(JsonView jsonValue) : 
    m_manifestS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobS3DataSource& LabelingJobS3DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestS3Uri"))
  {
    m_manifestS3Uri = jsonValue.GetString("ManifestS3Uri");

    m_manifestS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobS3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_manifestS3UriHasBeenSet)
  {
   payload.WithString("ManifestS3Uri", m_manifestS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
