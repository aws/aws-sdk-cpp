﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessTrustProvider.h>
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
  class ModifyVerifiedAccessTrustProviderResponse
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessTrustProviderResponse();
    AWS_EC2_API ModifyVerifiedAccessTrustProviderResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVerifiedAccessTrustProviderResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Details about the Verified Access trust provider.</p>
     */
    inline const VerifiedAccessTrustProvider& GetVerifiedAccessTrustProvider() const{ return m_verifiedAccessTrustProvider; }

    /**
     * <p>Details about the Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProvider(const VerifiedAccessTrustProvider& value) { m_verifiedAccessTrustProvider = value; }

    /**
     * <p>Details about the Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProvider(VerifiedAccessTrustProvider&& value) { m_verifiedAccessTrustProvider = std::move(value); }

    /**
     * <p>Details about the Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderResponse& WithVerifiedAccessTrustProvider(const VerifiedAccessTrustProvider& value) { SetVerifiedAccessTrustProvider(value); return *this;}

    /**
     * <p>Details about the Verified Access trust provider.</p>
     */
    inline ModifyVerifiedAccessTrustProviderResponse& WithVerifiedAccessTrustProvider(VerifiedAccessTrustProvider&& value) { SetVerifiedAccessTrustProvider(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVerifiedAccessTrustProviderResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVerifiedAccessTrustProviderResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VerifiedAccessTrustProvider m_verifiedAccessTrustProvider;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
