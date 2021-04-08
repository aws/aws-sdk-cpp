/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
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
namespace mgn
{
namespace Model
{
  class AWS_MGN_API GetLaunchConfigurationResult
  {
  public:
    GetLaunchConfigurationResult();
    GetLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIp = value; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}


    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTags = value; }

    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }

    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateID = value; }

    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateID = std::move(value); }

    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateID.assign(value); }

    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}

    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}

    /**
     * <p>Configure EC2 lauch configuration template ID.</p>
     */
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}


    /**
     * <p>Configure launch dispostion for launch configuration.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }

    /**
     * <p>Configure launch dispostion for launch configuration.</p>
     */
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDisposition = value; }

    /**
     * <p>Configure launch dispostion for launch configuration.</p>
     */
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDisposition = std::move(value); }

    /**
     * <p>Configure launch dispostion for launch configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}

    /**
     * <p>Configure launch dispostion for launch configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}


    /**
     * <p>Configure launch configuration OS licensing.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }

    /**
     * <p>Configure launch configuration OS licensing.</p>
     */
    inline void SetLicensing(const Licensing& value) { m_licensing = value; }

    /**
     * <p>Configure launch configuration OS licensing.</p>
     */
    inline void SetLicensing(Licensing&& value) { m_licensing = std::move(value); }

    /**
     * <p>Configure launch configuration OS licensing.</p>
     */
    inline GetLaunchConfigurationResult& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}

    /**
     * <p>Configure launch configuration OS licensing.</p>
     */
    inline GetLaunchConfigurationResult& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}


    /**
     * <p>Configure launch configuration name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Configure launch configuration name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Configure launch configuration name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Configure launch configuration name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Configure launch configuration name.</p>
     */
    inline GetLaunchConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Configure launch configuration name.</p>
     */
    inline GetLaunchConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Configure launch configuration name.</p>
     */
    inline GetLaunchConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }

    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }

    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }

    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline GetLaunchConfigurationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline GetLaunchConfigurationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Configure launch configuration Source Server ID.</p>
     */
    inline GetLaunchConfigurationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Configure launch configuration Target instance type right sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }

    /**
     * <p>Configure launch configuration Target instance type right sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethod = value; }

    /**
     * <p>Configure launch configuration Target instance type right sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethod = std::move(value); }

    /**
     * <p>Configure launch configuration Target instance type right sizing method.</p>
     */
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}

    /**
     * <p>Configure launch configuration Target instance type right sizing method.</p>
     */
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}

  private:

    bool m_copyPrivateIp;

    bool m_copyTags;

    Aws::String m_ec2LaunchTemplateID;

    LaunchDisposition m_launchDisposition;

    Licensing m_licensing;

    Aws::String m_name;

    Aws::String m_sourceServerID;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
