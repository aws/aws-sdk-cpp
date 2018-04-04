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

#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

RevocationConfiguration::RevocationConfiguration() : 
    m_crlConfigurationHasBeenSet(false)
{
}

RevocationConfiguration::RevocationConfiguration(const JsonValue& jsonValue) : 
    m_crlConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RevocationConfiguration& RevocationConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CrlConfiguration"))
  {
    m_crlConfiguration = jsonValue.GetObject("CrlConfiguration");

    m_crlConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RevocationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crlConfigurationHasBeenSet)
  {
   payload.WithObject("CrlConfiguration", m_crlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
