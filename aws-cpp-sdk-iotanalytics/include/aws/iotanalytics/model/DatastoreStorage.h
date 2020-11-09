/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ServiceManagedDatastoreS3Storage.h>
#include <aws/iotanalytics/model/CustomerManagedDatastoreS3Storage.h>
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
   * <p>Where data store data is stored. You can choose one of
   * <code>serviceManagedS3</code> or <code>customerManagedS3</code> storage. If not
   * specified, the default is <code>serviceManagedS3</code>. You cannot change this
   * storage option after the data store is created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreStorage">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatastoreStorage
  {
  public:
    DatastoreStorage();
    DatastoreStorage(Aws::Utils::Json::JsonView jsonValue);
    DatastoreStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
     * Analytics. You cannot change the choice of service-managed or customer-managed
     * S3 storage after the data store is created.</p>
     */
    inline const ServiceManagedDatastoreS3Storage& GetServiceManagedS3() const{ return m_serviceManagedS3; }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
     * Analytics. You cannot change the choice of service-managed or customer-managed
     * S3 storage after the data store is created.</p>
     */
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
     * Analytics. You cannot change the choice of service-managed or customer-managed
     * S3 storage after the data store is created.</p>
     */
    inline void SetServiceManagedS3(const ServiceManagedDatastoreS3Storage& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = value; }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
     * Analytics. You cannot change the choice of service-managed or customer-managed
     * S3 storage after the data store is created.</p>
     */
    inline void SetServiceManagedS3(ServiceManagedDatastoreS3Storage&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::move(value); }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
     * Analytics. You cannot change the choice of service-managed or customer-managed
     * S3 storage after the data store is created.</p>
     */
    inline DatastoreStorage& WithServiceManagedS3(const ServiceManagedDatastoreS3Storage& value) { SetServiceManagedS3(value); return *this;}

    /**
     * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
     * Analytics. You cannot change the choice of service-managed or customer-managed
     * S3 storage after the data store is created.</p>
     */
    inline DatastoreStorage& WithServiceManagedS3(ServiceManagedDatastoreS3Storage&& value) { SetServiceManagedS3(std::move(value)); return *this;}


    /**
     * <p>Use this to store data store data in an S3 bucket that you manage. When
     * customer managed storage is selected, the <code>retentionPeriod</code> parameter
     * is ignored. The choice of service-managed or customer-managed S3 storage cannot
     * be changed after creation of the data store.</p>
     */
    inline const CustomerManagedDatastoreS3Storage& GetCustomerManagedS3() const{ return m_customerManagedS3; }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage. When
     * customer managed storage is selected, the <code>retentionPeriod</code> parameter
     * is ignored. The choice of service-managed or customer-managed S3 storage cannot
     * be changed after creation of the data store.</p>
     */
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage. When
     * customer managed storage is selected, the <code>retentionPeriod</code> parameter
     * is ignored. The choice of service-managed or customer-managed S3 storage cannot
     * be changed after creation of the data store.</p>
     */
    inline void SetCustomerManagedS3(const CustomerManagedDatastoreS3Storage& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = value; }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage. When
     * customer managed storage is selected, the <code>retentionPeriod</code> parameter
     * is ignored. The choice of service-managed or customer-managed S3 storage cannot
     * be changed after creation of the data store.</p>
     */
    inline void SetCustomerManagedS3(CustomerManagedDatastoreS3Storage&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::move(value); }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage. When
     * customer managed storage is selected, the <code>retentionPeriod</code> parameter
     * is ignored. The choice of service-managed or customer-managed S3 storage cannot
     * be changed after creation of the data store.</p>
     */
    inline DatastoreStorage& WithCustomerManagedS3(const CustomerManagedDatastoreS3Storage& value) { SetCustomerManagedS3(value); return *this;}

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage. When
     * customer managed storage is selected, the <code>retentionPeriod</code> parameter
     * is ignored. The choice of service-managed or customer-managed S3 storage cannot
     * be changed after creation of the data store.</p>
     */
    inline DatastoreStorage& WithCustomerManagedS3(CustomerManagedDatastoreS3Storage&& value) { SetCustomerManagedS3(std::move(value)); return *this;}

  private:

    ServiceManagedDatastoreS3Storage m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet;

    CustomerManagedDatastoreS3Storage m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
