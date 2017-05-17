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

#include <aws/ssm/model/S3OutputUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

S3OutputUrl::S3OutputUrl() : 
    m_outputUrlHasBeenSet(false)
{
}

S3OutputUrl::S3OutputUrl(const JsonValue& jsonValue) : 
    m_outputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

S3OutputUrl& S3OutputUrl::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OutputUrl"))
  {
    m_outputUrl = jsonValue.GetString("OutputUrl");

    m_outputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue S3OutputUrl::Jsonize() const
{
  JsonValue payload;

  if(m_outputUrlHasBeenSet)
  {
   payload.WithString("OutputUrl", m_outputUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws