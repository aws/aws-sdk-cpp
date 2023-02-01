/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LaunchTemplate.h>
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
  class CreateLaunchTemplateResponse
  {
  public:
    AWS_EC2_API CreateLaunchTemplateResponse();
    AWS_EC2_API CreateLaunchTemplateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLaunchTemplateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the launch template.</p>
     */
    inline const LaunchTemplate& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>Information about the launch template.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplate& value) { m_launchTemplate = value; }

    /**
     * <p>Information about the launch template.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplate&& value) { m_launchTemplate = std::move(value); }

    /**
     * <p>Information about the launch template.</p>
     */
    inline CreateLaunchTemplateResponse& WithLaunchTemplate(const LaunchTemplate& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>Information about the launch template.</p>
     */
    inline CreateLaunchTemplateResponse& WithLaunchTemplate(LaunchTemplate&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>If the launch template contains parameters or parameter combinations that are
     * not valid, an error code and an error message are returned for each issue that's
     * found.</p>
     */
    inline const ValidationWarning& GetWarning() const{ return m_warning; }

    /**
     * <p>If the launch template contains parameters or parameter combinations that are
     * not valid, an error code and an error message are returned for each issue that's
     * found.</p>
     */
    inline void SetWarning(const ValidationWarning& value) { m_warning = value; }

    /**
     * <p>If the launch template contains parameters or parameter combinations that are
     * not valid, an error code and an error message are returned for each issue that's
     * found.</p>
     */
    inline void SetWarning(ValidationWarning&& value) { m_warning = std::move(value); }

    /**
     * <p>If the launch template contains parameters or parameter combinations that are
     * not valid, an error code and an error message are returned for each issue that's
     * found.</p>
     */
    inline CreateLaunchTemplateResponse& WithWarning(const ValidationWarning& value) { SetWarning(value); return *this;}

    /**
     * <p>If the launch template contains parameters or parameter combinations that are
     * not valid, an error code and an error message are returned for each issue that's
     * found.</p>
     */
    inline CreateLaunchTemplateResponse& WithWarning(ValidationWarning&& value) { SetWarning(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateLaunchTemplateResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLaunchTemplateResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LaunchTemplate m_launchTemplate;

    ValidationWarning m_warning;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
