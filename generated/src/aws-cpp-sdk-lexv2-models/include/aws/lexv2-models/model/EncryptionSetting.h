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
    AWS_LEXMODELSV2_API EncryptionSetting() = default;
    AWS_LEXMODELSV2_API EncryptionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API EncryptionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The KMS key ARN used to encrypt the metadata associated with the bot
     * recommendation.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    EncryptionSetting& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used to encrypt the recommended bot recommendation file.</p>
     */
    inline const Aws::String& GetBotLocaleExportPassword() const { return m_botLocaleExportPassword; }
    inline bool BotLocaleExportPasswordHasBeenSet() const { return m_botLocaleExportPasswordHasBeenSet; }
    template<typename BotLocaleExportPasswordT = Aws::String>
    void SetBotLocaleExportPassword(BotLocaleExportPasswordT&& value) { m_botLocaleExportPasswordHasBeenSet = true; m_botLocaleExportPassword = std::forward<BotLocaleExportPasswordT>(value); }
    template<typename BotLocaleExportPasswordT = Aws::String>
    EncryptionSetting& WithBotLocaleExportPassword(BotLocaleExportPasswordT&& value) { SetBotLocaleExportPassword(std::forward<BotLocaleExportPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used to encrypt the associated transcript file.</p>
     */
    inline const Aws::String& GetAssociatedTranscriptsPassword() const { return m_associatedTranscriptsPassword; }
    inline bool AssociatedTranscriptsPasswordHasBeenSet() const { return m_associatedTranscriptsPasswordHasBeenSet; }
    template<typename AssociatedTranscriptsPasswordT = Aws::String>
    void SetAssociatedTranscriptsPassword(AssociatedTranscriptsPasswordT&& value) { m_associatedTranscriptsPasswordHasBeenSet = true; m_associatedTranscriptsPassword = std::forward<AssociatedTranscriptsPasswordT>(value); }
    template<typename AssociatedTranscriptsPasswordT = Aws::String>
    EncryptionSetting& WithAssociatedTranscriptsPassword(AssociatedTranscriptsPasswordT&& value) { SetAssociatedTranscriptsPassword(std::forward<AssociatedTranscriptsPasswordT>(value)); return *this;}
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
