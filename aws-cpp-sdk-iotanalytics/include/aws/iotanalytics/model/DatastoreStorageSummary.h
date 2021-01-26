/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ServiceManagedDatastoreS3StorageSummary.h>
#include <aws/iotanalytics/model/CustomerManagedDatastoreS3StorageSummary.h>
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
   * <p>Where data store data is stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreStorageSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatastoreStorageSummary
  {
  public:
    DatastoreStorageSummary();
    DatastoreStorageSummary(Aws::Utils::Json::JsonView jsonValue);
    DatastoreStorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to store data store data in an S3 bucket managed by AWS IoT
     * Analytics.</p>
     */
    inline const ServiceManagedDatastoreS3StorageSummary& GetServiceManagedS3() const{ return m_serviceManagedS3; }

    /**
     * <p>Used to store data store data in an S3 bucket managed by AWS IoT
     * Analytics.</p>
     */
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }

    /**
     * <p>Used to store data store data in an S3 bucket managed by AWS IoT
     * Analytics.</p>
     */
    inline void SetServiceManagedS3(const ServiceManagedDatastoreS3StorageSummary& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = value; }

    /**
     * <p>Used to store data store data in an S3 bucket managed by AWS IoT
     * Analytics.</p>
     */
    inline void SetServiceManagedS3(ServiceManagedDatastoreS3StorageSummary&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::move(value); }

    /**
     * <p>Used to store data store data in an S3 bucket managed by AWS IoT
     * Analytics.</p>
     */
    inline DatastoreStorageSummary& WithServiceManagedS3(const ServiceManagedDatastoreS3StorageSummary& value) { SetServiceManagedS3(value); return *this;}

    /**
     * <p>Used to store data store data in an S3 bucket managed by AWS IoT
     * Analytics.</p>
     */
    inline DatastoreStorageSummary& WithServiceManagedS3(ServiceManagedDatastoreS3StorageSummary&& value) { SetServiceManagedS3(std::move(value)); return *this;}


    /**
     * <p>Used to store data store data in an S3 bucket that you manage.</p>
     */
    inline const CustomerManagedDatastoreS3StorageSummary& GetCustomerManagedS3() const{ return m_customerManagedS3; }

    /**
     * <p>Used to store data store data in an S3 bucket that you manage.</p>
     */
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }

    /**
     * <p>Used to store data store data in an S3 bucket that you manage.</p>
     */
    inline void SetCustomerManagedS3(const CustomerManagedDatastoreS3StorageSummary& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = value; }

    /**
     * <p>Used to store data store data in an S3 bucket that you manage.</p>
     */
    inline void SetCustomerManagedS3(CustomerManagedDatastoreS3StorageSummary&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::move(value); }

    /**
     * <p>Used to store data store data in an S3 bucket that you manage.</p>
     */
    inline DatastoreStorageSummary& WithCustomerManagedS3(const CustomerManagedDatastoreS3StorageSummary& value) { SetCustomerManagedS3(value); return *this;}

    /**
     * <p>Used to store data store data in an S3 bucket that you manage.</p>
     */
    inline DatastoreStorageSummary& WithCustomerManagedS3(CustomerManagedDatastoreS3StorageSummary&& value) { SetCustomerManagedS3(std::move(value)); return *this;}

  private:

    ServiceManagedDatastoreS3StorageSummary m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet;

    CustomerManagedDatastoreS3StorageSummary m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
