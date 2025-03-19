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
  class GetGroupCertificateAuthorityResult
  {
  public:
    AWS_GREENGRASS_API GetGroupCertificateAuthorityResult() = default;
    AWS_GREENGRASS_API GetGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetGroupCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const { return m_groupCertificateAuthorityArn; }
    template<typename GroupCertificateAuthorityArnT = Aws::String>
    void SetGroupCertificateAuthorityArn(GroupCertificateAuthorityArnT&& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = std::forward<GroupCertificateAuthorityArnT>(value); }
    template<typename GroupCertificateAuthorityArnT = Aws::String>
    GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(GroupCertificateAuthorityArnT&& value) { SetGroupCertificateAuthorityArn(std::forward<GroupCertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityId() const { return m_groupCertificateAuthorityId; }
    template<typename GroupCertificateAuthorityIdT = Aws::String>
    void SetGroupCertificateAuthorityId(GroupCertificateAuthorityIdT&& value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId = std::forward<GroupCertificateAuthorityIdT>(value); }
    template<typename GroupCertificateAuthorityIdT = Aws::String>
    GetGroupCertificateAuthorityResult& WithGroupCertificateAuthorityId(GroupCertificateAuthorityIdT&& value) { SetGroupCertificateAuthorityId(std::forward<GroupCertificateAuthorityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The PEM encoded certificate for the group.
     */
    inline const Aws::String& GetPemEncodedCertificate() const { return m_pemEncodedCertificate; }
    template<typename PemEncodedCertificateT = Aws::String>
    void SetPemEncodedCertificate(PemEncodedCertificateT&& value) { m_pemEncodedCertificateHasBeenSet = true; m_pemEncodedCertificate = std::forward<PemEncodedCertificateT>(value); }
    template<typename PemEncodedCertificateT = Aws::String>
    GetGroupCertificateAuthorityResult& WithPemEncodedCertificate(PemEncodedCertificateT&& value) { SetPemEncodedCertificate(std::forward<PemEncodedCertificateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGroupCertificateAuthorityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupCertificateAuthorityArn;
    bool m_groupCertificateAuthorityArnHasBeenSet = false;

    Aws::String m_groupCertificateAuthorityId;
    bool m_groupCertificateAuthorityIdHasBeenSet = false;

    Aws::String m_pemEncodedCertificate;
    bool m_pemEncodedCertificateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
