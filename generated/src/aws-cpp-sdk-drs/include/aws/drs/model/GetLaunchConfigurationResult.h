﻿/**
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
    AWS_DRS_API GetLaunchConfigurationResult();
    AWS_DRS_API GetLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API GetLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Whether we should copy the Private IP of the Source Server to the Recovery
     * Instance.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIp = value; }
    inline GetLaunchConfigurationResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we want to copy the tags of the Source Server to the EC2 machine of
     * the Recovery Instance.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline void SetCopyTags(bool value) { m_copyTags = value; }
    inline GetLaunchConfigurationResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 launch template ID of this launch configuration.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateID = value; }
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateID = std::move(value); }
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateID.assign(value); }
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Recovery Instance in EC2 after the recovery operation.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDisposition = value; }
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDisposition = std::move(value); }
    inline GetLaunchConfigurationResult& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}
    inline GetLaunchConfigurationResult& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch into existing instance properties.</p>
     */
    inline const LaunchIntoInstanceProperties& GetLaunchIntoInstanceProperties() const{ return m_launchIntoInstanceProperties; }
    inline void SetLaunchIntoInstanceProperties(const LaunchIntoInstanceProperties& value) { m_launchIntoInstanceProperties = value; }
    inline void SetLaunchIntoInstanceProperties(LaunchIntoInstanceProperties&& value) { m_launchIntoInstanceProperties = std::move(value); }
    inline GetLaunchConfigurationResult& WithLaunchIntoInstanceProperties(const LaunchIntoInstanceProperties& value) { SetLaunchIntoInstanceProperties(value); return *this;}
    inline GetLaunchConfigurationResult& WithLaunchIntoInstanceProperties(LaunchIntoInstanceProperties&& value) { SetLaunchIntoInstanceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The licensing configuration to be used for this launch configuration.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }
    inline void SetLicensing(const Licensing& value) { m_licensing = value; }
    inline void SetLicensing(Licensing&& value) { m_licensing = std::move(value); }
    inline GetLaunchConfigurationResult& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}
    inline GetLaunchConfigurationResult& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetLaunchConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetLaunchConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetLaunchConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we want to activate post-launch actions for the Source Server.</p>
     */
    inline bool GetPostLaunchEnabled() const{ return m_postLaunchEnabled; }
    inline void SetPostLaunchEnabled(bool value) { m_postLaunchEnabled = value; }
    inline GetLaunchConfigurationResult& WithPostLaunchEnabled(bool value) { SetPostLaunchEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server for this launch configuration.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }
    inline GetLaunchConfigurationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline GetLaunchConfigurationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline GetLaunchConfigurationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether Elastic Disaster Recovery should try to automatically choose the
     * instance type that best matches the OS, CPU, and RAM of your Source Server.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethod = value; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethod = std::move(value); }
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLaunchConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLaunchConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLaunchConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_copyPrivateIp;

    bool m_copyTags;

    Aws::String m_ec2LaunchTemplateID;

    LaunchDisposition m_launchDisposition;

    LaunchIntoInstanceProperties m_launchIntoInstanceProperties;

    Licensing m_licensing;

    Aws::String m_name;

    bool m_postLaunchEnabled;

    Aws::String m_sourceServerID;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
