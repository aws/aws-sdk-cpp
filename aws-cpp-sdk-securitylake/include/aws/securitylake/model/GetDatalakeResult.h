/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securitylake/model/Region.h>
#include <aws/securitylake/model/LakeConfigurationResponse.h>
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
namespace SecurityLake
{
namespace Model
{
  class GetDatalakeResult
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeResult();
    AWS_SECURITYLAKE_API GetDatalakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDatalakeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline const Aws::Map<Region, LakeConfigurationResponse>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline void SetConfigurations(const Aws::Map<Region, LakeConfigurationResponse>& value) { m_configurations = value; }

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline void SetConfigurations(Aws::Map<Region, LakeConfigurationResponse>&& value) { m_configurations = std::move(value); }

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline GetDatalakeResult& WithConfigurations(const Aws::Map<Region, LakeConfigurationResponse>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline GetDatalakeResult& WithConfigurations(Aws::Map<Region, LakeConfigurationResponse>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline GetDatalakeResult& AddConfigurations(const Region& key, const LakeConfigurationResponse& value) { m_configurations.emplace(key, value); return *this; }

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline GetDatalakeResult& AddConfigurations(Region&& key, const LakeConfigurationResponse& value) { m_configurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline GetDatalakeResult& AddConfigurations(const Region& key, LakeConfigurationResponse&& value) { m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Retrieves the Security Lake configuration object. </p>
     */
    inline GetDatalakeResult& AddConfigurations(Region&& key, LakeConfigurationResponse&& value) { m_configurations.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::Map<Region, LakeConfigurationResponse> m_configurations;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
