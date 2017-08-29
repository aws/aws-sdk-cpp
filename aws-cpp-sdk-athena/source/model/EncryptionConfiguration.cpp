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

#include <aws/athena/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration() : 
    m_encryptionOption(EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
}

EncryptionConfiguration::EncryptionConfiguration(const JsonValue& jsonValue) : 
    m_encryptionOption(EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EncryptionOption"))
  {
    m_encryptionOption = EncryptionOptionMapper::GetEncryptionOptionForName(jsonValue.GetString("EncryptionOption"));

    m_encryptionOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionOptionHasBeenSet)
  {
   payload.WithString("EncryptionOption", EncryptionOptionMapper::GetNameForEncryptionOption(m_encryptionOption));
  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
