/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>

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
   * <p>Use this to store data store data in an S3 bucket managed by AWS IoT
   * Analytics. You cannot change the choice of service-managed or customer-managed
   * S3 storage after the data store is created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ServiceManagedDatastoreS3Storage">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API ServiceManagedDatastoreS3Storage
  {
  public:
    ServiceManagedDatastoreS3Storage();
    ServiceManagedDatastoreS3Storage(Aws::Utils::Json::JsonView jsonValue);
    ServiceManagedDatastoreS3Storage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
