/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessInstanceLoggingConfiguration.h>
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
  class ModifyVerifiedAccessInstanceLoggingConfigurationResponse
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessInstanceLoggingConfigurationResponse();
    AWS_EC2_API ModifyVerifiedAccessInstanceLoggingConfigurationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVerifiedAccessInstanceLoggingConfigurationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The logging configuration for Amazon Web Services Verified Access
     * instance.</p>
     */
    inline const VerifiedAccessInstanceLoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The logging configuration for Amazon Web Services Verified Access
     * instance.</p>
     */
    inline void SetLoggingConfiguration(const VerifiedAccessInstanceLoggingConfiguration& value) { m_loggingConfiguration = value; }

    /**
     * <p>The logging configuration for Amazon Web Services Verified Access
     * instance.</p>
     */
    inline void SetLoggingConfiguration(VerifiedAccessInstanceLoggingConfiguration&& value) { m_loggingConfiguration = std::move(value); }

    /**
     * <p>The logging configuration for Amazon Web Services Verified Access
     * instance.</p>
     */
    inline ModifyVerifiedAccessInstanceLoggingConfigurationResponse& WithLoggingConfiguration(const VerifiedAccessInstanceLoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The logging configuration for Amazon Web Services Verified Access
     * instance.</p>
     */
    inline ModifyVerifiedAccessInstanceLoggingConfigurationResponse& WithLoggingConfiguration(VerifiedAccessInstanceLoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVerifiedAccessInstanceLoggingConfigurationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVerifiedAccessInstanceLoggingConfigurationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VerifiedAccessInstanceLoggingConfiguration m_loggingConfiguration;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
