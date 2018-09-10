﻿/*
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
  class AWS_GREENGRASS_API ListGroupCertificateAuthoritiesResult
  {
  public:
    ListGroupCertificateAuthoritiesResult();
    ListGroupCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroupCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
