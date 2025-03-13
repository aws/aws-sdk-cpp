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
    AWS_EC2_API CreateLaunchTemplateVersionResponse() = default;
    AWS_EC2_API CreateLaunchTemplateVersionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLaunchTemplateVersionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the launch template version.</p>
     */
    inline const LaunchTemplateVersion& GetLaunchTemplateVersion() const { return m_launchTemplateVersion; }
    template<typename LaunchTemplateVersionT = LaunchTemplateVersion>
    void SetLaunchTemplateVersion(LaunchTemplateVersionT&& value) { m_launchTemplateVersionHasBeenSet = true; m_launchTemplateVersion = std::forward<LaunchTemplateVersionT>(value); }
    template<typename LaunchTemplateVersionT = LaunchTemplateVersion>
    CreateLaunchTemplateVersionResponse& WithLaunchTemplateVersion(LaunchTemplateVersionT&& value) { SetLaunchTemplateVersion(std::forward<LaunchTemplateVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the new version of the launch template contains parameters or parameter
     * combinations that are not valid, an error code and an error message are returned
     * for each issue that's found.</p>
     */
    inline const ValidationWarning& GetWarning() const { return m_warning; }
    template<typename WarningT = ValidationWarning>
    void SetWarning(WarningT&& value) { m_warningHasBeenSet = true; m_warning = std::forward<WarningT>(value); }
    template<typename WarningT = ValidationWarning>
    CreateLaunchTemplateVersionResponse& WithWarning(WarningT&& value) { SetWarning(std::forward<WarningT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateLaunchTemplateVersionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LaunchTemplateVersion m_launchTemplateVersion;
    bool m_launchTemplateVersionHasBeenSet = false;

    ValidationWarning m_warning;
    bool m_warningHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
