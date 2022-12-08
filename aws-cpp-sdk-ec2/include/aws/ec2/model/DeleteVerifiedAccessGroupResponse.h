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
  class DeleteVerifiedAccessGroupResponse
  {
  public:
    AWS_EC2_API DeleteVerifiedAccessGroupResponse();
    AWS_EC2_API DeleteVerifiedAccessGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteVerifiedAccessGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline const VerifiedAccessGroup& GetVerifiedAccessGroup() const{ return m_verifiedAccessGroup; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroup(const VerifiedAccessGroup& value) { m_verifiedAccessGroup = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroup(VerifiedAccessGroup&& value) { m_verifiedAccessGroup = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline DeleteVerifiedAccessGroupResponse& WithVerifiedAccessGroup(const VerifiedAccessGroup& value) { SetVerifiedAccessGroup(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access group.</p>
     */
    inline DeleteVerifiedAccessGroupResponse& WithVerifiedAccessGroup(VerifiedAccessGroup&& value) { SetVerifiedAccessGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteVerifiedAccessGroupResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteVerifiedAccessGroupResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VerifiedAccessGroup m_verifiedAccessGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
