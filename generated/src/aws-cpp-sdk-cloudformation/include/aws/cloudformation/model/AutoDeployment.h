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
   * <p>[Service-managed permissions] Describes whether StackSets automatically
   * deploys to Organizations accounts that are added to a target organization or
   * organizational unit (OU).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AutoDeployment">AWS
   * API Reference</a></p>
   */
  class AutoDeployment
  {
  public:
    AWS_CLOUDFORMATION_API AutoDeployment();
    AWS_CLOUDFORMATION_API AutoDeployment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API AutoDeployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If set to <code>true</code>, StackSets automatically deploys additional stack
     * instances to Organizations accounts that are added to a target organization or
     * organizational unit (OU) in the specified Regions. If an account is removed from
     * a target organization or OU, StackSets deletes stack instances from the account
     * in the specified Regions.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AutoDeployment& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, stack resources are retained when an account is
     * removed from a target organization or OU. If set to <code>false</code>, stack
     * resources are deleted. Specify only if <code>Enabled</code> is set to
     * <code>True</code>.</p>
     */
    inline bool GetRetainStacksOnAccountRemoval() const{ return m_retainStacksOnAccountRemoval; }
    inline bool RetainStacksOnAccountRemovalHasBeenSet() const { return m_retainStacksOnAccountRemovalHasBeenSet; }
    inline void SetRetainStacksOnAccountRemoval(bool value) { m_retainStacksOnAccountRemovalHasBeenSet = true; m_retainStacksOnAccountRemoval = value; }
    inline AutoDeployment& WithRetainStacksOnAccountRemoval(bool value) { SetRetainStacksOnAccountRemoval(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_retainStacksOnAccountRemoval;
    bool m_retainStacksOnAccountRemovalHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
