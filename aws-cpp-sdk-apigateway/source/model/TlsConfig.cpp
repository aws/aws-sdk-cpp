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

#include <aws/apigateway/model/TlsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

TlsConfig::TlsConfig() : 
    m_insecureSkipVerification(false),
    m_insecureSkipVerificationHasBeenSet(false)
{
}

TlsConfig::TlsConfig(JsonView jsonValue) : 
    m_insecureSkipVerification(false),
    m_insecureSkipVerificationHasBeenSet(false)
{
  *this = jsonValue;
}

TlsConfig& TlsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("insecureSkipVerification"))
  {
    m_insecureSkipVerification = jsonValue.GetBool("insecureSkipVerification");

    m_insecureSkipVerificationHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_insecureSkipVerificationHasBeenSet)
  {
   payload.WithBool("insecureSkipVerification", m_insecureSkipVerification);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
