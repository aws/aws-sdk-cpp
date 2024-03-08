/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/GeneratedTemplateDeletionPolicy.h>
#include <aws/cloudformation/model/GeneratedTemplateUpdateReplacePolicy.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The configuration details of a generated template.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class TemplateConfiguration
  {
  public:
    AWS_CLOUDFORMATION_API TemplateConfiguration();
    AWS_CLOUDFORMATION_API TemplateConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TemplateConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The <code>DeletionPolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the stack is deleted.</p> </li> <li> <p> <code>RETAIN</code>
     * - retain all resources when the stack is deleted.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * <code>DeletionPolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const GeneratedTemplateDeletionPolicy& GetDeletionPolicy() const{ return m_deletionPolicy; }

    /**
     * <p>The <code>DeletionPolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the stack is deleted.</p> </li> <li> <p> <code>RETAIN</code>
     * - retain all resources when the stack is deleted.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * <code>DeletionPolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline bool DeletionPolicyHasBeenSet() const { return m_deletionPolicyHasBeenSet; }

    /**
     * <p>The <code>DeletionPolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the stack is deleted.</p> </li> <li> <p> <code>RETAIN</code>
     * - retain all resources when the stack is deleted.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * <code>DeletionPolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetDeletionPolicy(const GeneratedTemplateDeletionPolicy& value) { m_deletionPolicyHasBeenSet = true; m_deletionPolicy = value; }

    /**
     * <p>The <code>DeletionPolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the stack is deleted.</p> </li> <li> <p> <code>RETAIN</code>
     * - retain all resources when the stack is deleted.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * <code>DeletionPolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetDeletionPolicy(GeneratedTemplateDeletionPolicy&& value) { m_deletionPolicyHasBeenSet = true; m_deletionPolicy = std::move(value); }

    /**
     * <p>The <code>DeletionPolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the stack is deleted.</p> </li> <li> <p> <code>RETAIN</code>
     * - retain all resources when the stack is deleted.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * <code>DeletionPolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline TemplateConfiguration& WithDeletionPolicy(const GeneratedTemplateDeletionPolicy& value) { SetDeletionPolicy(value); return *this;}

    /**
     * <p>The <code>DeletionPolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the stack is deleted.</p> </li> <li> <p> <code>RETAIN</code>
     * - retain all resources when the stack is deleted.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * <code>DeletionPolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline TemplateConfiguration& WithDeletionPolicy(GeneratedTemplateDeletionPolicy&& value) { SetDeletionPolicy(std::move(value)); return *this;}


    /**
     * <p>The <code>UpdateReplacePolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the resource is replaced during an update operation.</p>
     * </li> <li> <p> <code>RETAIN</code> - retain all resources when the resource is
     * replaced during an update operation.</p> </li> </ul> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-updatereplacepolicy.html">
     * <code>UpdateReplacePolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const GeneratedTemplateUpdateReplacePolicy& GetUpdateReplacePolicy() const{ return m_updateReplacePolicy; }

    /**
     * <p>The <code>UpdateReplacePolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the resource is replaced during an update operation.</p>
     * </li> <li> <p> <code>RETAIN</code> - retain all resources when the resource is
     * replaced during an update operation.</p> </li> </ul> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-updatereplacepolicy.html">
     * <code>UpdateReplacePolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline bool UpdateReplacePolicyHasBeenSet() const { return m_updateReplacePolicyHasBeenSet; }

    /**
     * <p>The <code>UpdateReplacePolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the resource is replaced during an update operation.</p>
     * </li> <li> <p> <code>RETAIN</code> - retain all resources when the resource is
     * replaced during an update operation.</p> </li> </ul> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-updatereplacepolicy.html">
     * <code>UpdateReplacePolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetUpdateReplacePolicy(const GeneratedTemplateUpdateReplacePolicy& value) { m_updateReplacePolicyHasBeenSet = true; m_updateReplacePolicy = value; }

    /**
     * <p>The <code>UpdateReplacePolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the resource is replaced during an update operation.</p>
     * </li> <li> <p> <code>RETAIN</code> - retain all resources when the resource is
     * replaced during an update operation.</p> </li> </ul> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-updatereplacepolicy.html">
     * <code>UpdateReplacePolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline void SetUpdateReplacePolicy(GeneratedTemplateUpdateReplacePolicy&& value) { m_updateReplacePolicyHasBeenSet = true; m_updateReplacePolicy = std::move(value); }

    /**
     * <p>The <code>UpdateReplacePolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the resource is replaced during an update operation.</p>
     * </li> <li> <p> <code>RETAIN</code> - retain all resources when the resource is
     * replaced during an update operation.</p> </li> </ul> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-updatereplacepolicy.html">
     * <code>UpdateReplacePolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline TemplateConfiguration& WithUpdateReplacePolicy(const GeneratedTemplateUpdateReplacePolicy& value) { SetUpdateReplacePolicy(value); return *this;}

    /**
     * <p>The <code>UpdateReplacePolicy</code> assigned to resources in the generated
     * template. Supported values are:</p> <ul> <li> <p> <code>DELETE</code> - delete
     * all resources when the resource is replaced during an update operation.</p>
     * </li> <li> <p> <code>RETAIN</code> - retain all resources when the resource is
     * replaced during an update operation.</p> </li> </ul> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-updatereplacepolicy.html">
     * <code>UpdateReplacePolicy</code> attribute</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline TemplateConfiguration& WithUpdateReplacePolicy(GeneratedTemplateUpdateReplacePolicy&& value) { SetUpdateReplacePolicy(std::move(value)); return *this;}

  private:

    GeneratedTemplateDeletionPolicy m_deletionPolicy;
    bool m_deletionPolicyHasBeenSet = false;

    GeneratedTemplateUpdateReplacePolicy m_updateReplacePolicy;
    bool m_updateReplacePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
