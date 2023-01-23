/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LaunchTemplateVersion.h>
#include <aws/ec2/model/ValidationWarning.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateLaunchTemplateVersionResponse
  {
  public:
    AWS_EC2_API CreateLaunchTemplateVersionResponse();
    AWS_EC2_API CreateLaunchTemplateVersionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLaunchTemplateVersionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the launch template version.</p>
     */
    inline const LaunchTemplateVersion& GetLaunchTemplateVersion() const{ return m_launchTemplateVersion; }

    /**
     * <p>Information about the launch template version.</p>
     */
    inline void SetLaunchTemplateVersion(const LaunchTemplateVersion& value) { m_launchTemplateVersion = value; }

    /**
     * <p>Information about the launch template version.</p>
     */
    inline void SetLaunchTemplateVersion(LaunchTemplateVersion&& value) { m_launchTemplateVersion = std::move(value); }

    /**
     * <p>Information about the launch template version.</p>
     */
    inline CreateLaunchTemplateVersionResponse& WithLaunchTemplateVersion(const LaunchTemplateVersion& value) { SetLaunchTemplateVersion(value); return *this;}

    /**
     * <p>Information about the launch template version.</p>
     */
    inline CreateLaunchTemplateVersionResponse& WithLaunchTemplateVersion(LaunchTemplateVersion&& value) { SetLaunchTemplateVersion(std::move(value)); return *this;}


    /**
     * <p>If the new version of the launch template contains parameters or parameter
     * combinations that are not valid, an error code and an error message are returned
     * for each issue that's found.</p>
     */
    inline const ValidationWarning& GetWarning() const{ return m_warning; }

    /**
     * <p>If the new version of the launch template contains parameters or parameter
     * combinations that are not valid, an error code and an error message are returned
     * for each issue that's found.</p>
     */
    inline void SetWarning(const ValidationWarning& value) { m_warning = value; }

    /**
     * <p>If the new version of the launch template contains parameters or parameter
     * combinations that are not valid, an error code and an error message are returned
     * for each issue that's found.</p>
     */
    inline void SetWarning(ValidationWarning&& value) { m_warning = std::move(value); }

    /**
     * <p>If the new version of the launch template contains parameters or parameter
     * combinations that are not valid, an error code and an error message are returned
     * for each issue that's found.</p>
     */
    inline CreateLaunchTemplateVersionResponse& WithWarning(const ValidationWarning& value) { SetWarning(value); return *this;}

    /**
     * <p>If the new version of the launch template contains parameters or parameter
     * combinations that are not valid, an error code and an error message are returned
     * for each issue that's found.</p>
     */
    inline CreateLaunchTemplateVersionResponse& WithWarning(ValidationWarning&& value) { SetWarning(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateLaunchTemplateVersionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLaunchTemplateVersionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LaunchTemplateVersion m_launchTemplateVersion;

    ValidationWarning m_warning;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
