/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/NetworkProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class UpdateNetworkProfileResult
  {
  public:
    AWS_DEVICEFARM_API UpdateNetworkProfileResult();
    AWS_DEVICEFARM_API UpdateNetworkProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateNetworkProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the available network profiles.</p>
     */
    inline const NetworkProfile& GetNetworkProfile() const{ return m_networkProfile; }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline void SetNetworkProfile(const NetworkProfile& value) { m_networkProfile = value; }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline void SetNetworkProfile(NetworkProfile&& value) { m_networkProfile = std::move(value); }

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline UpdateNetworkProfileResult& WithNetworkProfile(const NetworkProfile& value) { SetNetworkProfile(value); return *this;}

    /**
     * <p>A list of the available network profiles.</p>
     */
    inline UpdateNetworkProfileResult& WithNetworkProfile(NetworkProfile&& value) { SetNetworkProfile(std::move(value)); return *this;}

  private:

    NetworkProfile m_networkProfile;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
