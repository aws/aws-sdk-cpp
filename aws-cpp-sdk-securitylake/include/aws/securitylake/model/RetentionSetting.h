/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/StorageClass.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Retention settings for the destination Amazon S3 buckets in Security Lake.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/RetentionSetting">AWS
   * API Reference</a></p>
   */
  class RetentionSetting
  {
  public:
    AWS_SECURITYLAKE_API RetentionSetting();
    AWS_SECURITYLAKE_API RetentionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API RetentionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The retention period specifies a fixed period of time during which the
     * Security Lake object remains locked. You can specify the retention period for
     * one or more source in days. </p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The retention period specifies a fixed period of time during which the
     * Security Lake object remains locked. You can specify the retention period for
     * one or more source in days. </p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The retention period specifies a fixed period of time during which the
     * Security Lake object remains locked. You can specify the retention period for
     * one or more source in days. </p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The retention period specifies a fixed period of time during which the
     * Security Lake object remains locked. You can specify the retention period for
     * one or more source in days. </p>
     */
    inline RetentionSetting& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline RetentionSetting& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p>The range of storage classes that you can choose from based on the data
     * access, resiliency, and cost requirements of your workloads.</p>
     */
    inline RetentionSetting& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}

  private:

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
