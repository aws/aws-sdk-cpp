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

#include <aws/securityhub/model/AwsLambdaFunctionLayer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsLambdaFunctionLayer::AwsLambdaFunctionLayer() : 
    m_arnHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
}

AwsLambdaFunctionLayer::AwsLambdaFunctionLayer(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaFunctionLayer& AwsLambdaFunctionLayer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInteger("CodeSize");

    m_codeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaFunctionLayer::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInteger("CodeSize", m_codeSize);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
