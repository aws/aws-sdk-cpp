/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListVPCEConfigurationsResult
  {
  public:
    AWS_DEVICEFARM_API ListVPCEConfigurationsResult();
    AWS_DEVICEFARM_API ListVPCEConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListVPCEConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline const Aws::Vector<VPCEConfiguration>& GetVpceConfigurations() const{ return m_vpceConfigurations; }

    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline void SetVpceConfigurations(const Aws::Vector<VPCEConfiguration>& value) { m_vpceConfigurations = value; }

    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline void SetVpceConfigurations(Aws::Vector<VPCEConfiguration>&& value) { m_vpceConfigurations = std::move(value); }

    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline ListVPCEConfigurationsResult& WithVpceConfigurations(const Aws::Vector<VPCEConfiguration>& value) { SetVpceConfigurations(value); return *this;}

    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline ListVPCEConfigurationsResult& WithVpceConfigurations(Aws::Vector<VPCEConfiguration>&& value) { SetVpceConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline ListVPCEConfigurationsResult& AddVpceConfigurations(const VPCEConfiguration& value) { m_vpceConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline ListVPCEConfigurationsResult& AddVpceConfigurations(VPCEConfiguration&& value) { m_vpceConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListVPCEConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListVPCEConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListVPCEConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VPCEConfiguration> m_vpceConfigurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
