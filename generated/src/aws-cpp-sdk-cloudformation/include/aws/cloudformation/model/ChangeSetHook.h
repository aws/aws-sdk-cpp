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
   * <p>Specifies the resource, the hook, and the hook version to be
   * invoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ChangeSetHook">AWS
   * API Reference</a></p>
   */
  class ChangeSetHook
  {
  public:
    AWS_CLOUDFORMATION_API ChangeSetHook();
    AWS_CLOUDFORMATION_API ChangeSetHook(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetHook& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the points in provisioning logic where a hook is invoked.</p>
     */
    inline const HookInvocationPoint& GetInvocationPoint() const{ return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    inline void SetInvocationPoint(const HookInvocationPoint& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = value; }
    inline void SetInvocationPoint(HookInvocationPoint&& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = std::move(value); }
    inline ChangeSetHook& WithInvocationPoint(const HookInvocationPoint& value) { SetInvocationPoint(value); return *this;}
    inline ChangeSetHook& WithInvocationPoint(HookInvocationPoint&& value) { SetInvocationPoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the hook failure mode for non-compliant resources in the followings
     * ways.</p> <ul> <li> <p> <code>FAIL</code> Stops provisioning resources.</p>
     * </li> <li> <p> <code>WARN</code> Allows provisioning to continue with a warning
     * message.</p> </li> </ul>
     */
    inline const HookFailureMode& GetFailureMode() const{ return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    inline void SetFailureMode(const HookFailureMode& value) { m_failureModeHasBeenSet = true; m_failureMode = value; }
    inline void SetFailureMode(HookFailureMode&& value) { m_failureModeHasBeenSet = true; m_failureMode = std::move(value); }
    inline ChangeSetHook& WithFailureMode(const HookFailureMode& value) { SetFailureMode(value); return *this;}
    inline ChangeSetHook& WithFailureMode(HookFailureMode&& value) { SetFailureMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name for your hook. Specifies a three-part namespace for your
     * hook, with a recommended pattern of
     * <code>Organization::Service::Hook</code>.</p>  <p>The following
     * organization namespaces are reserved and can't be used in your hook type
     * names:</p> <ul> <li> <p> <code>Alexa</code> </p> </li> <li> <p>
     * <code>AMZN</code> </p> </li> <li> <p> <code>Amazon</code> </p> </li> <li> <p>
     * <code>ASK</code> </p> </li> <li> <p> <code>AWS</code> </p> </li> <li> <p>
     * <code>Custom</code> </p> </li> <li> <p> <code>Dev</code> </p> </li> </ul>
     * 
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline ChangeSetHook& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ChangeSetHook& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ChangeSetHook& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the type specified.</p>
     */
    inline const Aws::String& GetTypeVersionId() const{ return m_typeVersionId; }
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }
    inline void SetTypeVersionId(const Aws::String& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = value; }
    inline void SetTypeVersionId(Aws::String&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::move(value); }
    inline void SetTypeVersionId(const char* value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId.assign(value); }
    inline ChangeSetHook& WithTypeVersionId(const Aws::String& value) { SetTypeVersionId(value); return *this;}
    inline ChangeSetHook& WithTypeVersionId(Aws::String&& value) { SetTypeVersionId(std::move(value)); return *this;}
    inline ChangeSetHook& WithTypeVersionId(const char* value) { SetTypeVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the type configuration.</p>
     */
    inline const Aws::String& GetTypeConfigurationVersionId() const{ return m_typeConfigurationVersionId; }
    inline bool TypeConfigurationVersionIdHasBeenSet() const { return m_typeConfigurationVersionIdHasBeenSet; }
    inline void SetTypeConfigurationVersionId(const Aws::String& value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId = value; }
    inline void SetTypeConfigurationVersionId(Aws::String&& value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId = std::move(value); }
    inline void SetTypeConfigurationVersionId(const char* value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId.assign(value); }
    inline ChangeSetHook& WithTypeConfigurationVersionId(const Aws::String& value) { SetTypeConfigurationVersionId(value); return *this;}
    inline ChangeSetHook& WithTypeConfigurationVersionId(Aws::String&& value) { SetTypeConfigurationVersionId(std::move(value)); return *this;}
    inline ChangeSetHook& WithTypeConfigurationVersionId(const char* value) { SetTypeConfigurationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about the target that the hook will run against.</p>
     */
    inline const ChangeSetHookTargetDetails& GetTargetDetails() const{ return m_targetDetails; }
    inline bool TargetDetailsHasBeenSet() const { return m_targetDetailsHasBeenSet; }
    inline void SetTargetDetails(const ChangeSetHookTargetDetails& value) { m_targetDetailsHasBeenSet = true; m_targetDetails = value; }
    inline void SetTargetDetails(ChangeSetHookTargetDetails&& value) { m_targetDetailsHasBeenSet = true; m_targetDetails = std::move(value); }
    inline ChangeSetHook& WithTargetDetails(const ChangeSetHookTargetDetails& value) { SetTargetDetails(value); return *this;}
    inline ChangeSetHook& WithTargetDetails(ChangeSetHookTargetDetails&& value) { SetTargetDetails(std::move(value)); return *this;}
    ///@}
  private:

    HookInvocationPoint m_invocationPoint;
    bool m_invocationPointHasBeenSet = false;

    HookFailureMode m_failureMode;
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
