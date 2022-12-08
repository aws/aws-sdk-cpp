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
   * <p> The keyword to search for in CloudTrail logs, Config rules, Security Hub
   * checks, and Amazon Web Services API names. </p> <p> To learn more about the
   * supported keywords that you can use when mapping a control data source, see the
   * following pages in the <i>Audit Manager User Guide</i>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-ash.html">Config
   * rules supported by Audit Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/control-data-sources-config.html">Security
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
     * <p> The input method for the keyword. </p>
     */
    inline const KeywordInputType& GetKeywordInputType() const{ return m_keywordInputType; }

    /**
     * <p> The input method for the keyword. </p>
     */
    inline bool KeywordInputTypeHasBeenSet() const { return m_keywordInputTypeHasBeenSet; }

    /**
     * <p> The input method for the keyword. </p>
     */
    inline void SetKeywordInputType(const KeywordInputType& value) { m_keywordInputTypeHasBeenSet = true; m_keywordInputType = value; }

    /**
     * <p> The input method for the keyword. </p>
     */
    inline void SetKeywordInputType(KeywordInputType&& value) { m_keywordInputTypeHasBeenSet = true; m_keywordInputType = std::move(value); }

    /**
     * <p> The input method for the keyword. </p>
     */
    inline SourceKeyword& WithKeywordInputType(const KeywordInputType& value) { SetKeywordInputType(value); return *this;}

    /**
     * <p> The input method for the keyword. </p>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
     * of Config managed rules</a>.</p> <ul> <li> <p>Managed rule name: <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/s3-bucket-acl-prohibited.html">s3-bucket-acl-prohibited</a>
     * </p> <p> <code>keywordValue</code>: <code>S3_BUCKET_ACL_PROHIBITED</code> </p>
     * </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config_develop-rules.html">custom
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. This prefix distinguishes the rule
     * from a managed rule.</p> <ul> <li> <p>Custom rule name:
     * my-custom-config-rule</p> <p> <code>keywordValue</code>:
     * <code>Custom_my-custom-config-rule</code> </p> </li> </ul> </li> <li> <p>For <a
     * href="https://docs.aws.amazon.com/config/latest/developerguide/service-linked-awsconfig-rules.html">service-linked
     * rules</a>, you form the <code>keywordValue</code> by adding the
     * <code>Custom_</code> prefix to the rule name. In addition, you remove the suffix
     * ID that appears at the end of the rule name.</p> <ul> <li> <p>Service-linked
     * rule name: CustomRuleForAccount-conformance-pack-szsm1uv0w</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_CustomRuleForAccount-conformance-pack</code> </p> </li> <li>
     * <p>Service-linked rule name:
     * OrgConfigRule-s3-bucket-versioning-enabled-dbgzf8ba</p> <p>
     * <code>keywordValue</code>:
     * <code>Custom_OrgConfigRule-s3-bucket-versioning-enabled</code> </p> </li> </ul>
     * </li> </ul>
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
