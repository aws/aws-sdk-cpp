/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/CustomerManagedS3Storage.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about the storage destination.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MultiLayerStorage">AWS
   * API Reference</a></p>
   */
  class MultiLayerStorage
  {
  public:
    AWS_IOTSITEWISE_API MultiLayerStorage() = default;
    AWS_IOTSITEWISE_API MultiLayerStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API MultiLayerStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline const CustomerManagedS3Storage& GetCustomerManagedS3Storage() const { return m_customerManagedS3Storage; }
    inline bool CustomerManagedS3StorageHasBeenSet() const { return m_customerManagedS3StorageHasBeenSet; }
    template<typename CustomerManagedS3StorageT = CustomerManagedS3Storage>
    void SetCustomerManagedS3Storage(CustomerManagedS3StorageT&& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = std::forward<CustomerManagedS3StorageT>(value); }
    template<typename CustomerManagedS3StorageT = CustomerManagedS3Storage>
    MultiLayerStorage& WithCustomerManagedS3Storage(CustomerManagedS3StorageT&& value) { SetCustomerManagedS3Storage(std::forward<CustomerManagedS3StorageT>(value)); return *this;}
    ///@}
  private:

    CustomerManagedS3Storage m_customerManagedS3Storage;
    bool m_customerManagedS3StorageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
