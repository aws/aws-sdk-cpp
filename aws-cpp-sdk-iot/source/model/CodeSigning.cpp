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

#include <aws/iot/model/CodeSigning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CodeSigning::CodeSigning() : 
    m_awsSignerJobIdHasBeenSet(false),
    m_customCodeSigningHasBeenSet(false)
{
}

CodeSigning::CodeSigning(const JsonValue& jsonValue) : 
    m_awsSignerJobIdHasBeenSet(false),
    m_customCodeSigningHasBeenSet(false)
{
  *this = jsonValue;
}

CodeSigning& CodeSigning::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("awsSignerJobId"))
  {
    m_awsSignerJobId = jsonValue.GetString("awsSignerJobId");

    m_awsSignerJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customCodeSigning"))
  {
    m_customCodeSigning = jsonValue.GetObject("customCodeSigning");

    m_customCodeSigningHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeSigning::Jsonize() const
{
  JsonValue payload;

  if(m_awsSignerJobIdHasBeenSet)
  {
   payload.WithString("awsSignerJobId", m_awsSignerJobId);

  }

  if(m_customCodeSigningHasBeenSet)
  {
   payload.WithObject("customCodeSigning", m_customCodeSigning.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
