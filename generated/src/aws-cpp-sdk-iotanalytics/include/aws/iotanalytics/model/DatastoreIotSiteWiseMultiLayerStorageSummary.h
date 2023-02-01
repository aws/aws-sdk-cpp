/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/IotSiteWiseCustomerManagedDatastoreS3StorageSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p> Contains information about the data store that you manage, which stores data
   * used by IoT SiteWise. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreIotSiteWiseMultiLayerStorageSummary">AWS
   * API Reference</a></p>
   */
  class DatastoreIotSiteWiseMultiLayerStorageSummary
  {
  public:
    AWS_IOTANALYTICS_API DatastoreIotSiteWiseMultiLayerStorageSummary();
    AWS_IOTANALYTICS_API DatastoreIotSiteWiseMultiLayerStorageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreIotSiteWiseMultiLayerStorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage.</p>
     */
    inline const IotSiteWiseCustomerManagedDatastoreS3StorageSummary& GetCustomerManagedS3Storage() const{ return m_customerManagedS3Storage; }

    /**
     * <p>Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage.</p>
     */
    inline bool CustomerManagedS3StorageHasBeenSet() const { return m_customerManagedS3StorageHasBeenSet; }

    /**
     * <p>Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage.</p>
     */
    inline void SetCustomerManagedS3Storage(const IotSiteWiseCustomerManagedDatastoreS3StorageSummary& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = value; }

    /**
     * <p>Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage.</p>
     */
    inline void SetCustomerManagedS3Storage(IotSiteWiseCustomerManagedDatastoreS3StorageSummary&& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = std::move(value); }

    /**
     * <p>Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage.</p>
     */
    inline DatastoreIotSiteWiseMultiLayerStorageSummary& WithCustomerManagedS3Storage(const IotSiteWiseCustomerManagedDatastoreS3StorageSummary& value) { SetCustomerManagedS3Storage(value); return *this;}

    /**
     * <p>Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage.</p>
     */
    inline DatastoreIotSiteWiseMultiLayerStorageSummary& WithCustomerManagedS3Storage(IotSiteWiseCustomerManagedDatastoreS3StorageSummary&& value) { SetCustomerManagedS3Storage(std::move(value)); return *this;}

  private:

    IotSiteWiseCustomerManagedDatastoreS3StorageSummary m_customerManagedS3Storage;
    bool m_customerManagedS3StorageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
