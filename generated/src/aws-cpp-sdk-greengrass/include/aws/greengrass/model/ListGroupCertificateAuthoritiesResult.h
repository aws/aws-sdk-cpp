﻿/**
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
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult();
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of certificate authorities associated with the group.
     */
    inline const Aws::Vector<GroupCertificateAuthorityProperties>& GetGroupCertificateAuthorities() const{ return m_groupCertificateAuthorities; }
    inline void SetGroupCertificateAuthorities(const Aws::Vector<GroupCertificateAuthorityProperties>& value) { m_groupCertificateAuthorities = value; }
    inline void SetGroupCertificateAuthorities(Aws::Vector<GroupCertificateAuthorityProperties>&& value) { m_groupCertificateAuthorities = std::move(value); }
    inline ListGroupCertificateAuthoritiesResult& WithGroupCertificateAuthorities(const Aws::Vector<GroupCertificateAuthorityProperties>& value) { SetGroupCertificateAuthorities(value); return *this;}
    inline ListGroupCertificateAuthoritiesResult& WithGroupCertificateAuthorities(Aws::Vector<GroupCertificateAuthorityProperties>&& value) { SetGroupCertificateAuthorities(std::move(value)); return *this;}
    inline ListGroupCertificateAuthoritiesResult& AddGroupCertificateAuthorities(const GroupCertificateAuthorityProperties& value) { m_groupCertificateAuthorities.push_back(value); return *this; }
    inline ListGroupCertificateAuthoritiesResult& AddGroupCertificateAuthorities(GroupCertificateAuthorityProperties&& value) { m_groupCertificateAuthorities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupCertificateAuthoritiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupCertificateAuthoritiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupCertificateAuthoritiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupCertificateAuthorityProperties> m_groupCertificateAuthorities;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
