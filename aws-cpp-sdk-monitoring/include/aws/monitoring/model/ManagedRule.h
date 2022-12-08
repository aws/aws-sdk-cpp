/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p> Contains the information that's required to enable a managed Contributor
   * Insights rule for an Amazon Web Services resource. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ManagedRule">AWS
   * API Reference</a></p>
   */
  class ManagedRule
  {
  public:
    AWS_CLOUDWATCH_API ManagedRule();
    AWS_CLOUDWATCH_API ManagedRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API ManagedRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline ManagedRule& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline ManagedRule& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p> The template name for the managed Contributor Insights rule, as returned by
     * <code>ListManagedInsightRules</code>. </p>
     */
    inline ManagedRule& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline ManagedRule& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline ManagedRule& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p> The ARN of an Amazon Web Services resource that has managed Contributor
     * Insights rules. </p>
     */
    inline ManagedRule& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline ManagedRule& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline ManagedRule& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline ManagedRule& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A list of key-value pairs that you can associate with a managed Contributor
     * Insights rule. You can associate as many as 50 tags with a rule. Tags can help
     * you organize and categorize your resources. You also can use them to scope user
     * permissions by granting a user permission to access or change only the resources
     * that have certain tag values. To associate tags with a rule, you must have the
     * <code>cloudwatch:TagResource</code> permission in addition to the
     * <code>cloudwatch:PutInsightRule</code> permission. If you are using this
     * operation to update an existing Contributor Insights rule, any tags that you
     * specify in this parameter are ignored. To change the tags of an existing rule,
     * use <code>TagResource</code>. </p>
     */
    inline ManagedRule& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
