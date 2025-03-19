/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchDisposition.h>
#include <aws/drs/model/LaunchIntoInstanceProperties.h>
#include <aws/drs/model/Licensing.h>
#include <aws/drs/model/TargetInstanceTypeRightSizingMethod.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{
  class GetLaunchConfigurationResult
  {
  public:
    AWS_DRS_API GetLaunchConfigurationResult() = default;
    AWS_DRS_API GetLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API GetLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether we should copy the Private IP of the Source Server to the Recovery
     * Instance.</p>
     */
    inline bool GetCopyPrivateIp() const { return m_copyPrivateIp; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline GetLaunchConfigurationResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we want to copy the tags of the Source Server to the EC2 machine of
     * the Recovery Instance.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline GetLaunchConfigurationResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 launch template ID of this launch configuration.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const { return m_ec2LaunchTemplateID; }
    template<typename Ec2LaunchTemplateIDT = Aws::String>
    void SetEc2LaunchTemplateID(Ec2LaunchTemplateIDT&& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = std::forward<Ec2LaunchTemplateIDT>(value); }
    template<typename Ec2LaunchTemplateIDT = Aws::String>
    GetLaunchConfigurationResult& WithEc2LaunchTemplateID(Ec2LaunchTemplateIDT&& value) { SetEc2LaunchTemplateID(std::forward<Ec2LaunchTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Recovery Instance in EC2 after the recovery operation.</p>
     */
    inline LaunchDisposition GetLaunchDisposition() const { return m_launchDisposition; }
    inline void SetLaunchDisposition(LaunchDisposition value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline GetLaunchConfigurationResult& WithLaunchDisposition(LaunchDisposition value) { SetLaunchDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch into existing instance properties.</p>
     */
    inline const LaunchIntoInstanceProperties& GetLaunchIntoInstanceProperties() const { return m_launchIntoInstanceProperties; }
    template<typename LaunchIntoInstancePropertiesT = LaunchIntoInstanceProperties>
    void SetLaunchIntoInstanceProperties(LaunchIntoInstancePropertiesT&& value) { m_launchIntoInstancePropertiesHasBeenSet = true; m_launchIntoInstanceProperties = std::forward<LaunchIntoInstancePropertiesT>(value); }
    template<typename LaunchIntoInstancePropertiesT = LaunchIntoInstanceProperties>
    GetLaunchConfigurationResult& WithLaunchIntoInstanceProperties(LaunchIntoInstancePropertiesT&& value) { SetLaunchIntoInstanceProperties(std::forward<LaunchIntoInstancePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The licensing configuration to be used for this launch configuration.</p>
     */
    inline const Licensing& GetLicensing() const { return m_licensing; }
    template<typename LicensingT = Licensing>
    void SetLicensing(LicensingT&& value) { m_licensingHasBeenSet = true; m_licensing = std::forward<LicensingT>(value); }
    template<typename LicensingT = Licensing>
    GetLaunchConfigurationResult& WithLicensing(LicensingT&& value) { SetLicensing(std::forward<LicensingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetLaunchConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we want to activate post-launch actions for the Source Server.</p>
     */
    inline bool GetPostLaunchEnabled() const { return m_postLaunchEnabled; }
    inline void SetPostLaunchEnabled(bool value) { m_postLaunchEnabledHasBeenSet = true; m_postLaunchEnabled = value; }
    inline GetLaunchConfigurationResult& WithPostLaunchEnabled(bool value) { SetPostLaunchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server for this launch configuration.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    GetLaunchConfigurationResult& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether Elastic Disaster Recovery should try to automatically choose the
     * instance type that best matches the OS, CPU, and RAM of your Source Server.</p>
     */
    inline TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethod() const { return m_targetInstanceTypeRightSizingMethod; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLaunchConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_copyPrivateIp{false};
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_ec2LaunchTemplateID;
    bool m_ec2LaunchTemplateIDHasBeenSet = false;

    LaunchDisposition m_launchDisposition{LaunchDisposition::NOT_SET};
    bool m_launchDispositionHasBeenSet = false;

    LaunchIntoInstanceProperties m_launchIntoInstanceProperties;
    bool m_launchIntoInstancePropertiesHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_postLaunchEnabled{false};
    bool m_postLaunchEnabledHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod{TargetInstanceTypeRightSizingMethod::NOT_SET};
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
