/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/GroupCertificateAuthorityProperties.h>
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
  class ListGroupCertificateAuthoritiesResult
  {
  public:
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult() = default;
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of certificate authorities associated with the group.
     */
    inline const Aws::Vector<GroupCertificateAuthorityProperties>& GetGroupCertificateAuthorities() const { return m_groupCertificateAuthorities; }
    template<typename GroupCertificateAuthoritiesT = Aws::Vector<GroupCertificateAuthorityProperties>>
    void SetGroupCertificateAuthorities(GroupCertificateAuthoritiesT&& value) { m_groupCertificateAuthoritiesHasBeenSet = true; m_groupCertificateAuthorities = std::forward<GroupCertificateAuthoritiesT>(value); }
    template<typename GroupCertificateAuthoritiesT = Aws::Vector<GroupCertificateAuthorityProperties>>
    ListGroupCertificateAuthoritiesResult& WithGroupCertificateAuthorities(GroupCertificateAuthoritiesT&& value) { SetGroupCertificateAuthorities(std::forward<GroupCertificateAuthoritiesT>(value)); return *this;}
    template<typename GroupCertificateAuthoritiesT = GroupCertificateAuthorityProperties>
    ListGroupCertificateAuthoritiesResult& AddGroupCertificateAuthorities(GroupCertificateAuthoritiesT&& value) { m_groupCertificateAuthoritiesHasBeenSet = true; m_groupCertificateAuthorities.emplace_back(std::forward<GroupCertificateAuthoritiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGroupCertificateAuthoritiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupCertificateAuthorityProperties> m_groupCertificateAuthorities;
    bool m_groupCertificateAuthoritiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
