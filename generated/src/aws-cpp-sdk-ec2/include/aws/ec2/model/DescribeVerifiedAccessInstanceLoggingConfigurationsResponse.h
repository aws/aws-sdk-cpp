/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessInstanceLoggingConfiguration.h>
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
  class DescribeVerifiedAccessInstanceLoggingConfigurationsResponse
  {
  public:
    AWS_EC2_API DescribeVerifiedAccessInstanceLoggingConfigurationsResponse();
    AWS_EC2_API DescribeVerifiedAccessInstanceLoggingConfigurationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline const Aws::Vector<VerifiedAccessInstanceLoggingConfiguration>& GetLoggingConfigurations() const{ return m_loggingConfigurations; }

    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline void SetLoggingConfigurations(const Aws::Vector<VerifiedAccessInstanceLoggingConfiguration>& value) { m_loggingConfigurations = value; }

    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline void SetLoggingConfigurations(Aws::Vector<VerifiedAccessInstanceLoggingConfiguration>&& value) { m_loggingConfigurations = std::move(value); }

    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithLoggingConfigurations(const Aws::Vector<VerifiedAccessInstanceLoggingConfiguration>& value) { SetLoggingConfigurations(value); return *this;}

    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithLoggingConfigurations(Aws::Vector<VerifiedAccessInstanceLoggingConfiguration>&& value) { SetLoggingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& AddLoggingConfigurations(const VerifiedAccessInstanceLoggingConfiguration& value) { m_loggingConfigurations.push_back(value); return *this; }

    /**
     * <p>The current logging configuration for the Amazon Web Services Verified Access
     * instances.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& AddLoggingConfigurations(VerifiedAccessInstanceLoggingConfiguration&& value) { m_loggingConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVerifiedAccessInstanceLoggingConfigurationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VerifiedAccessInstanceLoggingConfiguration> m_loggingConfigurations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
