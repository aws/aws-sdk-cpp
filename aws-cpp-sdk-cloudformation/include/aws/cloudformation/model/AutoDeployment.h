/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>[<code>Service-managed</code> permissions] Describes whether StackSets
   * automatically deploys to AWS Organizations accounts that are added to a target
   * organization or organizational unit (OU).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AutoDeployment">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API AutoDeployment
  {
  public:
    AutoDeployment();
    AutoDeployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AutoDeployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If set to <code>true</code>, StackSets automatically deploys additional stack
     * instances to AWS Organizations accounts that are added to a target organization
     * or organizational unit (OU) in the specified Regions. If an account is removed
     * from a target organization or OU, StackSets deletes stack instances from the
     * account in the specified Regions.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If set to <code>true</code>, StackSets automatically deploys additional stack
     * instances to AWS Organizations accounts that are added to a target organization
     * or organizational unit (OU) in the specified Regions. If an account is removed
     * from a target organization or OU, StackSets deletes stack instances from the
     * account in the specified Regions.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, StackSets automatically deploys additional stack
     * instances to AWS Organizations accounts that are added to a target organization
     * or organizational unit (OU) in the specified Regions. If an account is removed
     * from a target organization or OU, StackSets deletes stack instances from the
     * account in the specified Regions.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If set to <code>true</code>, StackSets automatically deploys additional stack
     * instances to AWS Organizations accounts that are added to a target organization
     * or organizational unit (OU) in the specified Regions. If an account is removed
     * from a target organization or OU, StackSets deletes stack instances from the
     * account in the specified Regions.</p>
     */
    inline AutoDeployment& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>If set to <code>true</code>, stack resources are retained when an account is
     * removed from a target organization or OU. If set to <code>false</code>, stack
     * resources are deleted. Specify only if <code>Enabled</code> is set to
     * <code>True</code>.</p>
     */
    inline bool GetRetainStacksOnAccountRemoval() const{ return m_retainStacksOnAccountRemoval; }

    /**
     * <p>If set to <code>true</code>, stack resources are retained when an account is
     * removed from a target organization or OU. If set to <code>false</code>, stack
     * resources are deleted. Specify only if <code>Enabled</code> is set to
     * <code>True</code>.</p>
     */
    inline bool RetainStacksOnAccountRemovalHasBeenSet() const { return m_retainStacksOnAccountRemovalHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, stack resources are retained when an account is
     * removed from a target organization or OU. If set to <code>false</code>, stack
     * resources are deleted. Specify only if <code>Enabled</code> is set to
     * <code>True</code>.</p>
     */
    inline void SetRetainStacksOnAccountRemoval(bool value) { m_retainStacksOnAccountRemovalHasBeenSet = true; m_retainStacksOnAccountRemoval = value; }

    /**
     * <p>If set to <code>true</code>, stack resources are retained when an account is
     * removed from a target organization or OU. If set to <code>false</code>, stack
     * resources are deleted. Specify only if <code>Enabled</code> is set to
     * <code>True</code>.</p>
     */
    inline AutoDeployment& WithRetainStacksOnAccountRemoval(bool value) { SetRetainStacksOnAccountRemoval(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_retainStacksOnAccountRemoval;
    bool m_retainStacksOnAccountRemovalHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
