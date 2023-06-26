/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/KeywordInputType.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p>A keyword that relates to the control data source.</p> <p>For manual
   * evidence, this keyword indicates if the manual evidence is a file or text.</p>
   * <p>For automated evidence, this keyword identifies a specific CloudTrail event,
   * Config rule, Security Hub control, or Amazon Web Services API name. </p> <p> To
   * learn more about the supported keywords that you can use when mapping a control
   * data source, see the following pages in the <i>Audit Manager User Guide</i>:</p>
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">Config
   * rules supported by Audit Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">Security
   * Hub controls supported by Audit Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">API
   * calls supported by Audit Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-cloudtrail.html">CloudTrail
   * event names supported by Audit Manager</a> </p> </li> </ul><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/SourceKeyword">AWS
   * API Reference</a></p>
   */
  class SourceKeyword
  {
  public:
    AWS_AUDITMANAGER_API SourceKeyword();
    AWS_AUDITMANAGER_API SourceKeyword(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API SourceKeyword& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The input method for the keyword. </p> <ul> <li> <p>
     * <code>SELECT_FROM_LIST</code> is used when mapping a data source for automated
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>SELECT_FROM_LIST</code>, a keyword must be selected to collect automated
     * evidence. For example, this keyword can be a CloudTrail event name, a rule name
     * for Config, a Security Hub control, or the name of an Amazon Web Services API
     * call.</p> </li> </ul> </li> <li> <p> <code>UPLOAD_FILE</code> and
     * <code>INPUT_TEXT</code> are only used when mapping a data source for manual
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>UPLOAD_FILE</code>, a file must be uploaded as manual evidence.</p> </li>
     * <li> <p>When <code>keywordInputType</code> is <code>INPUT_TEXT</code>, text must
     * be entered as manual evidence.</p> </li> </ul> </li> </ul>
     */
    inline const KeywordInputType& GetKeywordInputType() const{ return m_keywordInputType; }

    /**
     * <p> The input method for the keyword. </p> <ul> <li> <p>
     * <code>SELECT_FROM_LIST</code> is used when mapping a data source for automated
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>SELECT_FROM_LIST</code>, a keyword must be selected to collect automated
     * evidence. For example, this keyword can be a CloudTrail event name, a rule name
     * for Config, a Security Hub control, or the name of an Amazon Web Services API
     * call.</p> </li> </ul> </li> <li> <p> <code>UPLOAD_FILE</code> and
     * <code>INPUT_TEXT</code> are only used when mapping a data source for manual
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>UPLOAD_FILE</code>, a file must be uploaded as manual evidence.</p> </li>
     * <li> <p>When <code>keywordInputType</code> is <code>INPUT_TEXT</code>, text must
     * be entered as manual evidence.</p> </li> </ul> </li> </ul>
     */
    inline bool KeywordInputTypeHasBeenSet() const { return m_keywordInputTypeHasBeenSet; }

    /**
     * <p> The input method for the keyword. </p> <ul> <li> <p>
     * <code>SELECT_FROM_LIST</code> is used when mapping a data source for automated
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>SELECT_FROM_LIST</code>, a keyword must be selected to collect automated
     * evidence. For example, this keyword can be a CloudTrail event name, a rule name
     * for Config, a Security Hub control, or the name of an Amazon Web Services API
     * call.</p> </li> </ul> </li> <li> <p> <code>UPLOAD_FILE</code> and
     * <code>INPUT_TEXT</code> are only used when mapping a data source for manual
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>UPLOAD_FILE</code>, a file must be uploaded as manual evidence.</p> </li>
     * <li> <p>When <code>keywordInputType</code> is <code>INPUT_TEXT</code>, text must
     * be entered as manual evidence.</p> </li> </ul> </li> </ul>
     */
    inline void SetKeywordInputType(const KeywordInputType& value) { m_keywordInputTypeHasBeenSet = true; m_keywordInputType = value; }

    /**
     * <p> The input method for the keyword. </p> <ul> <li> <p>
     * <code>SELECT_FROM_LIST</code> is used when mapping a data source for automated
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>SELECT_FROM_LIST</code>, a keyword must be selected to collect automated
     * evidence. For example, this keyword can be a CloudTrail event name, a rule name
     * for Config, a Security Hub control, or the name of an Amazon Web Services API
     * call.</p> </li> </ul> </li> <li> <p> <code>UPLOAD_FILE</code> and
     * <code>INPUT_TEXT</code> are only used when mapping a data source for manual
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>UPLOAD_FILE</code>, a file must be uploaded as manual evidence.</p> </li>
     * <li> <p>When <code>keywordInputType</code> is <code>INPUT_TEXT</code>, text must
     * be entered as manual evidence.</p> </li> </ul> </li> </ul>
     */
    inline void SetKeywordInputType(KeywordInputType&& value) { m_keywordInputTypeHasBeenSet = true; m_keywordInputType = std::move(value); }

    /**
     * <p> The input method for the keyword. </p> <ul> <li> <p>
     * <code>SELECT_FROM_LIST</code> is used when mapping a data source for automated
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>SELECT_FROM_LIST</code>, a keyword must be selected to collect automated
     * evidence. For example, this keyword can be a CloudTrail event name, a rule name
     * for Config, a Security Hub control, or the name of an Amazon Web Services API
     * call.</p> </li> </ul> </li> <li> <p> <code>UPLOAD_FILE</code> and
     * <code>INPUT_TEXT</code> are only used when mapping a data source for manual
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>UPLOAD_FILE</code>, a file must be uploaded as manual evidence.</p> </li>
     * <li> <p>When <code>keywordInputType</code> is <code>INPUT_TEXT</code>, text must
     * be entered as manual evidence.</p> </li> </ul> </li> </ul>
     */
    inline SourceKeyword& WithKeywordInputType(const KeywordInputType& value) { SetKeywordInputType(value); return *this;}

    /**
     * <p> The input method for the keyword. </p> <ul> <li> <p>
     * <code>SELECT_FROM_LIST</code> is used when mapping a data source for automated
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>SELECT_FROM_LIST</code>, a keyword must be selected to collect automated
     * evidence. For example, this keyword can be a CloudTrail event name, a rule name
     * for Config, a Security Hub control, or the name of an Amazon Web Services API
     * call.</p> </li> </ul> </li> <li> <p> <code>UPLOAD_FILE</code> and
     * <code>INPUT_TEXT</code> are only used when mapping a data source for manual
     * evidence.</p> <ul> <li> <p>When <code>keywordInputType</code> is
     * <code>UPLOAD_FILE</code>, a file must be uploaded as manual evidence.</p> </li>
     * <li> <p>When <code>keywordInputType</code> is <code>INPUT_TEXT</code>, text must
     * be entered as manual evidence.</p> </li> </ul> </li> </ul>
     */
    inline SourceKeyword& WithKeywordInputType(KeywordInputType&& value) { SetKeywordInputType(std::move(value)); return *this;}


    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline const Aws::String& GetKeywordValue() const{ return m_keywordValue; }

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline bool KeywordValueHasBeenSet() const { return m_keywordValueHasBeenSet; }

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline void SetKeywordValue(const Aws::String& value) { m_keywordValueHasBeenSet = true; m_keywordValue = value; }

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline void SetKeywordValue(Aws::String&& value) { m_keywordValueHasBeenSet = true; m_keywordValue = std::move(value); }

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline void SetKeywordValue(const char* value) { m_keywordValueHasBeenSet = true; m_keywordValue.assign(value); }

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline SourceKeyword& WithKeywordValue(const Aws::String& value) { SetKeywordValue(value); return *this;}

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline SourceKeyword& WithKeywordValue(Aws::String&& value) { SetKeywordValue(std::move(value)); return *this;}

    /**
     * <p> The value of the keyword that's used when mapping a control data source. For
     * example, this can be a CloudTrail event name, a rule name for Config, a Security
     * Hub control, or the name of an Amazon Web Services API call. </p> <p>If you’re
     * mapping a data source to a rule in Config, the <code>keywordValue</code> that
     * you specify depends on the type of rule:</p> <ul> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_use-managed-rules.html">managed
     * rules</a>, you can use the rule identifier as the <code>keywordValue</code>. You
     * can find the rule identifier from the <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">list
     * of Config managed rules</a>. For some rules, the rule identifier is different
     * from the rule name. For example, the rule name <code>restricted-ssh</code> has
     * the following rule identifier: <code>INCOMING_SSH_DISABLED</code>. Make sure to
     * use the rule identifier, not the rule name. </p> <p>Keyword example for managed
     * rules:</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the
     * custom rule from a managed rule. </p> <p>Keyword example for custom rules:</p>
     * <ul> <li> <p>Custom rule name: my-custom-config-rule</p> <p>
     * <code>keywordValue</code>: <code>Custom_my-custom-config-rule</code> </p> </li>
     * </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name. </p> <p>Keyword examples for
     * service-linked rules:</p> <ul> <li> <p>Service-linked rule name:
     * CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>  <p>The <code>keywordValue</code> is case sensitive. If
     * you enter a value incorrectly, Audit Manager might not recognize the data source
     * mapping. As a result, you might not successfully collect evidence from that data
     * source as intended. </p> <p>Keep in mind the following requirements, depending
     * on the data source type that you're using. </p> <ol> <li> <p>For Config: </p>
     * <ul> <li> <p>For managed rules, make sure that the <code>keywordValue</code> is
     * the rule identifier in <code>ALL_CAPS_WITH_UNDERSCORES</code>. For example,
     * <code>CLOUDWATCH_LOG_GROUP_ENCRYPTED</code>. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">supported
     * Config managed rules</a>.</p> </li> <li> <p>For custom rules, make sure that the
     * <code>keywordValue</code> has the <code>Custom_</code> prefix followed by the
     * custom rule name. The format of the custom rule name itself may vary. For
     * accuracy, we recommend that you visit the <a
     * href="https://console.aws.amazon.com/config/">Config console</a> to verify your
     * custom rule name.</p> </li> </ul> </li> <li> <p>For Security Hub: The format
     * varies for Security Hub control names. For accuracy, we recommend that you
     * reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">supported
     * Security Hub controls</a>.</p> </li> <li> <p>For Amazon Web Services API calls:
     * Make sure that the <code>keywordValue</code> is written as
     * <code>serviceprefix_ActionName</code>. For example, <code>iam_ListGroups</code>.
     * For accuracy, we recommend that you reference the list of <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-api.html">supported
     * API calls</a>.</p> </li> <li> <p>For CloudTrail: Make sure that the
     * <code>keywordValue</code> is written as <code>serviceprefix_ActionName</code>.
     * For example, <code>cloudtrail_StartLogging</code>. For accuracy, we recommend
     * that you review the Amazon Web Service prefix and action names in the <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/reference_policies_actions-resources-contextkeys.html">Service
     * Authorization Reference</a>.</p> </li> </ol> 
     */
    inline SourceKeyword& WithKeywordValue(const char* value) { SetKeywordValue(value); return *this;}

  private:

    KeywordInputType m_keywordInputType;
    bool m_keywordInputTypeHasBeenSet = false;

    Aws::String m_keywordValue;
    bool m_keywordValueHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
