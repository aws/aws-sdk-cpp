/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult();
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of certificate authorities associated with the group.
     */
    inline const Aws::Vector<GroupCertificateAuthorityProperties>& GetGroupCertificateAuthorities() const{ return m_groupCertificateAuthorities; }

    /**
     * A list of certificate authorities associated with the group.
     */
    inline void SetGroupCertificateAuthorities(const Aws::Vector<GroupCertificateAuthorityProperties>& value) { m_groupCertificateAuthorities = value; }

    /**
     * A list of certificate authorities associated with the group.
     */
    inline void SetGroupCertificateAuthorities(Aws::Vector<GroupCertificateAuthorityProperties>&& value) { m_groupCertificateAuthorities = std::move(value); }

    /**
     * A list of certificate authorities associated with the group.
     */
    inline ListGroupCertificateAuthoritiesResult& WithGroupCertificateAuthorities(const Aws::Vector<GroupCertificateAuthorityProperties>& value) { SetGroupCertificateAuthorities(value); return *this;}

    /**
     * A list of certificate authorities associated with the group.
     */
    inline ListGroupCertificateAuthoritiesResult& WithGroupCertificateAuthorities(Aws::Vector<GroupCertificateAuthorityProperties>&& value) { SetGroupCertificateAuthorities(std::move(value)); return *this;}

    /**
     * A list of certificate authorities associated with the group.
     */
    inline ListGroupCertificateAuthoritiesResult& AddGroupCertificateAuthorities(const GroupCertificateAuthorityProperties& value) { m_groupCertificateAuthorities.push_back(value); return *this; }

    /**
     * A list of certificate authorities associated with the group.
     */
    inline ListGroupCertificateAuthoritiesResult& AddGroupCertificateAuthorities(GroupCertificateAuthorityProperties&& value) { m_groupCertificateAuthorities.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GroupCertificateAuthorityProperties> m_groupCertificateAuthorities;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
