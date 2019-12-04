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

#include <aws/sagemaker/model/TensorBoardOutputConfig.h>
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

TensorBoardOutputConfig::TensorBoardOutputConfig() : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false)
{
}

TensorBoardOutputConfig::TensorBoardOutputConfig(JsonView jsonValue) : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false)
{
  *this = jsonValue;
}

TensorBoardOutputConfig& TensorBoardOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  return *this;
}

JsonValue TensorBoardOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
