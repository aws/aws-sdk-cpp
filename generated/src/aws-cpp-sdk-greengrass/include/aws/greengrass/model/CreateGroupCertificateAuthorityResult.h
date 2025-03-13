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
  class CreateGroupCertificateAuthorityResult
  {
  public:
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult() = default;
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the group certificate authority.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const { return m_groupCertificateAuthorityArn; }
    template<typename GroupCertificateAuthorityArnT = Aws::String>
    void SetGroupCertificateAuthorityArn(GroupCertificateAuthorityArnT&& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = std::forward<GroupCertificateAuthorityArnT>(value); }
    template<typename GroupCertificateAuthorityArnT = Aws::String>
    CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(GroupCertificateAuthorityArnT&& value) { SetGroupCertificateAuthorityArn(std::forward<GroupCertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGroupCertificateAuthorityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupCertificateAuthorityArn;
    bool m_groupCertificateAuthorityArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
