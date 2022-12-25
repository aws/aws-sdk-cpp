/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateDatalakeRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateDatalakeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatalake"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline const Aws::Map<Region, LakeConfigurationRequest>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline void SetConfigurations(const Aws::Map<Region, LakeConfigurationRequest>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline void SetConfigurations(Aws::Map<Region, LakeConfigurationRequest>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline CreateDatalakeRequest& WithConfigurations(const Aws::Map<Region, LakeConfigurationRequest>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline CreateDatalakeRequest& WithConfigurations(Aws::Map<Region, LakeConfigurationRequest>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline CreateDatalakeRequest& AddConfigurations(const Region& key, const LakeConfigurationRequest& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, value); return *this; }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline CreateDatalakeRequest& AddConfigurations(Region&& key, const LakeConfigurationRequest& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline CreateDatalakeRequest& AddConfigurations(const Region& key, LakeConfigurationRequest&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Enable Security Lake with the specified configurations settings to begin
     * ingesting security data. </p>
     */
    inline CreateDatalakeRequest& AddConfigurations(Region&& key, LakeConfigurationRequest&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Enable Security Lake in all Regions to begin ingesting security data.</p>
     */
    inline bool GetEnableAll() const{ return m_enableAll; }

    /**
     * <p>Enable Security Lake in all Regions to begin ingesting security data.</p>
     */
    inline bool EnableAllHasBeenSet() const { return m_enableAllHasBeenSet; }

    /**
     * <p>Enable Security Lake in all Regions to begin ingesting security data.</p>
     */
    inline void SetEnableAll(bool value) { m_enableAllHasBeenSet = true; m_enableAll = value; }

    /**
     * <p>Enable Security Lake in all Regions to begin ingesting security data.</p>
     */
    inline CreateDatalakeRequest& WithEnableAll(bool value) { SetEnableAll(value); return *this;}


    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline const Aws::String& GetMetaStoreManagerRoleArn() const{ return m_metaStoreManagerRoleArn; }

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline bool MetaStoreManagerRoleArnHasBeenSet() const { return m_metaStoreManagerRoleArnHasBeenSet; }

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline void SetMetaStoreManagerRoleArn(const Aws::String& value) { m_metaStoreManagerRoleArnHasBeenSet = true; m_metaStoreManagerRoleArn = value; }

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline void SetMetaStoreManagerRoleArn(Aws::String&& value) { m_metaStoreManagerRoleArnHasBeenSet = true; m_metaStoreManagerRoleArn = std::move(value); }

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline void SetMetaStoreManagerRoleArn(const char* value) { m_metaStoreManagerRoleArnHasBeenSet = true; m_metaStoreManagerRoleArn.assign(value); }

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline CreateDatalakeRequest& WithMetaStoreManagerRoleArn(const Aws::String& value) { SetMetaStoreManagerRoleArn(value); return *this;}

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline CreateDatalakeRequest& WithMetaStoreManagerRoleArn(Aws::String&& value) { SetMetaStoreManagerRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Role ARN used to create and update the Glue table with partitions
     * generated by ingestion and normalization of Amazon Web Services log sources and
     * custom sources.</p>
     */
    inline CreateDatalakeRequest& WithMetaStoreManagerRoleArn(const char* value) { SetMetaStoreManagerRoleArn(value); return *this;}


    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const{ return m_regions; }

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetRegions(const Aws::Vector<Region>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetRegions(Aws::Vector<Region>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline CreateDatalakeRequest& WithRegions(const Aws::Vector<Region>& value) { SetRegions(value); return *this;}

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline CreateDatalakeRequest& WithRegions(Aws::Vector<Region>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline CreateDatalakeRequest& AddRegions(const Region& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>Enable Security Lake in the specified Regions to begin ingesting security
     * data. To enable Security Lake in specific Amazon Web Services Regions, such as
     * us-east-1 or ap-northeast-3, provide the Region codes. For a list of Region
     * codes, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#regional-endpoints">Region
     * codes</a> in the Amazon Web Services General Reference.</p>
     */
    inline CreateDatalakeRequest& AddRegions(Region&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Region, LakeConfigurationRequest> m_configurations;
    bool m_configurationsHasBeenSet = false;

    bool m_enableAll;
    bool m_enableAllHasBeenSet = false;

    Aws::String m_metaStoreManagerRoleArn;
    bool m_metaStoreManagerRoleArnHasBeenSet = false;

    Aws::Vector<Region> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
