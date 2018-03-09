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

#include <aws/sagemaker/model/ModelArtifacts.h>
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

ModelArtifacts::ModelArtifacts() : 
    m_s3ModelArtifactsHasBeenSet(false)
{
}

ModelArtifacts::ModelArtifacts(const JsonValue& jsonValue) : 
    m_s3ModelArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelArtifacts& ModelArtifacts::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("S3ModelArtifacts"))
  {
    m_s3ModelArtifacts = jsonValue.GetString("S3ModelArtifacts");

    m_s3ModelArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_s3ModelArtifactsHasBeenSet)
  {
   payload.WithString("S3ModelArtifacts", m_s3ModelArtifacts);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
