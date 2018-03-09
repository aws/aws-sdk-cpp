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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Profile.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API GetProfileResult
  {
  public:
    GetProfileResult();
    GetProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the room profile requested. Required.</p>
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * <p>The details of the room profile requested. Required.</p>
     */
    inline void SetProfile(const Profile& value) { m_profile = value; }

    /**
     * <p>The details of the room profile requested. Required.</p>
     */
    inline void SetProfile(Profile&& value) { m_profile = std::move(value); }

    /**
     * <p>The details of the room profile requested. Required.</p>
     */
    inline GetProfileResult& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * <p>The details of the room profile requested. Required.</p>
     */
    inline GetProfileResult& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}

  private:

    Profile m_profile;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
