﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessInstance.h>
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
  class DeleteVerifiedAccessInstanceResponse
  {
  public:
    AWS_EC2_API DeleteVerifiedAccessInstanceResponse();
    AWS_EC2_API DeleteVerifiedAccessInstanceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteVerifiedAccessInstanceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Details about the Verified Access instance.</p>
     */
    inline const VerifiedAccessInstance& GetVerifiedAccessInstance() const{ return m_verifiedAccessInstance; }

    /**
     * <p>Details about the Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstance(const VerifiedAccessInstance& value) { m_verifiedAccessInstance = value; }

    /**
     * <p>Details about the Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstance(VerifiedAccessInstance&& value) { m_verifiedAccessInstance = std::move(value); }

    /**
     * <p>Details about the Verified Access instance.</p>
     */
    inline DeleteVerifiedAccessInstanceResponse& WithVerifiedAccessInstance(const VerifiedAccessInstance& value) { SetVerifiedAccessInstance(value); return *this;}

    /**
     * <p>Details about the Verified Access instance.</p>
     */
    inline DeleteVerifiedAccessInstanceResponse& WithVerifiedAccessInstance(VerifiedAccessInstance&& value) { SetVerifiedAccessInstance(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteVerifiedAccessInstanceResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteVerifiedAccessInstanceResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VerifiedAccessInstance m_verifiedAccessInstance;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
