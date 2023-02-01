/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/VPCEConfiguration.h>
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
  class GetVPCEConfigurationResult
  {
  public:
    AWS_DEVICEFARM_API GetVPCEConfigurationResult();
    AWS_DEVICEFARM_API GetVPCEConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetVPCEConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline const VPCEConfiguration& GetVpceConfiguration() const{ return m_vpceConfiguration; }

    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline void SetVpceConfiguration(const VPCEConfiguration& value) { m_vpceConfiguration = value; }

    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline void SetVpceConfiguration(VPCEConfiguration&& value) { m_vpceConfiguration = std::move(value); }

    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline GetVPCEConfigurationResult& WithVpceConfiguration(const VPCEConfiguration& value) { SetVpceConfiguration(value); return *this;}

    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline GetVPCEConfigurationResult& WithVpceConfiguration(VPCEConfiguration&& value) { SetVpceConfiguration(std::move(value)); return *this;}

  private:

    VPCEConfiguration m_vpceConfiguration;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
