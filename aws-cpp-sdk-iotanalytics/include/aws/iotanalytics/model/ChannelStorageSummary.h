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
#include <aws/iotanalytics/model/ServiceManagedChannelS3StorageSummary.h>
#include <aws/iotanalytics/model/CustomerManagedChannelS3StorageSummary.h>
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
   * <p>Where channel data is stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ChannelStorageSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API ChannelStorageSummary
  {
  public:
    ChannelStorageSummary();
    ChannelStorageSummary(Aws::Utils::Json::JsonView jsonValue);
    ChannelStorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to store channel data in an S3 bucket managed by the AWS IoT Analytics
     * service.</p>
     */
    inline const ServiceManagedChannelS3StorageSummary& GetServiceManagedS3() const{ return m_serviceManagedS3; }

    /**
     * <p>Used to store channel data in an S3 bucket managed by the AWS IoT Analytics
     * service.</p>
     */
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }

    /**
     * <p>Used to store channel data in an S3 bucket managed by the AWS IoT Analytics
     * service.</p>
     */
    inline void SetServiceManagedS3(const ServiceManagedChannelS3StorageSummary& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = value; }

    /**
     * <p>Used to store channel data in an S3 bucket managed by the AWS IoT Analytics
     * service.</p>
     */
    inline void SetServiceManagedS3(ServiceManagedChannelS3StorageSummary&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::move(value); }

    /**
     * <p>Used to store channel data in an S3 bucket managed by the AWS IoT Analytics
     * service.</p>
     */
    inline ChannelStorageSummary& WithServiceManagedS3(const ServiceManagedChannelS3StorageSummary& value) { SetServiceManagedS3(value); return *this;}

    /**
     * <p>Used to store channel data in an S3 bucket managed by the AWS IoT Analytics
     * service.</p>
     */
    inline ChannelStorageSummary& WithServiceManagedS3(ServiceManagedChannelS3StorageSummary&& value) { SetServiceManagedS3(std::move(value)); return *this;}


    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline const CustomerManagedChannelS3StorageSummary& GetCustomerManagedS3() const{ return m_customerManagedS3; }

    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }

    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline void SetCustomerManagedS3(const CustomerManagedChannelS3StorageSummary& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = value; }

    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline void SetCustomerManagedS3(CustomerManagedChannelS3StorageSummary&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::move(value); }

    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline ChannelStorageSummary& WithCustomerManagedS3(const CustomerManagedChannelS3StorageSummary& value) { SetCustomerManagedS3(value); return *this;}

    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline ChannelStorageSummary& WithCustomerManagedS3(CustomerManagedChannelS3StorageSummary&& value) { SetCustomerManagedS3(std::move(value)); return *this;}

  private:

    ServiceManagedChannelS3StorageSummary m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet;

    CustomerManagedChannelS3StorageSummary m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
