/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ChangeSetHookTargetDetails.h>
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
   * <p>Specifies the resource, the Hook, and the Hook version to be
   * invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ChangeSetHook">AWS
   * API Reference</a></p>
   */
  class ChangeSetHook
  {
  public:
    AWS_CLOUDFORMATION_API ChangeSetHook() = default;
    AWS_CLOUDFORMATION_API ChangeSetHook(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetHook& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The specific point in the provisioning process where the Hook is invoked.</p>
     */
    inline HookInvocationPoint GetInvocationPoint() const { return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    inline void SetInvocationPoint(HookInvocationPoint value) { m_invocationPointHasBeenSet = true; m_invocationPoint = value; }
    inline ChangeSetHook& WithInvocationPoint(HookInvocationPoint value) { SetInvocationPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Hook failure mode for non-compliant resources in the followings
     * ways.</p> <ul> <li> <p> <code>FAIL</code> Stops provisioning resources.</p>
     * </li> <li> <p> <code>WARN</code> Allows provisioning to continue with a warning
     * message.</p> </li> </ul>
     */
    inline HookFailureMode GetFailureMode() const { return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    inline void SetFailureMode(HookFailureMode value) { m_failureModeHasBeenSet = true; m_failureMode = value; }
    inline ChangeSetHook& WithFailureMode(HookFailureMode value) { SetFailureMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name for your Hook. Specifies a three-part namespace for your
     * Hook, with a recommended pattern of
     * <code>Organization::Service::Hook</code>.</p>  <p>The following
     * organization namespaces are reserved and can't be used in your Hook type
     * names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>ASK</code> </p> </li> <li> <p> <code>AWS</code> </p> </li> <li> <p>
     * <code>Custom</code> </p> </li> <li> <p> <code>Dev</code> </p> </li> </ul>
     * 
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ChangeSetHook& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the type specified.</p>
     */
    inline const Aws::String& GetTypeVersionId() const { return m_typeVersionId; }
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }
    template<typename TypeVersionIdT = Aws::String>
    void SetTypeVersionId(TypeVersionIdT&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::forward<TypeVersionIdT>(value); }
    template<typename TypeVersionIdT = Aws::String>
    ChangeSetHook& WithTypeVersionId(TypeVersionIdT&& value) { SetTypeVersionId(std::forward<TypeVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the type configuration.</p>
     */
    inline const Aws::String& GetTypeConfigurationVersionId() const { return m_typeConfigurationVersionId; }
    inline bool TypeConfigurationVersionIdHasBeenSet() const { return m_typeConfigurationVersionIdHasBeenSet; }
    template<typename TypeConfigurationVersionIdT = Aws::String>
    void SetTypeConfigurationVersionId(TypeConfigurationVersionIdT&& value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId = std::forward<TypeConfigurationVersionIdT>(value); }
    template<typename TypeConfigurationVersionIdT = Aws::String>
    ChangeSetHook& WithTypeConfigurationVersionId(TypeConfigurationVersionIdT&& value) { SetTypeConfigurationVersionId(std::forward<TypeConfigurationVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about the target that the Hook will run against.</p>
     */
    inline const ChangeSetHookTargetDetails& GetTargetDetails() const { return m_targetDetails; }
    inline bool TargetDetailsHasBeenSet() const { return m_targetDetailsHasBeenSet; }
    template<typename TargetDetailsT = ChangeSetHookTargetDetails>
    void SetTargetDetails(TargetDetailsT&& value) { m_targetDetailsHasBeenSet = true; m_targetDetails = std::forward<TargetDetailsT>(value); }
    template<typename TargetDetailsT = ChangeSetHookTargetDetails>
    ChangeSetHook& WithTargetDetails(TargetDetailsT&& value) { SetTargetDetails(std::forward<TargetDetailsT>(value)); return *this;}
    ///@}
  private:

    HookInvocationPoint m_invocationPoint{HookInvocationPoint::NOT_SET};
    bool m_invocationPointHasBeenSet = false;

    HookFailureMode m_failureMode{HookFailureMode::NOT_SET};
    bool m_failureModeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeVersionId;
    bool m_typeVersionIdHasBeenSet = false;

    Aws::String m_typeConfigurationVersionId;
    bool m_typeConfigurationVersionIdHasBeenSet = false;

    ChangeSetHookTargetDetails m_targetDetails;
    bool m_targetDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
