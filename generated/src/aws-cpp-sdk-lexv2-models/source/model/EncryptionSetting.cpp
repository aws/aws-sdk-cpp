/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/EncryptionSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

EncryptionSetting::EncryptionSetting() : 
    m_kmsKeyArnHasBeenSet(false),
    m_botLocaleExportPasswordHasBeenSet(false),
    m_associatedTranscriptsPasswordHasBeenSet(false)
{
}

EncryptionSetting::EncryptionSetting(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false),
    m_botLocaleExportPasswordHasBeenSet(false),
    m_associatedTranscriptsPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionSetting& EncryptionSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botLocaleExportPassword"))
  {
    m_botLocaleExportPassword = jsonValue.GetString("botLocaleExportPassword");

    m_botLocaleExportPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedTranscriptsPassword"))
  {
    m_associatedTranscriptsPassword = jsonValue.GetString("associatedTranscriptsPassword");

    m_associatedTranscriptsPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionSetting::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_botLocaleExportPasswordHasBeenSet)
  {
   payload.WithString("botLocaleExportPassword", m_botLocaleExportPassword);

  }

  if(m_associatedTranscriptsPasswordHasBeenSet)
  {
   payload.WithString("associatedTranscriptsPassword", m_associatedTranscriptsPassword);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
