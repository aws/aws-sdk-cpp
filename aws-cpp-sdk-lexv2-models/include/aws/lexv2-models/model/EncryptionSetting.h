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


    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline EncryptionSetting& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline EncryptionSetting& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline EncryptionSetting& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline const Aws::String& GetBotLocaleExportPassword() const{ return m_botLocaleExportPassword; }

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline bool BotLocaleExportPasswordHasBeenSet() const { return m_botLocaleExportPasswordHasBeenSet; }

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline void SetBotLocaleExportPassword(const Aws::String& value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword = value; }

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline void SetBotLocaleExportPassword(Aws::String&& value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword = std::move(value); }

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline void SetBotLocaleExportPassword(const char* value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword.assign(value); }

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline EncryptionSetting& WithBotLocaleExportPassword(const Aws::String& value) { SetBotLocaleExportPassword(value); return *this;}

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline EncryptionSetting& WithBotLocaleExportPassword(Aws::String&& value) { SetBotLocaleExportPassword(std::move(value)); return *this;}

    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline EncryptionSetting& WithBotLocaleExportPassword(const char* value) { SetBotLocaleExportPassword(value); return *this;}


    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline const Aws::String& GetAssociatedTranscriptsPassword() const{ return m_associatedTranscriptsPassword; }

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline bool AssociatedTranscriptsPasswordHasBeenSet() const { return m_associatedTranscriptsPasswordHasBeenSet; }

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline void SetAssociatedTranscriptsPassword(const Aws::String& value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword = value; }

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline void SetAssociatedTranscriptsPassword(Aws::String&& value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword = std::move(value); }

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline void SetAssociatedTranscriptsPassword(const char* value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword.assign(value); }

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline EncryptionSetting& WithAssociatedTranscriptsPassword(const Aws::String& value) { SetAssociatedTranscriptsPassword(value); return *this;}

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline EncryptionSetting& WithAssociatedTranscriptsPassword(Aws::String&& value) { SetAssociatedTranscriptsPassword(std::move(value)); return *this;}

    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline EncryptionSetting& WithAssociatedTranscriptsPassword(const char* value) { SetAssociatedTranscriptsPassword(value); return *this;}

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
