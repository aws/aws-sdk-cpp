/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetVerifiedAccessEndpointPolicyResponse
  {
  public:
    AWS_EC2_API GetVerifiedAccessEndpointPolicyResponse();
    AWS_EC2_API GetVerifiedAccessEndpointPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVerifiedAccessEndpointPolicyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline bool GetPolicyEnabled() const{ return m_policyEnabled; }

    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline void SetPolicyEnabled(bool value) { m_policyEnabled = value; }

    /**
     * <p>The status of the Verified Access policy.</p>
     */
    inline GetVerifiedAccessEndpointPolicyResponse& WithPolicyEnabled(bool value) { SetPolicyEnabled(value); return *this;}


    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline GetVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline GetVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Verified Access policy document.</p>
     */
    inline GetVerifiedAccessEndpointPolicyResponse& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetVerifiedAccessEndpointPolicyResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetVerifiedAccessEndpointPolicyResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_policyEnabled;

    Aws::String m_policyDocument;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
