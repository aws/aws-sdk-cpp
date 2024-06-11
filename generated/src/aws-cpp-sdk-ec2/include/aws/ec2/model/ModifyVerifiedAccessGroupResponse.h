﻿/**
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
  class ModifyVerifiedAccessGroupResponse
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessGroupResponse();
    AWS_EC2_API ModifyVerifiedAccessGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVerifiedAccessGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access group.</p>
     */
    inline const VerifiedAccessGroup& GetVerifiedAccessGroup() const{ return m_verifiedAccessGroup; }
    inline void SetVerifiedAccessGroup(const VerifiedAccessGroup& value) { m_verifiedAccessGroup = value; }
    inline void SetVerifiedAccessGroup(VerifiedAccessGroup&& value) { m_verifiedAccessGroup = std::move(value); }
    inline ModifyVerifiedAccessGroupResponse& WithVerifiedAccessGroup(const VerifiedAccessGroup& value) { SetVerifiedAccessGroup(value); return *this;}
    inline ModifyVerifiedAccessGroupResponse& WithVerifiedAccessGroup(VerifiedAccessGroup&& value) { SetVerifiedAccessGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyVerifiedAccessGroupResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyVerifiedAccessGroupResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    VerifiedAccessGroup m_verifiedAccessGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
