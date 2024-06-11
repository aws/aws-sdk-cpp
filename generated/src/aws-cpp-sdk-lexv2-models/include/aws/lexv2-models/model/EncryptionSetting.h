/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The object representing the passwords that were used to encrypt the data
   * related to the bot recommendation, as well as the KMS key ARN used to encrypt
   * the associated metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/EncryptionSetting">AWS
   * API Reference</a></p>
   */
  class EncryptionSetting
  {
  public:
    AWS_LEXMODELSV2_API EncryptionSetting();
    AWS_LEXMODELSV2_API EncryptionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API EncryptionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline EncryptionSetting& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline EncryptionSetting& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline EncryptionSetting& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline const Aws::String& GetBotLocaleExportPassword() const{ return m_botLocaleExportPassword; }
    inline bool BotLocaleExportPasswordHasBeenSet() const { return m_botLocaleExportPasswordHasBeenSet; }
    inline void SetBotLocaleExportPassword(const Aws::String& value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword = value; }
    inline void SetBotLocaleExportPassword(Aws::String&& value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword = std::move(value); }
    inline void SetBotLocaleExportPassword(const char* value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword.assign(value); }
    inline EncryptionSetting& WithBotLocaleExportPassword(const Aws::String& value) { SetBotLocaleExportPassword(value); return *this;}
    inline EncryptionSetting& WithBotLocaleExportPassword(Aws::String&& value) { SetBotLocaleExportPassword(std::move(value)); return *this;}
    inline EncryptionSetting& WithBotLocaleExportPassword(const char* value) { SetBotLocaleExportPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline const Aws::String& GetAssociatedTranscriptsPassword() const{ return m_associatedTranscriptsPassword; }
    inline bool AssociatedTranscriptsPasswordHasBeenSet() const { return m_associatedTranscriptsPasswordHasBeenSet; }
    inline void SetAssociatedTranscriptsPassword(const Aws::String& value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword = value; }
    inline void SetAssociatedTranscriptsPassword(Aws::String&& value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword = std::move(value); }
    inline void SetAssociatedTranscriptsPassword(const char* value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword.assign(value); }
    inline EncryptionSetting& WithAssociatedTranscriptsPassword(const Aws::String& value) { SetAssociatedTranscriptsPassword(value); return *this;}
    inline EncryptionSetting& WithAssociatedTranscriptsPassword(Aws::String&& value) { SetAssociatedTranscriptsPassword(std::move(value)); return *this;}
    inline EncryptionSetting& WithAssociatedTranscriptsPassword(const char* value) { SetAssociatedTranscriptsPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_botLocaleExportPassword;
    bool m_botLocaleExportPasswordHasBeenSet = false;

    Aws::String m_associatedTranscriptsPassword;
    bool m_associatedTranscriptsPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
