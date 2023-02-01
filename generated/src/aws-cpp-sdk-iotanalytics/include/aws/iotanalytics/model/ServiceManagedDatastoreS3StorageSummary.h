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
   * <p>Contains information about the data store that is managed by IoT
   * Analytics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ServiceManagedDatastoreS3StorageSummary">AWS
   * API Reference</a></p>
   */
  class ServiceManagedDatastoreS3StorageSummary
  {
  public:
    AWS_IOTANALYTICS_API ServiceManagedDatastoreS3StorageSummary();
    AWS_IOTANALYTICS_API ServiceManagedDatastoreS3StorageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ServiceManagedDatastoreS3StorageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
