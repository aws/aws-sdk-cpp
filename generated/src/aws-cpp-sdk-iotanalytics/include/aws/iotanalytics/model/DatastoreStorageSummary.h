/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ServiceManagedDatastoreS3StorageSummary.h>
#include <aws/iotanalytics/model/CustomerManagedDatastoreS3StorageSummary.h>
#include <aws/iotanalytics/model/DatastoreIotSiteWiseMultiLayerStorageSummary.h>
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
   * <p>Contains information about your data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreStorageSummary">AWS
   * API Reference</a></p>
   */
  class DatastoreStorageSummary
  {
  public:
    AWS_IOTANALYTICS_API DatastoreStorageSummary() = default;
    AWS_IOTANALYTICS_API DatastoreStorageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreStorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics.</p>
     */
    inline const ServiceManagedDatastoreS3StorageSummary& GetServiceManagedS3() const { return m_serviceManagedS3; }
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }
    template<typename ServiceManagedS3T = ServiceManagedDatastoreS3StorageSummary>
    void SetServiceManagedS3(ServiceManagedS3T&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::forward<ServiceManagedS3T>(value); }
    template<typename ServiceManagedS3T = ServiceManagedDatastoreS3StorageSummary>
    DatastoreStorageSummary& WithServiceManagedS3(ServiceManagedS3T&& value) { SetServiceManagedS3(std::forward<ServiceManagedS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to store data in an Amazon S3 bucket managed by IoT Analytics.</p>
     */
    inline const CustomerManagedDatastoreS3StorageSummary& GetCustomerManagedS3() const { return m_customerManagedS3; }
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }
    template<typename CustomerManagedS3T = CustomerManagedDatastoreS3StorageSummary>
    void SetCustomerManagedS3(CustomerManagedS3T&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::forward<CustomerManagedS3T>(value); }
    template<typename CustomerManagedS3T = CustomerManagedDatastoreS3StorageSummary>
    DatastoreStorageSummary& WithCustomerManagedS3(CustomerManagedS3T&& value) { SetCustomerManagedS3(std::forward<CustomerManagedS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used to store data used by IoT SiteWise in an Amazon S3 bucket that you
     * manage. </p>
     */
    inline const DatastoreIotSiteWiseMultiLayerStorageSummary& GetIotSiteWiseMultiLayerStorage() const { return m_iotSiteWiseMultiLayerStorage; }
    inline bool IotSiteWiseMultiLayerStorageHasBeenSet() const { return m_iotSiteWiseMultiLayerStorageHasBeenSet; }
    template<typename IotSiteWiseMultiLayerStorageT = DatastoreIotSiteWiseMultiLayerStorageSummary>
    void SetIotSiteWiseMultiLayerStorage(IotSiteWiseMultiLayerStorageT&& value) { m_iotSiteWiseMultiLayerStorageHasBeenSet = true; m_iotSiteWiseMultiLayerStorage = std::forward<IotSiteWiseMultiLayerStorageT>(value); }
    template<typename IotSiteWiseMultiLayerStorageT = DatastoreIotSiteWiseMultiLayerStorageSummary>
    DatastoreStorageSummary& WithIotSiteWiseMultiLayerStorage(IotSiteWiseMultiLayerStorageT&& value) { SetIotSiteWiseMultiLayerStorage(std::forward<IotSiteWiseMultiLayerStorageT>(value)); return *this;}
    ///@}
  private:

    ServiceManagedDatastoreS3StorageSummary m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet = false;

    CustomerManagedDatastoreS3StorageSummary m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet = false;

    DatastoreIotSiteWiseMultiLayerStorageSummary m_iotSiteWiseMultiLayerStorage;
    bool m_iotSiteWiseMultiLayerStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
