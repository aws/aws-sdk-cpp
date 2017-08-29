/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sts/model/ResponseMetadata.h>
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
namespace STS
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetSessionToken</a> request,
   * including temporary AWS credentials that can be used to make AWS requests.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/GetSessionTokenResponse">AWS
   * API Reference</a></p>
   */
  class AWS_STS_API GetSessionTokenResult
  {
  public:
    GetSessionTokenResult();
    GetSessionTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetSessionTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline GetSessionTokenResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline GetSessionTokenResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSessionTokenResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSessionTokenResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Credentials m_credentials;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
