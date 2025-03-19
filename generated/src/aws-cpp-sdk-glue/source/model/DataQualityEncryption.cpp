/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityEncryption.h>
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

DataQualityEncryption::DataQualityEncryption(JsonView jsonValue)
{
  *this = jsonValue;
}

DataQualityEncryption& DataQualityEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataQualityEncryptionMode"))
  {
    m_dataQualityEncryptionMode = DataQualityEncryptionModeMapper::GetDataQualityEncryptionModeForName(jsonValue.GetString("DataQualityEncryptionMode"));
    m_dataQualityEncryptionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_dataQualityEncryptionModeHasBeenSet)
  {
   payload.WithString("DataQualityEncryptionMode", DataQualityEncryptionModeMapper::GetNameForDataQualityEncryptionMode(m_dataQualityEncryptionMode));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
