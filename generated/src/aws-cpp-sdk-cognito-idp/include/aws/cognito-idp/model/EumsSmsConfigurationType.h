/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The configuration that Amazon Cognito uses to send SMS messages through
 * Amazon Web Services End User Messaging SMS. Provide this structure in the
 * <code>EumsSms</code> member of <code>SmsConfigurationType</code> to use Amazon
 * Web Services End User Messaging SMS instead of Amazon SNS.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EumsSmsConfigurationType">AWS
 * API Reference</a></p>
 */
class EumsSmsConfigurationType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API EumsSmsConfigurationType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API EumsSmsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API EumsSmsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the IAM role that Amazon Cognito assumes to send SMS messages
   * through Amazon Web Services End User Messaging SMS. The role must grant
   * permission to call the <code>sms-voice:SendTextMessage</code> operation.</p>
   */
  inline const Aws::String& GetCallerArn() const { return m_callerArn; }
  inline bool CallerArnHasBeenSet() const { return m_callerArnHasBeenSet; }
  template <typename CallerArnT = Aws::String>
  void SetCallerArn(CallerArnT&& value) {
    m_callerArnHasBeenSet = true;
    m_callerArn = std::forward<CallerArnT>(value);
  }
  template <typename CallerArnT = Aws::String>
  EumsSmsConfigurationType& WithCallerArn(CallerArnT&& value) {
    SetCallerArn(std::forward<CallerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external ID that Amazon Cognito includes when it assumes the
   * <code>CallerArn</code> role. Use this value as a condition in the role trust
   * policy to prevent the confused deputy problem.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  EumsSmsConfigurationType& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origination identity that Amazon Web Services End User Messaging SMS uses
   * to send messages to your users. This value can be one of the following:</p> <ul>
   * <li> <p>A phone number – A long code, toll-free number, or short code that is
   * assigned to your account.</p> </li> <li> <p>A sender ID – An alphabetic name
   * that identifies the message sender in supported countries.</p> </li> <li> <p>A
   * phone pool – A group of phone numbers that Amazon Web Services End User
   * Messaging SMS selects from when it sends messages.</p> </li> </ul> <p>You can
   * provide an E.164 phone number or the ARN of the phone number, sender ID, or
   * phone pool. Amazon Web Services End User Messaging SMS evaluates IAM
   * authorization with the value that you provide. If the permissions policy of your
   * <code>CallerArn</code> role scopes the <code>sms-voice:SendTextMessage</code>
   * resource to a specific ARN, provide that same ARN. If the formats do not match,
   * requests fail with an <code>InvalidSmsRoleAccessPolicyException</code>.</p>
   * <p>Depending on the destination country, you must provide an origination
   * identity. For country-specific requirements, see <a
   * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/phone-numbers-sms-by-country.html">Supported
   * countries and regions for SMS messaging</a> in the Amazon Web Services End User
   * Messaging SMS User Guide.</p>
   */
  inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
  inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
  template <typename OriginationIdentityT = Aws::String>
  void SetOriginationIdentity(OriginationIdentityT&& value) {
    m_originationIdentityHasBeenSet = true;
    m_originationIdentity = std::forward<OriginationIdentityT>(value);
  }
  template <typename OriginationIdentityT = Aws::String>
  EumsSmsConfigurationType& WithOriginationIdentity(OriginationIdentityT&& value) {
    SetOriginationIdentity(std::forward<OriginationIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Web Services End User Messaging SMS configuration set
   * that Amazon Cognito applies to messages, for logging and event destinations. If
   * you omit this member, Amazon Cognito sends messages without applying a
   * configuration set.</p>
   */
  inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
  inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
  template <typename ConfigurationSetNameT = Aws::String>
  void SetConfigurationSetName(ConfigurationSetNameT&& value) {
    m_configurationSetNameHasBeenSet = true;
    m_configurationSetName = std::forward<ConfigurationSetNameT>(value);
  }
  template <typename ConfigurationSetNameT = Aws::String>
  EumsSmsConfigurationType& WithConfigurationSetName(ConfigurationSetNameT&& value) {
    SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal entity ID required by India's Distributed Ledger Technology
   * (DLT) regulations for SMS messages.</p>
   */
  inline const Aws::String& GetInEntityId() const { return m_inEntityId; }
  inline bool InEntityIdHasBeenSet() const { return m_inEntityIdHasBeenSet; }
  template <typename InEntityIdT = Aws::String>
  void SetInEntityId(InEntityIdT&& value) {
    m_inEntityIdHasBeenSet = true;
    m_inEntityId = std::forward<InEntityIdT>(value);
  }
  template <typename InEntityIdT = Aws::String>
  EumsSmsConfigurationType& WithInEntityId(InEntityIdT&& value) {
    SetInEntityId(std::forward<InEntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registered template ID for the message template required by India's DLT
   * regulations for SMS messages.</p>
   */
  inline const Aws::String& GetInTemplateId() const { return m_inTemplateId; }
  inline bool InTemplateIdHasBeenSet() const { return m_inTemplateIdHasBeenSet; }
  template <typename InTemplateIdT = Aws::String>
  void SetInTemplateId(InTemplateIdT&& value) {
    m_inTemplateIdHasBeenSet = true;
    m_inTemplateId = std::forward<InTemplateIdT>(value);
  }
  template <typename InTemplateIdT = Aws::String>
  EumsSmsConfigurationType& WithInTemplateId(InTemplateIdT&& value) {
    SetInTemplateId(std::forward<InTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the Amazon Web Services End User Messaging
   * SMS resources that Amazon Cognito uses to send messages. Amazon Web Services End
   * User Messaging SMS must be available in your user pool's Region.</p> <p>If you
   * omit this parameter, Amazon Cognito uses the same Region as your user pool. You
   * can also set this parameter to your user pool's Region explicitly. Amazon
   * Cognito rejects any other value with an
   * <code>InvalidParameterException</code>.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  EumsSmsConfigurationType& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_callerArn;

  Aws::String m_externalId;

  Aws::String m_originationIdentity;

  Aws::String m_configurationSetName;

  Aws::String m_inEntityId;

  Aws::String m_inTemplateId;

  Aws::String m_region;
  bool m_callerArnHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_originationIdentityHasBeenSet = false;
  bool m_configurationSetNameHasBeenSet = false;
  bool m_inEntityIdHasBeenSet = false;
  bool m_inTemplateIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
