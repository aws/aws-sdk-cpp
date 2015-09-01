/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/FederatedUser.h>
#include <aws/sts/model/ResponseMetadata.h>

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
namespace STS
{
namespace Model
{
  /*
    <p>Contains the response to a successful <a>GetFederationToken</a> request, including temporary AWS credentials that can be used to make AWS requests. </p>
  */
  class AWS_STS_API GetFederationTokenResult
  {
  public:
    GetFederationTokenResult();
    GetFederationTokenResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetFederationTokenResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>Credentials for the service API authentication. </p>
    */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /*
     <p>Credentials for the service API authentication. </p>
    */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /*
     <p>Credentials for the service API authentication. </p>
    */
    inline void SetCredentials(Credentials&& value) { m_credentials = value; }

    /*
     <p>Credentials for the service API authentication. </p>
    */
    inline GetFederationTokenResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /*
     <p>Credentials for the service API authentication. </p>
    */
    inline GetFederationTokenResult& WithCredentials(Credentials&& value) { SetCredentials(value); return *this;}

    /*
     <p>Identifiers for the federated user associated with the credentials (such as <code>arn:aws:sts::123456789012:federated-user/Bob</code> or <code>123456789012:Bob</code>). You can use the federated user's ARN in your resource-based policies, such as an Amazon S3 bucket policy. </p>
    */
    inline const FederatedUser& GetFederatedUser() const{ return m_federatedUser; }

    /*
     <p>Identifiers for the federated user associated with the credentials (such as <code>arn:aws:sts::123456789012:federated-user/Bob</code> or <code>123456789012:Bob</code>). You can use the federated user's ARN in your resource-based policies, such as an Amazon S3 bucket policy. </p>
    */
    inline void SetFederatedUser(const FederatedUser& value) { m_federatedUser = value; }

    /*
     <p>Identifiers for the federated user associated with the credentials (such as <code>arn:aws:sts::123456789012:federated-user/Bob</code> or <code>123456789012:Bob</code>). You can use the federated user's ARN in your resource-based policies, such as an Amazon S3 bucket policy. </p>
    */
    inline void SetFederatedUser(FederatedUser&& value) { m_federatedUser = value; }

    /*
     <p>Identifiers for the federated user associated with the credentials (such as <code>arn:aws:sts::123456789012:federated-user/Bob</code> or <code>123456789012:Bob</code>). You can use the federated user's ARN in your resource-based policies, such as an Amazon S3 bucket policy. </p>
    */
    inline GetFederationTokenResult& WithFederatedUser(const FederatedUser& value) { SetFederatedUser(value); return *this;}

    /*
     <p>Identifiers for the federated user associated with the credentials (such as <code>arn:aws:sts::123456789012:federated-user/Bob</code> or <code>123456789012:Bob</code>). You can use the federated user's ARN in your resource-based policies, such as an Amazon S3 bucket policy. </p>
    */
    inline GetFederationTokenResult& WithFederatedUser(FederatedUser&& value) { SetFederatedUser(value); return *this;}

    /*
     <p>A percentage value indicating the size of the policy in packed form. The service rejects policies for which the packed size is greater than 100 percent of the allowed value. </p>
    */
    inline long GetPackedPolicySize() const{ return m_packedPolicySize; }

    /*
     <p>A percentage value indicating the size of the policy in packed form. The service rejects policies for which the packed size is greater than 100 percent of the allowed value. </p>
    */
    inline void SetPackedPolicySize(long value) { m_packedPolicySize = value; }

    /*
     <p>A percentage value indicating the size of the policy in packed form. The service rejects policies for which the packed size is greater than 100 percent of the allowed value. </p>
    */
    inline GetFederationTokenResult& WithPackedPolicySize(long value) { SetPackedPolicySize(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetFederationTokenResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetFederationTokenResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Credentials m_credentials;
    FederatedUser m_federatedUser;
    long m_packedPolicySize;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws