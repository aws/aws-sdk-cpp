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
    AWS_APPFLOW_API SnowflakeConnectorProfileProperties();
    AWS_APPFLOW_API SnowflakeConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SnowflakeConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline const Aws::String& GetWarehouse() const{ return m_warehouse; }

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline bool WarehouseHasBeenSet() const { return m_warehouseHasBeenSet; }

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline void SetWarehouse(const Aws::String& value) { m_warehouseHasBeenSet = true; m_warehouse = value; }

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline void SetWarehouse(Aws::String&& value) { m_warehouseHasBeenSet = true; m_warehouse = std::move(value); }

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline void SetWarehouse(const char* value) { m_warehouseHasBeenSet = true; m_warehouse.assign(value); }

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithWarehouse(const Aws::String& value) { SetWarehouse(value); return *this;}

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithWarehouse(Aws::String&& value) { SetWarehouse(std::move(value)); return *this;}

    /**
     * <p> The name of the Snowflake warehouse. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithWarehouse(const char* value) { SetWarehouse(value); return *this;}


    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon S3 stage that was created while setting up an Amazon
     * S3 stage in the Snowflake account. This is written in the following format: &lt;
     * Database&gt;&lt; Schema&gt;&lt;Stage Name&gt;. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithStage(const char* value) { SetStage(value); return *this;}


    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon S3 bucket associated with Snowflake. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p> The bucket path that refers to the Amazon S3 bucket associated with
     * Snowflake. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline const Aws::String& GetPrivateLinkServiceName() const{ return m_privateLinkServiceName; }

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline bool PrivateLinkServiceNameHasBeenSet() const { return m_privateLinkServiceNameHasBeenSet; }

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline void SetPrivateLinkServiceName(const Aws::String& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = value; }

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline void SetPrivateLinkServiceName(Aws::String&& value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName = std::move(value); }

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline void SetPrivateLinkServiceName(const char* value) { m_privateLinkServiceNameHasBeenSet = true; m_privateLinkServiceName.assign(value); }

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithPrivateLinkServiceName(const Aws::String& value) { SetPrivateLinkServiceName(value); return *this;}

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithPrivateLinkServiceName(Aws::String&& value) { SetPrivateLinkServiceName(std::move(value)); return *this;}

    /**
     * <p> The Snowflake Private Link service name to be used for private data
     * transfers. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithPrivateLinkServiceName(const char* value) { SetPrivateLinkServiceName(value); return *this;}


    /**
     * <p> The name of the account. </p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p> The name of the account. </p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p> The name of the account. </p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p> The name of the account. </p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p> The name of the account. </p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p> The name of the account. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p> The name of the account. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p> The name of the account. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services Region of the Snowflake account. </p>
     */
    inline SnowflakeConnectorProfileProperties& WithRegion(const char* value) { SetRegion(value); return *this;}

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
