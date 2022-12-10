/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ServiceManagedDatastoreS3Storage.h>
#include <aws/iotanalytics/model/CustomerManagedDatastoreS3Storage.h>
#include <aws/iotanalytics/model/DatastoreIotSiteWiseMultiLayerStorage.h>
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
   * <p>Where data in a data store is stored.. You can choose
   * <code>serviceManagedS3</code> storage, <code>customerManagedS3</code> storage,
   * or <code>iotSiteWiseMultiLayerStorage</code> storage. The default is
   * <code>serviceManagedS3</code>. You can't change the choice of Amazon S3 storage
   * after your data store is created. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreStorage">AWS
   * API Reference</a></p>
   */
  class DatastoreStorage
  {
  public:
    AWS_IOTANALYTICS_API DatastoreStorage();
    AWS_IOTANALYTICS_API DatastoreStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics. You can't
     * change the choice of Amazon S3 storage after your data store is created. </p>
     */
    inline const ServiceManagedDatastoreS3Storage& GetServiceManagedS3() const{ return m_serviceManagedS3; }

    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics. You can't
     * change the choice of Amazon S3 storage after your data store is created. </p>
     */
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }

    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics. You can't
     * change the choice of Amazon S3 storage after your data store is created. </p>
     */
    inline void SetServiceManagedS3(const ServiceManagedDatastoreS3Storage& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = value; }

    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics. You can't
     * change the choice of Amazon S3 storage after your data store is created. </p>
     */
    inline void SetServiceManagedS3(ServiceManagedDatastoreS3Storage&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::move(value); }

    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics. You can't
     * change the choice of Amazon S3 storage after your data store is created. </p>
     */
    inline DatastoreStorage& WithServiceManagedS3(const ServiceManagedDatastoreS3Storage& value) { SetServiceManagedS3(value); return *this;}

    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics. You can't
     * change the choice of Amazon S3 storage after your data store is created. </p>
     */
    inline DatastoreStorage& WithServiceManagedS3(ServiceManagedDatastoreS3Storage&& value) { SetServiceManagedS3(std::move(value)); return *this;}


    /**
     * <p>S3-customer-managed; When you choose customer-managed storage, the
     * <code>retentionPeriod</code> parameter is ignored. You can't change the choice
     * of Amazon S3 storage after your data store is created. </p>
     */
    inline const CustomerManagedDatastoreS3Storage& GetCustomerManagedS3() const{ return m_customerManagedS3; }

    /**
     * <p>S3-customer-managed; When you choose customer-managed storage, the
     * <code>retentionPeriod</code> parameter is ignored. You can't change the choice
     * of Amazon S3 storage after your data store is created. </p>
     */
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }

    /**
     * <p>S3-customer-managed; When you choose customer-managed storage, the
     * <code>retentionPeriod</code> parameter is ignored. You can't change the choice
     * of Amazon S3 storage after your data store is created. </p>
     */
    inline void SetCustomerManagedS3(const CustomerManagedDatastoreS3Storage& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = value; }

    /**
     * <p>S3-customer-managed; When you choose customer-managed storage, the
     * <code>retentionPeriod</code> parameter is ignored. You can't change the choice
     * of Amazon S3 storage after your data store is created. </p>
     */
    inline void SetCustomerManagedS3(CustomerManagedDatastoreS3Storage&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::move(value); }

    /**
     * <p>S3-customer-managed; When you choose customer-managed storage, the
     * <code>retentionPeriod</code> parameter is ignored. You can't change the choice
     * of Amazon S3 storage after your data store is created. </p>
     */
    inline DatastoreStorage& WithCustomerManagedS3(const CustomerManagedDatastoreS3Storage& value) { SetCustomerManagedS3(value); return *this;}

    /**
     * <p>S3-customer-managed; When you choose customer-managed storage, the
     * <code>retentionPeriod</code> parameter is ignored. You can't change the choice
     * of Amazon S3 storage after your data store is created. </p>
     */
    inline DatastoreStorage& WithCustomerManagedS3(CustomerManagedDatastoreS3Storage&& value) { SetCustomerManagedS3(std::move(value)); return *this;}


    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. You can't change the choice of Amazon S3 storage after your data store
     * is created. </p>
     */
    inline const DatastoreIotSiteWiseMultiLayerStorage& GetIotSiteWiseMultiLayerStorage() const{ return m_iotSiteWiseMultiLayerStorage; }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. You can't change the choice of Amazon S3 storage after your data store
     * is created. </p>
     */
    inline bool IotSiteWiseMultiLayerStorageHasBeenSet() const { return m_iotSiteWiseMultiLayerStorageHasBeenSet; }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. You can't change the choice of Amazon S3 storage after your data store
     * is created. </p>
     */
    inline void SetIotSiteWiseMultiLayerStorage(const DatastoreIotSiteWiseMultiLayerStorage& value) { m_iotSiteWiseMultiLayerStorageHasBeenSet = true; m_iotSiteWiseMultiLayerStorage = value; }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. You can't change the choice of Amazon S3 storage after your data store
     * is created. </p>
     */
    inline void SetIotSiteWiseMultiLayerStorage(DatastoreIotSiteWiseMultiLayerStorage&& value) { m_iotSiteWiseMultiLayerStorageHasBeenSet = true; m_iotSiteWiseMultiLayerStorage = std::move(value); }

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. You can't change the choice of Amazon S3 storage after your data store
     * is created. </p>
     */
    inline DatastoreStorage& WithIotSiteWiseMultiLayerStorage(const DatastoreIotSiteWiseMultiLayerStorage& value) { SetIotSiteWiseMultiLayerStorage(value); return *this;}

    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. You can't change the choice of Amazon S3 storage after your data store
     * is created. </p>
     */
    inline DatastoreStorage& WithIotSiteWiseMultiLayerStorage(DatastoreIotSiteWiseMultiLayerStorage&& value) { SetIotSiteWiseMultiLayerStorage(std::move(value)); return *this;}

  private:

    ServiceManagedDatastoreS3Storage m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet = false;

    CustomerManagedDatastoreS3Storage m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet = false;

    DatastoreIotSiteWiseMultiLayerStorage m_iotSiteWiseMultiLayerStorage;
    bool m_iotSiteWiseMultiLayerStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
