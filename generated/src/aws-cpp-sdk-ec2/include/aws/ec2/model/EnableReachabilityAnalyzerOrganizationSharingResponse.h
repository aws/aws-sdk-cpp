/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class EnableReachabilityAnalyzerOrganizationSharingResponse
  {
  public:
    AWS_EC2_API EnableReachabilityAnalyzerOrganizationSharingResponse();
    AWS_EC2_API EnableReachabilityAnalyzerOrganizationSharingResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableReachabilityAnalyzerOrganizationSharingResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline EnableReachabilityAnalyzerOrganizationSharingResponse& WithReturnValue(bool value) { SetReturnValue(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableReachabilityAnalyzerOrganizationSharingResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableReachabilityAnalyzerOrganizationSharingResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_returnValue;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
