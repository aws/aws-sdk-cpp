/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessGroup.h>
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
  class CreateVerifiedAccessGroupResponse
  {
  public:
    AWS_EC2_API CreateVerifiedAccessGroupResponse();
    AWS_EC2_API CreateVerifiedAccessGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVerifiedAccessGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const VerifiedAccessGroup& GetVerifiedAccessGroup() const{ return m_verifiedAccessGroup; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroup(const VerifiedAccessGroup& value) { m_verifiedAccessGroup = value; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroup(VerifiedAccessGroup&& value) { m_verifiedAccessGroup = std::move(value); }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupResponse& WithVerifiedAccessGroup(const VerifiedAccessGroup& value) { SetVerifiedAccessGroup(value); return *this;}

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline CreateVerifiedAccessGroupResponse& WithVerifiedAccessGroup(VerifiedAccessGroup&& value) { SetVerifiedAccessGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateVerifiedAccessGroupResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateVerifiedAccessGroupResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VerifiedAccessGroup m_verifiedAccessGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
