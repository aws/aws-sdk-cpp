/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{
  class GetUploadJobPathResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetUploadJobPathResult() = default;
    AWS_CUSTOMERPROFILES_API GetUploadJobPathResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetUploadJobPathResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pre-signed S3 URL for uploading the CSV file associated with the upload
     * job. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetUploadJobPathResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plaintext data key used to encrypt the upload file. </p> <p>To persist to
     * the pre-signed url, use the client token and MD5 client token as header. The
     * required headers are as follows: </p> <ul> <li>
     * <p>x-amz-server-side-encryption-customer-key: Client Token </p> </li> <li>
     * <p>x-amz-server-side-encryption-customer-key-MD5: MD5 Client Token </p> </li>
     * <li> <p>x-amz-server-side-encryption-customer-algorithm: AES256 </p> </li> </ul>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    GetUploadJobPathResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry timestamp for the pre-signed URL, after which the URL will no
     * longer be valid. </p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    GetUploadJobPathResult& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUploadJobPathResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil{};
    bool m_validUntilHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
