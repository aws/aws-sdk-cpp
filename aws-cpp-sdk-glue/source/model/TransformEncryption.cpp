/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TransformEncryption::TransformEncryption() : 
    m_mlUserDataEncryptionHasBeenSet(false),
    m_taskRunSecurityConfigurationNameHasBeenSet(false)
{
}

TransformEncryption::TransformEncryption(JsonView jsonValue) : 
    m_mlUserDataEncryptionHasBeenSet(false),
    m_taskRunSecurityConfigurationNameHasBeenSet(false)
{
  *this = jsonValue;
}

TransformEncryption& TransformEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MlUserDataEncryption"))
  {
    m_mlUserDataEncryption = jsonValue.GetObject("MlUserDataEncryption");

    m_mlUserDataEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskRunSecurityConfigurationName"))
  {
    m_taskRunSecurityConfigurationName = jsonValue.GetString("TaskRunSecurityConfigurationName");

    m_taskRunSecurityConfigurationNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_mlUserDataEncryptionHasBeenSet)
  {
   payload.WithObject("MlUserDataEncryption", m_mlUserDataEncryption.Jsonize());

  }

  if(m_taskRunSecurityConfigurationNameHasBeenSet)
  {
   payload.WithString("TaskRunSecurityConfigurationName", m_taskRunSecurityConfigurationName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
