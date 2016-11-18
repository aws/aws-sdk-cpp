/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ThirdPartyJobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ThirdPartyJobDetails::ThirdPartyJobDetails() : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_nonceHasBeenSet(false)
{
}

ThirdPartyJobDetails::ThirdPartyJobDetails(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_nonceHasBeenSet(false)
{
  *this = jsonValue;
}

ThirdPartyJobDetails& ThirdPartyJobDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonce"))
  {
    m_nonce = jsonValue.GetString("nonce");

    m_nonceHasBeenSet = true;
  }

  return *this;
}

JsonValue ThirdPartyJobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_nonceHasBeenSet)
  {
   payload.WithString("nonce", m_nonce);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws