/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <aws/lexv2-models/model/ErrorLogSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Provides the bot parameters required for importing a bot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotImportSpecification">AWS
   * API Reference</a></p>
   */
  class BotImportSpecification
  {
  public:
    AWS_LEXMODELSV2_API BotImportSpecification() = default;
    AWS_LEXMODELSV2_API BotImportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotImportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that Amazon Lex should use for the bot.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    BotImportSpecification& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to build and run the
     * bot.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    BotImportSpecification& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataPrivacy& GetDataPrivacy() const { return m_dataPrivacy; }
    inline bool DataPrivacyHasBeenSet() const { return m_dataPrivacyHasBeenSet; }
    template<typename DataPrivacyT = DataPrivacy>
    void SetDataPrivacy(DataPrivacyT&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::forward<DataPrivacyT>(value); }
    template<typename DataPrivacyT = DataPrivacy>
    BotImportSpecification& WithDataPrivacy(DataPrivacyT&& value) { SetDataPrivacy(std::forward<DataPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to configure destinations where error logs will be published
     * during the bot import process.</p>
     */
    inline const ErrorLogSettings& GetErrorLogSettings() const { return m_errorLogSettings; }
    inline bool ErrorLogSettingsHasBeenSet() const { return m_errorLogSettingsHasBeenSet; }
    template<typename ErrorLogSettingsT = ErrorLogSettings>
    void SetErrorLogSettings(ErrorLogSettingsT&& value) { m_errorLogSettingsHasBeenSet = true; m_errorLogSettings = std::forward<ErrorLogSettingsT>(value); }
    template<typename ErrorLogSettingsT = ErrorLogSettings>
    BotImportSpecification& WithErrorLogSettings(ErrorLogSettingsT&& value) { SetErrorLogSettings(std::forward<ErrorLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot. </p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const { return m_idleSessionTTLInSeconds; }
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }
    inline BotImportSpecification& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the bot. You can only add tags when you import a
     * bot. You can't use the <code>UpdateBot</code> operation to update tags. To
     * update tags, use the <code>TagResource</code> operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotTags() const { return m_botTags; }
    inline bool BotTagsHasBeenSet() const { return m_botTagsHasBeenSet; }
    template<typename BotTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetBotTags(BotTagsT&& value) { m_botTagsHasBeenSet = true; m_botTags = std::forward<BotTagsT>(value); }
    template<typename BotTagsT = Aws::Map<Aws::String, Aws::String>>
    BotImportSpecification& WithBotTags(BotTagsT&& value) { SetBotTags(std::forward<BotTagsT>(value)); return *this;}
    template<typename BotTagsKeyT = Aws::String, typename BotTagsValueT = Aws::String>
    BotImportSpecification& AddBotTags(BotTagsKeyT&& key, BotTagsValueT&& value) {
      m_botTagsHasBeenSet = true; m_botTags.emplace(std::forward<BotTagsKeyT>(key), std::forward<BotTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the test alias for a bot. You can only add tags when
     * you import a bot. You can't use the <code>UpdateAlias</code> operation to update
     * tags. To update tags on the test alias, use the <code>TagResource</code>
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestBotAliasTags() const { return m_testBotAliasTags; }
    inline bool TestBotAliasTagsHasBeenSet() const { return m_testBotAliasTagsHasBeenSet; }
    template<typename TestBotAliasTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTestBotAliasTags(TestBotAliasTagsT&& value) { m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags = std::forward<TestBotAliasTagsT>(value); }
    template<typename TestBotAliasTagsT = Aws::Map<Aws::String, Aws::String>>
    BotImportSpecification& WithTestBotAliasTags(TestBotAliasTagsT&& value) { SetTestBotAliasTags(std::forward<TestBotAliasTagsT>(value)); return *this;}
    template<typename TestBotAliasTagsKeyT = Aws::String, typename TestBotAliasTagsValueT = Aws::String>
    BotImportSpecification& AddTestBotAliasTags(TestBotAliasTagsKeyT&& key, TestBotAliasTagsValueT&& value) {
      m_testBotAliasTagsHasBeenSet = true; m_testBotAliasTags.emplace(std::forward<TestBotAliasTagsKeyT>(key), std::forward<TestBotAliasTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPrivacy m_dataPrivacy;
    bool m_dataPrivacyHasBeenSet = false;

    ErrorLogSettings m_errorLogSettings;
    bool m_errorLogSettingsHasBeenSet = false;

    int m_idleSessionTTLInSeconds{0};
    bool m_idleSessionTTLInSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_botTags;
    bool m_botTagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_testBotAliasTags;
    bool m_testBotAliasTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
