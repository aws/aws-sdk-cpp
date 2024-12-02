/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VerifiedAccessEndpointTarget.h>
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
  class GetVerifiedAccessEndpointTargetsResponse
  {
  public:
    AWS_EC2_API GetVerifiedAccessEndpointTargetsResponse();
    AWS_EC2_API GetVerifiedAccessEndpointTargetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVerifiedAccessEndpointTargetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Verified Access targets.</p>
     */
    inline const Aws::Vector<VerifiedAccessEndpointTarget>& GetVerifiedAccessEndpointTargets() const{ return m_verifiedAccessEndpointTargets; }
    inline void SetVerifiedAccessEndpointTargets(const Aws::Vector<VerifiedAccessEndpointTarget>& value) { m_verifiedAccessEndpointTargets = value; }
    inline void SetVerifiedAccessEndpointTargets(Aws::Vector<VerifiedAccessEndpointTarget>&& value) { m_verifiedAccessEndpointTargets = std::move(value); }
    inline GetVerifiedAccessEndpointTargetsResponse& WithVerifiedAccessEndpointTargets(const Aws::Vector<VerifiedAccessEndpointTarget>& value) { SetVerifiedAccessEndpointTargets(value); return *this;}
    inline GetVerifiedAccessEndpointTargetsResponse& WithVerifiedAccessEndpointTargets(Aws::Vector<VerifiedAccessEndpointTarget>&& value) { SetVerifiedAccessEndpointTargets(std::move(value)); return *this;}
    inline GetVerifiedAccessEndpointTargetsResponse& AddVerifiedAccessEndpointTargets(const VerifiedAccessEndpointTarget& value) { m_verifiedAccessEndpointTargets.push_back(value); return *this; }
    inline GetVerifiedAccessEndpointTargetsResponse& AddVerifiedAccessEndpointTargets(VerifiedAccessEndpointTarget&& value) { m_verifiedAccessEndpointTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetVerifiedAccessEndpointTargetsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetVerifiedAccessEndpointTargetsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetVerifiedAccessEndpointTargetsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetVerifiedAccessEndpointTargetsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetVerifiedAccessEndpointTargetsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VerifiedAccessEndpointTarget> m_verifiedAccessEndpointTargets;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
