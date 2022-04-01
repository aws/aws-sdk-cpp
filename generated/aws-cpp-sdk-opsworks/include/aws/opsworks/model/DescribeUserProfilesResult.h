﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/UserProfile.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeUserProfiles</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeUserProfilesResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeUserProfilesResult
  {
  public:
    DescribeUserProfilesResult();
    DescribeUserProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline const Aws::Vector<UserProfile>& GetUserProfiles() const{ return m_userProfiles; }

    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline void SetUserProfiles(const Aws::Vector<UserProfile>& value) { m_userProfiles = value; }

    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline void SetUserProfiles(Aws::Vector<UserProfile>&& value) { m_userProfiles = std::move(value); }

    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline DescribeUserProfilesResult& WithUserProfiles(const Aws::Vector<UserProfile>& value) { SetUserProfiles(value); return *this;}

    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline DescribeUserProfilesResult& WithUserProfiles(Aws::Vector<UserProfile>&& value) { SetUserProfiles(std::move(value)); return *this;}

    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline DescribeUserProfilesResult& AddUserProfiles(const UserProfile& value) { m_userProfiles.push_back(value); return *this; }

    /**
     * <p>A <code>Users</code> object that describes the specified users.</p>
     */
    inline DescribeUserProfilesResult& AddUserProfiles(UserProfile&& value) { m_userProfiles.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserProfile> m_userProfiles;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
