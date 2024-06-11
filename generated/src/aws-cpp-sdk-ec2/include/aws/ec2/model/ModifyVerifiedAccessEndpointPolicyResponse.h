/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationResponse.h>
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
  class ModifyVerifiedAccessEndpointPolicyResponse
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyResponse();
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVerifiedAccessEndpointPolicyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline bool GetPolicyEnabled() const{ return m_policyEnabled; }
    inline void SetPolicyEnabled(bool value) { m_policyEnabled = value; }
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithPolicyEnabled(bool value) { SetPolicyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Verified Access policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const{ return m_sseSpecification; }
    inline void SetSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { m_sseSpecification = value; }
    inline void SetSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { m_sseSpecification = std::move(value); }
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { SetSseSpecification(value); return *this;}
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { SetSseSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyVerifiedAccessEndpointPolicyResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    bool m_policyEnabled;

    Aws::String m_policyDocument;

    VerifiedAccessSseSpecificationResponse m_sseSpecification;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
