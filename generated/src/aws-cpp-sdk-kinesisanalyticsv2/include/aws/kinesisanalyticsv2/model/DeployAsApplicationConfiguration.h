/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/S3ContentBaseLocation.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>The information required to deploy a Managed Service for Apache Flink Studio
   * notebook as an application with durable state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeployAsApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class DeployAsApplicationConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfiguration() = default;
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of an Amazon S3 object that contains the Amazon Data
     * Analytics application, including the Amazon Resource Name (ARN) of the S3
     * bucket, the name of the Amazon S3 object that contains the data, and the version
     * number of the Amazon S3 object that contains the data. </p>
     */
    inline const S3ContentBaseLocation& GetS3ContentLocation() const { return m_s3ContentLocation; }
    inline bool S3ContentLocationHasBeenSet() const { return m_s3ContentLocationHasBeenSet; }
    template<typename S3ContentLocationT = S3ContentBaseLocation>
    void SetS3ContentLocation(S3ContentLocationT&& value) { m_s3ContentLocationHasBeenSet = true; m_s3ContentLocation = std::forward<S3ContentLocationT>(value); }
    template<typename S3ContentLocationT = S3ContentBaseLocation>
    DeployAsApplicationConfiguration& WithS3ContentLocation(S3ContentLocationT&& value) { SetS3ContentLocation(std::forward<S3ContentLocationT>(value)); return *this;}
    ///@}
  private:

    S3ContentBaseLocation m_s3ContentLocation;
    bool m_s3ContentLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
