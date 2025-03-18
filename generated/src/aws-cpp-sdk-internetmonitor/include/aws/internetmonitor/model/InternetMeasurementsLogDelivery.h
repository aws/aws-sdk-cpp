/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/S3Config.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Publish internet measurements to an Amazon S3 bucket in addition to
   * CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/InternetMeasurementsLogDelivery">AWS
   * API Reference</a></p>
   */
  class InternetMeasurementsLogDelivery
  {
  public:
    AWS_INTERNETMONITOR_API InternetMeasurementsLogDelivery() = default;
    AWS_INTERNETMONITOR_API InternetMeasurementsLogDelivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API InternetMeasurementsLogDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration information for publishing Internet Monitor internet
     * measurements to Amazon S3. The configuration includes the bucket name and
     * (optionally) prefix for the S3 bucket to store the measurements, and the
     * delivery status. The delivery status is <code>ENABLED</code> or
     * <code>DISABLED</code>, depending on whether you choose to deliver internet
     * measurements to S3 logs.</p>
     */
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    InternetMeasurementsLogDelivery& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}
  private:

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
