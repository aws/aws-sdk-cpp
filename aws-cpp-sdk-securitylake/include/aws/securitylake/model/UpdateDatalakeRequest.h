/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securitylake/model/Region.h>
#include <aws/securitylake/model/LakeConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class UpdateDatalakeRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateDatalakeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatalake"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The configuration object</p>
     */
    inline const Aws::Map<Region, LakeConfigurationRequest>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>The configuration object</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>The configuration object</p>
     */
    inline void SetConfigurations(const Aws::Map<Region, LakeConfigurationRequest>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>The configuration object</p>
     */
    inline void SetConfigurations(Aws::Map<Region, LakeConfigurationRequest>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>The configuration object</p>
     */
    inline UpdateDatalakeRequest& WithConfigurations(const Aws::Map<Region, LakeConfigurationRequest>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>The configuration object</p>
     */
    inline UpdateDatalakeRequest& WithConfigurations(Aws::Map<Region, LakeConfigurationRequest>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration object</p>
     */
    inline UpdateDatalakeRequest& AddConfigurations(const Region& key, const LakeConfigurationRequest& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, value); return *this; }

    /**
     * <p>The configuration object</p>
     */
    inline UpdateDatalakeRequest& AddConfigurations(Region&& key, const LakeConfigurationRequest& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration object</p>
     */
    inline UpdateDatalakeRequest& AddConfigurations(const Region& key, LakeConfigurationRequest&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration object</p>
     */
    inline UpdateDatalakeRequest& AddConfigurations(Region&& key, LakeConfigurationRequest&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::Map<Region, LakeConfigurationRequest> m_configurations;
    bool m_configurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
