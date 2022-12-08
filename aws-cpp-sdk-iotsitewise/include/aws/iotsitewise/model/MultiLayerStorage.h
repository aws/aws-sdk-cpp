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
    AWS_IOTSITEWISE_API MultiLayerStorage();
    AWS_IOTSITEWISE_API MultiLayerStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API MultiLayerStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline const CustomerManagedS3Storage& GetCustomerManagedS3Storage() const{ return m_customerManagedS3Storage; }

    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline bool CustomerManagedS3StorageHasBeenSet() const { return m_customerManagedS3StorageHasBeenSet; }

    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline void SetCustomerManagedS3Storage(const CustomerManagedS3Storage& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = value; }

    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline void SetCustomerManagedS3Storage(CustomerManagedS3Storage&& value) { m_customerManagedS3StorageHasBeenSet = true; m_customerManagedS3Storage = std::move(value); }

    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline MultiLayerStorage& WithCustomerManagedS3Storage(const CustomerManagedS3Storage& value) { SetCustomerManagedS3Storage(value); return *this;}

    /**
     * <p>Contains information about a customer managed Amazon S3 bucket.</p>
     */
    inline MultiLayerStorage& WithCustomerManagedS3Storage(CustomerManagedS3Storage&& value) { SetCustomerManagedS3Storage(std::move(value)); return *this;}

  private:

    CustomerManagedS3Storage m_customerManagedS3Storage;
    bool m_customerManagedS3StorageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
