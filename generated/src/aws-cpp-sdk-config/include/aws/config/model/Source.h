/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/Owner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/CustomPolicyDetails.h>
#include <aws/config/model/SourceDetail.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides the CustomPolicyDetails, the rule owner (<code>Amazon Web
   * Services</code> for managed rules, <code>CUSTOM_POLICY</code> for Custom Policy
   * rules, and <code>CUSTOM_LAMBDA</code> for Custom Lambda rules), the rule
   * identifier, and the events that cause the evaluation of your Amazon Web Services
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Source">AWS API
   * Reference</a></p>
   */
  class Source
  {
  public:
    AWS_CONFIGSERVICE_API Source();
    AWS_CONFIGSERVICE_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether Amazon Web Services or the customer owns and manages the
     * Config rule.</p> <p>Config Managed Rules are predefined rules owned by Amazon
     * Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Config
     * Managed Rules</a> in the <i>Config developer guide</i>.</p> <p>Config Custom
     * Rules are rules that you can develop either with Guard
     * (<code>CUSTOM_POLICY</code>) or Lambda (<code>CUSTOM_LAMBDA</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">Config
     * Custom Rules </a> in the <i>Config developer guide</i>.</p>
     */
    inline const Owner& GetOwner() const{ return m_owner; }

    /**
     * <p>Indicates whether Amazon Web Services or the customer owns and manages the
     * Config rule.</p> <p>Config Managed Rules are predefined rules owned by Amazon
     * Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Config
     * Managed Rules</a> in the <i>Config developer guide</i>.</p> <p>Config Custom
     * Rules are rules that you can develop either with Guard
     * (<code>CUSTOM_POLICY</code>) or Lambda (<code>CUSTOM_LAMBDA</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">Config
     * Custom Rules </a> in the <i>Config developer guide</i>.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>Indicates whether Amazon Web Services or the customer owns and manages the
     * Config rule.</p> <p>Config Managed Rules are predefined rules owned by Amazon
     * Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Config
     * Managed Rules</a> in the <i>Config developer guide</i>.</p> <p>Config Custom
     * Rules are rules that you can develop either with Guard
     * (<code>CUSTOM_POLICY</code>) or Lambda (<code>CUSTOM_LAMBDA</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">Config
     * Custom Rules </a> in the <i>Config developer guide</i>.</p>
     */
    inline void SetOwner(const Owner& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>Indicates whether Amazon Web Services or the customer owns and manages the
     * Config rule.</p> <p>Config Managed Rules are predefined rules owned by Amazon
     * Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Config
     * Managed Rules</a> in the <i>Config developer guide</i>.</p> <p>Config Custom
     * Rules are rules that you can develop either with Guard
     * (<code>CUSTOM_POLICY</code>) or Lambda (<code>CUSTOM_LAMBDA</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">Config
     * Custom Rules </a> in the <i>Config developer guide</i>.</p>
     */
    inline void SetOwner(Owner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>Indicates whether Amazon Web Services or the customer owns and manages the
     * Config rule.</p> <p>Config Managed Rules are predefined rules owned by Amazon
     * Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Config
     * Managed Rules</a> in the <i>Config developer guide</i>.</p> <p>Config Custom
     * Rules are rules that you can develop either with Guard
     * (<code>CUSTOM_POLICY</code>) or Lambda (<code>CUSTOM_LAMBDA</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">Config
     * Custom Rules </a> in the <i>Config developer guide</i>.</p>
     */
    inline Source& WithOwner(const Owner& value) { SetOwner(value); return *this;}

    /**
     * <p>Indicates whether Amazon Web Services or the customer owns and manages the
     * Config rule.</p> <p>Config Managed Rules are predefined rules owned by Amazon
     * Web Services. For more information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">Config
     * Managed Rules</a> in the <i>Config developer guide</i>.</p> <p>Config Custom
     * Rules are rules that you can develop either with Guard
     * (<code>CUSTOM_POLICY</code>) or Lambda (<code>CUSTOM_LAMBDA</code>). For more
     * information, see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">Config
     * Custom Rules </a> in the <i>Config developer guide</i>.</p>
     */
    inline Source& WithOwner(Owner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline Source& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline Source& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>For Config Managed rules, a predefined identifier from a list. For example,
     * <code>IAM_PASSWORD_POLICY</code> is a managed rule. To reference a managed rule,
     * see <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
     * of Config Managed Rules</a>.</p> <p>For Config Custom Lambda rules, the
     * identifier is the Amazon Resource Name (ARN) of the rule's Lambda function, such
     * as
     * <code>arn:aws:lambda:us-east-2:123456789012:function:custom_rule_name</code>.</p>
     * <p>For Config Custom Policy rules, this field will be ignored.</p>
     */
    inline Source& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}


    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline const Aws::Vector<SourceDetail>& GetSourceDetails() const{ return m_sourceDetails; }

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline void SetSourceDetails(const Aws::Vector<SourceDetail>& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = value; }

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline void SetSourceDetails(Aws::Vector<SourceDetail>&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::move(value); }

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline Source& WithSourceDetails(const Aws::Vector<SourceDetail>& value) { SetSourceDetails(value); return *this;}

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline Source& WithSourceDetails(Aws::Vector<SourceDetail>&& value) { SetSourceDetails(std::move(value)); return *this;}

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline Source& AddSourceDetails(const SourceDetail& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails.push_back(value); return *this; }

    /**
     * <p>Provides the source and the message types that cause Config to evaluate your
     * Amazon Web Services resources against a rule. It also provides the frequency
     * with which you want Config to run evaluations for the rule if the trigger type
     * is periodic.</p> <p>If the owner is set to <code>CUSTOM_POLICY</code>, the only
     * acceptable values for the Config rule trigger message type are
     * <code>ConfigurationItemChangeNotification</code> and
     * <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline Source& AddSourceDetails(SourceDetail&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides the runtime system, policy definition, and whether debug logging is
     * enabled. Required when owner is set to <code>CUSTOM_POLICY</code>.</p>
     */
    inline const CustomPolicyDetails& GetCustomPolicyDetails() const{ return m_customPolicyDetails; }

    /**
     * <p>Provides the runtime system, policy definition, and whether debug logging is
     * enabled. Required when owner is set to <code>CUSTOM_POLICY</code>.</p>
     */
    inline bool CustomPolicyDetailsHasBeenSet() const { return m_customPolicyDetailsHasBeenSet; }

    /**
     * <p>Provides the runtime system, policy definition, and whether debug logging is
     * enabled. Required when owner is set to <code>CUSTOM_POLICY</code>.</p>
     */
    inline void SetCustomPolicyDetails(const CustomPolicyDetails& value) { m_customPolicyDetailsHasBeenSet = true; m_customPolicyDetails = value; }

    /**
     * <p>Provides the runtime system, policy definition, and whether debug logging is
     * enabled. Required when owner is set to <code>CUSTOM_POLICY</code>.</p>
     */
    inline void SetCustomPolicyDetails(CustomPolicyDetails&& value) { m_customPolicyDetailsHasBeenSet = true; m_customPolicyDetails = std::move(value); }

    /**
     * <p>Provides the runtime system, policy definition, and whether debug logging is
     * enabled. Required when owner is set to <code>CUSTOM_POLICY</code>.</p>
     */
    inline Source& WithCustomPolicyDetails(const CustomPolicyDetails& value) { SetCustomPolicyDetails(value); return *this;}

    /**
     * <p>Provides the runtime system, policy definition, and whether debug logging is
     * enabled. Required when owner is set to <code>CUSTOM_POLICY</code>.</p>
     */
    inline Source& WithCustomPolicyDetails(CustomPolicyDetails&& value) { SetCustomPolicyDetails(std::move(value)); return *this;}

  private:

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    Aws::Vector<SourceDetail> m_sourceDetails;
    bool m_sourceDetailsHasBeenSet = false;

    CustomPolicyDetails m_customPolicyDetails;
    bool m_customPolicyDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
