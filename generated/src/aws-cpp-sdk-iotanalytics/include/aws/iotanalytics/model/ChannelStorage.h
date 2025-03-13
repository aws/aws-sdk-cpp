/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ServiceManagedChannelS3Storage.h>
#include <aws/iotanalytics/model/CustomerManagedChannelS3Storage.h>
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
   * <p>Where channel data is stored. You may choose one of
   * <code>serviceManagedS3</code>, <code>customerManagedS3</code> storage. If not
   * specified, the default is <code>serviceManagedS3</code>. This can't be changed
   * after creation of the channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ChannelStorage">AWS
   * API Reference</a></p>
   */
  class ChannelStorage
  {
  public:
    AWS_IOTANALYTICS_API ChannelStorage() = default;
    AWS_IOTANALYTICS_API ChannelStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ChannelStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Used to store channel data in an S3 bucket managed by IoT Analytics. You
     * can't change the choice of S3 storage after the data store is created.</p>
     */
    inline const ServiceManagedChannelS3Storage& GetServiceManagedS3() const { return m_serviceManagedS3; }
    inline bool ServiceManagedS3HasBeenSet() const { return m_serviceManagedS3HasBeenSet; }
    template<typename ServiceManagedS3T = ServiceManagedChannelS3Storage>
    void SetServiceManagedS3(ServiceManagedS3T&& value) { m_serviceManagedS3HasBeenSet = true; m_serviceManagedS3 = std::forward<ServiceManagedS3T>(value); }
    template<typename ServiceManagedS3T = ServiceManagedChannelS3Storage>
    ChannelStorage& WithServiceManagedS3(ServiceManagedS3T&& value) { SetServiceManagedS3(std::forward<ServiceManagedS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to store channel data in an S3 bucket that you manage. If customer
     * managed storage is selected, the <code>retentionPeriod</code> parameter is
     * ignored. You can't change the choice of S3 storage after the data store is
     * created.</p>
     */
    inline const CustomerManagedChannelS3Storage& GetCustomerManagedS3() const { return m_customerManagedS3; }
    inline bool CustomerManagedS3HasBeenSet() const { return m_customerManagedS3HasBeenSet; }
    template<typename CustomerManagedS3T = CustomerManagedChannelS3Storage>
    void SetCustomerManagedS3(CustomerManagedS3T&& value) { m_customerManagedS3HasBeenSet = true; m_customerManagedS3 = std::forward<CustomerManagedS3T>(value); }
    template<typename CustomerManagedS3T = CustomerManagedChannelS3Storage>
    ChannelStorage& WithCustomerManagedS3(CustomerManagedS3T&& value) { SetCustomerManagedS3(std::forward<CustomerManagedS3T>(value)); return *this;}
    ///@}
  private:

    ServiceManagedChannelS3Storage m_serviceManagedS3;
    bool m_serviceManagedS3HasBeenSet = false;

    CustomerManagedChannelS3Storage m_customerManagedS3;
    bool m_customerManagedS3HasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
