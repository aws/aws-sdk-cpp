﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ChannelStorageSummary
  {
  public:
    AWS_IOTANALYTICS_API ChannelStorageSummary() = default;
    AWS_IOTANALYTICS_API ChannelStorageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelStorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to store channel data in an S3 bucket managed by IoT Analytics.</p>
     */
    inline const ServiceManagedChannelS3StorageSummary& GetServiceManagedS3() const { return m_serviceManagedS3; }
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }
    template<typename ServiceManagedS3T = ServiceManagedChannelS3StorageSummary>
    void SetServiceManagedS3(ServiceManagedS3T&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::forward<ServiceManagedS3T>(value); }
    template<typename ServiceManagedS3T = ServiceManagedChannelS3StorageSummary>
    ChannelStorageSummary& WithServiceManagedS3(ServiceManagedS3T&& value) { SetServiceManagedS3(std::forward<ServiceManagedS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to store channel data in an S3 bucket that you manage.</p>
     */
    inline const CustomerManagedChannelS3StorageSummary& GetCustomerManagedS3() const { return m_customerManagedS3; }
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }
    template<typename CustomerManagedS3T = CustomerManagedChannelS3StorageSummary>
    void SetCustomerManagedS3(CustomerManagedS3T&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::forward<CustomerManagedS3T>(value); }
    template<typename CustomerManagedS3T = CustomerManagedChannelS3StorageSummary>
    ChannelStorageSummary& WithCustomerManagedS3(CustomerManagedS3T&& value) { SetCustomerManagedS3(std::forward<CustomerManagedS3T>(value)); return *this;}
    ///@}
  private:

    ServiceManagedChannelS3StorageSummary m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet = false;

    CustomerManagedChannelS3StorageSummary m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
