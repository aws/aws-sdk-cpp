/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required when using Snowflake.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SnowflakeConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class SnowflakeConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API SnowflakeConnectorProfileProperties() = default;
    AWS_APPFLOW_API SnowflakeConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SnowflakeConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline const Aws::String& GetWarehouse() const { return m_warehouse; }
    inline bool WarehouseHasBeenSet() const { return m_warehouseHasBeenSet; }
    template<typename WarehouseT = Aws::String>
    void SetWarehouse(WarehouseT&& value) { m_warehouseHasBeenSet = true; m_warehouse = std::forward<WarehouseT>(value); }
    template<typename WarehouseT = Aws::String>
    SnowflakeConnectorProfileProperties& WithWarehouse(WarehouseT&& value) { SetWarehouse(std::forward<WarehouseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    SnowflakeConnectorProfileProperties& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    SnowflakeConnectorProfileProperties& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline const Aws::String& GetBucketPrefix() const { return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    template<typename BucketPrefixT = Aws::String>
    void SetBucketPrefix(BucketPrefixT&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::forward<BucketPrefixT>(value); }
    template<typename BucketPrefixT = Aws::String>
    SnowflakeConnectorProfileProperties& WithBucketPrefix(BucketPrefixT&& value) { SetBucketPrefix(std::forward<BucketPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline const Aws::String& GetPrivateLinkServiceName() const { return m_privateLinkServiceName; }
    inline bool PrivateLinkServiceNameHasBeenSet() const { return m_privateLinkServiceNameHasBeenSet; }
    template<typename PrivateLinkServiceNameT = Aws::String>
    void SetPrivateLinkServiceName(PrivateLinkServiceNameT&& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = std::forward<PrivateLinkServiceNameT>(value); }
    template<typename PrivateLinkServiceNameT = Aws::String>
    SnowflakeConnectorProfileProperties& WithPrivateLinkServiceName(PrivateLinkServiceNameT&& value) { SetPrivateLinkServiceName(std::forward<PrivateLinkServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the account. </p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    SnowflakeConnectorProfileProperties& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    SnowflakeConnectorProfileProperties& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_warehouse;
    bool m_warehouseHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    Aws::String m_privateLinkServiceName;
    bool m_privateLinkServiceNameHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
