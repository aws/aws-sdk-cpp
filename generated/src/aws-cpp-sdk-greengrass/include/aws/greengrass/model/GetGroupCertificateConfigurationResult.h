/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{
  class GetGroupCertificateConfigurationResult
  {
  public:
    AWS_GREENGRASS_API GetGroupCertificateConfigurationResult() = default;
    AWS_GREENGRASS_API GetGroupCertificateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetGroupCertificateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The amount of time remaining before the certificate authority expires, in
     * milliseconds.
     */
    inline const Aws::String& GetCertificateAuthorityExpiryInMilliseconds() const { return m_certificateAuthorityExpiryInMilliseconds; }
    template<typename CertificateAuthorityExpiryInMillisecondsT = Aws::String>
    void SetCertificateAuthorityExpiryInMilliseconds(CertificateAuthorityExpiryInMillisecondsT&& value) { m_certificateAuthorityExpiryInMillisecondsHasBeenSet = true; m_certificateAuthorityExpiryInMilliseconds = std::forward<CertificateAuthorityExpiryInMillisecondsT>(value); }
    template<typename CertificateAuthorityExpiryInMillisecondsT = Aws::String>
    GetGroupCertificateConfigurationResult& WithCertificateAuthorityExpiryInMilliseconds(CertificateAuthorityExpiryInMillisecondsT&& value) { SetCertificateAuthorityExpiryInMilliseconds(std::forward<CertificateAuthorityExpiryInMillisecondsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The amount of time remaining before the certificate expires, in milliseconds.
     */
    inline const Aws::String& GetCertificateExpiryInMilliseconds() const { return m_certificateExpiryInMilliseconds; }
    template<typename CertificateExpiryInMillisecondsT = Aws::String>
    void SetCertificateExpiryInMilliseconds(CertificateExpiryInMillisecondsT&& value) { m_certificateExpiryInMillisecondsHasBeenSet = true; m_certificateExpiryInMilliseconds = std::forward<CertificateExpiryInMillisecondsT>(value); }
    template<typename CertificateExpiryInMillisecondsT = Aws::String>
    GetGroupCertificateConfigurationResult& WithCertificateExpiryInMilliseconds(CertificateExpiryInMillisecondsT&& value) { SetCertificateExpiryInMilliseconds(std::forward<CertificateExpiryInMillisecondsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the group certificate configuration.
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    GetGroupCertificateConfigurationResult& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGroupCertificateConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityExpiryInMilliseconds;
    bool m_certificateAuthorityExpiryInMillisecondsHasBeenSet = false;

    Aws::String m_certificateExpiryInMilliseconds;
    bool m_certificateExpiryInMillisecondsHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
