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
   * <p>Used to store channel data in an S3 bucket managed by IoT Analytics. You
   * can't change the choice of S3 storage after the data store is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ServiceManagedChannelS3Storage">AWS
   * API Reference</a></p>
   */
  class ServiceManagedChannelS3Storage
  {
  public:
    AWS_IOTANALYTICS_API ServiceManagedChannelS3Storage();
    AWS_IOTANALYTICS_API ServiceManagedChannelS3Storage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API ServiceManagedChannelS3Storage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
