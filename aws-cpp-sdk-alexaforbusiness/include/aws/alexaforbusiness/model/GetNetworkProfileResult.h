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
#include <aws/alexaforbusiness/model/NetworkProfile.h>
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
  class AWS_ALEXAFORBUSINESS_API GetNetworkProfileResult
  {
  public:
    GetNetworkProfileResult();
    GetNetworkProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNetworkProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The network profile associated with a device.</p>
     */
    inline const NetworkProfile& GetNetworkProfile() const{ return m_networkProfile; }

    /**
     * <p>The network profile associated with a device.</p>
     */
    inline void SetNetworkProfile(const NetworkProfile& value) { m_networkProfile = value; }

    /**
     * <p>The network profile associated with a device.</p>
     */
    inline void SetNetworkProfile(NetworkProfile&& value) { m_networkProfile = std::move(value); }

    /**
     * <p>The network profile associated with a device.</p>
     */
    inline GetNetworkProfileResult& WithNetworkProfile(const NetworkProfile& value) { SetNetworkProfile(value); return *this;}

    /**
     * <p>The network profile associated with a device.</p>
     */
    inline GetNetworkProfileResult& WithNetworkProfile(NetworkProfile&& value) { SetNetworkProfile(std::move(value)); return *this;}

  private:

    NetworkProfile m_networkProfile;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
