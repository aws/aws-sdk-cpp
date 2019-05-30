/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Where data store data is stored.</p><p><h3>See Also:</h3>   <a
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
     * <p>Use this to store data store data in an S3 bucket managed by the AWS IoT
     * Analytics service.</p>
     */
    inline const ServiceManagedDatastoreS3Storage& GetServiceManagedS3() const{ return m_serviceManagedS3; }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by the AWS IoT
     * Analytics service.</p>
     */
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by the AWS IoT
     * Analytics service.</p>
     */
    inline void SetServiceManagedS3(const ServiceManagedDatastoreS3Storage& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = value; }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by the AWS IoT
     * Analytics service.</p>
     */
    inline void SetServiceManagedS3(ServiceManagedDatastoreS3Storage&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::move(value); }

    /**
     * <p>Use this to store data store data in an S3 bucket managed by the AWS IoT
     * Analytics service.</p>
     */
    inline DatastoreStorage& WithServiceManagedS3(const ServiceManagedDatastoreS3Storage& value) { SetServiceManagedS3(value); return *this;}

    /**
     * <p>Use this to store data store data in an S3 bucket managed by the AWS IoT
     * Analytics service.</p>
     */
    inline DatastoreStorage& WithServiceManagedS3(ServiceManagedDatastoreS3Storage&& value) { SetServiceManagedS3(std::move(value)); return *this;}


    /**
     * <p>Use this to store data store data in an S3 bucket that you manage.</p>
     */
    inline const CustomerManagedDatastoreS3Storage& GetCustomerManagedS3() const{ return m_customerManagedS3; }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage.</p>
     */
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage.</p>
     */
    inline void SetCustomerManagedS3(const CustomerManagedDatastoreS3Storage& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = value; }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage.</p>
     */
    inline void SetCustomerManagedS3(CustomerManagedDatastoreS3Storage&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::move(value); }

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage.</p>
     */
    inline DatastoreStorage& WithCustomerManagedS3(const CustomerManagedDatastoreS3Storage& value) { SetCustomerManagedS3(value); return *this;}

    /**
     * <p>Use this to store data store data in an S3 bucket that you manage.</p>
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
