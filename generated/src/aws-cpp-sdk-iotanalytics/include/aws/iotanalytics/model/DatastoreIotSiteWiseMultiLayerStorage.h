/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/IotSiteWiseCustomerManagedDatastoreS3Storage.h>
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
   * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
   * manage. You can't change the choice of Amazon S3 storage after your data store
   * is created. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreIotSiteWiseMultiLayerStorage">AWS
   * API Reference</a></p>
   */
  class DatastoreIotSiteWiseMultiLayerStorage
  {
  public:
    AWS_IOTANALYTICS_API DatastoreIotSiteWiseMultiLayerStorage();
    AWS_IOTANALYTICS_API DatastoreIotSiteWiseMultiLayerStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreIotSiteWiseMultiLayerStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline const IotSiteWiseCustomerManagedDatastoreS3Storage& GetCustomerManagedS3Storage() const{ return m_customerManagedS3Storage; }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline bool CustomerManagedS3StorageHasBeenSet() const { return m_customerManagedS3StorageHasBeenSet; }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline void SetCustomerManagedS3Storage(const IotSiteWiseCustomerManagedDatastoreS3Storage& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = value; }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline void SetCustomerManagedS3Storage(IotSiteWiseCustomerManagedDatastoreS3Storage&& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = std::move(value); }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline DatastoreIotSiteWiseMultiLayerStorage& WithCustomerManagedS3Storage(const IotSiteWiseCustomerManagedDatastoreS3Storage& value) { SetCustomerManagedS3Storage(value); return *this;}

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline DatastoreIotSiteWiseMultiLayerStorage& WithCustomerManagedS3Storage(IotSiteWiseCustomerManagedDatastoreS3Storage&& value) { SetCustomerManagedS3Storage(std::move(value)); return *this;}

  private:

    IotSiteWiseCustomerManagedDatastoreS3Storage m_customerManagedS3Storage;
    bool m_customerManagedS3StorageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
