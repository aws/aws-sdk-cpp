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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/SelfUserProfile.h>
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
   * <p>Contains the response to a <code>DescribeMyUserProfile</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeMyUserProfileResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeMyUserProfileResult
  {
  public:
    DescribeMyUserProfileResult();
    DescribeMyUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMyUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>UserProfile</code> object that describes the user's SSH
     * information.</p>
     */
    inline const SelfUserProfile& GetUserProfile() const{ return m_userProfile; }

    /**
     * <p>A <code>UserProfile</code> object that describes the user's SSH
     * information.</p>
     */
    inline void SetUserProfile(const SelfUserProfile& value) { m_userProfile = value; }

    /**
     * <p>A <code>UserProfile</code> object that describes the user's SSH
     * information.</p>
     */
    inline void SetUserProfile(SelfUserProfile&& value) { m_userProfile = std::move(value); }

    /**
     * <p>A <code>UserProfile</code> object that describes the user's SSH
     * information.</p>
     */
    inline DescribeMyUserProfileResult& WithUserProfile(const SelfUserProfile& value) { SetUserProfile(value); return *this;}

    /**
     * <p>A <code>UserProfile</code> object that describes the user's SSH
     * information.</p>
     */
    inline DescribeMyUserProfileResult& WithUserProfile(SelfUserProfile&& value) { SetUserProfile(std::move(value)); return *this;}

  private:

    SelfUserProfile m_userProfile;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
