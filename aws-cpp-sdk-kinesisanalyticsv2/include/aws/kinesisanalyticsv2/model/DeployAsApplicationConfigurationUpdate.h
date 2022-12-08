/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/S3ContentBaseLocationUpdate.h>
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
   * <p>Updates to the configuration information required to deploy an Amazon Data
   * Analytics Studio notebook as an application with durable state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeployAsApplicationConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class DeployAsApplicationConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Updates to the location that holds the data required to specify an Amazon
     * Data Analytics application.</p>
     */
    inline const S3ContentBaseLocationUpdate& GetS3ContentLocationUpdate() const{ return m_s3ContentLocationUpdate; }

    /**
     * <p>Updates to the location that holds the data required to specify an Amazon
     * Data Analytics application.</p>
     */
    inline bool S3ContentLocationUpdateHasBeenSet() const { return m_s3ContentLocationUpdateHasBeenSet; }

    /**
     * <p>Updates to the location that holds the data required to specify an Amazon
     * Data Analytics application.</p>
     */
    inline void SetS3ContentLocationUpdate(const S3ContentBaseLocationUpdate& value) { m_s3ContentLocationUpdateHasBeenSet = true; m_s3ContentLocationUpdate = value; }

    /**
     * <p>Updates to the location that holds the data required to specify an Amazon
     * Data Analytics application.</p>
     */
    inline void SetS3ContentLocationUpdate(S3ContentBaseLocationUpdate&& value) { m_s3ContentLocationUpdateHasBeenSet = true; m_s3ContentLocationUpdate = std::move(value); }

    /**
     * <p>Updates to the location that holds the data required to specify an Amazon
     * Data Analytics application.</p>
     */
    inline DeployAsApplicationConfigurationUpdate& WithS3ContentLocationUpdate(const S3ContentBaseLocationUpdate& value) { SetS3ContentLocationUpdate(value); return *this;}

    /**
     * <p>Updates to the location that holds the data required to specify an Amazon
     * Data Analytics application.</p>
     */
    inline DeployAsApplicationConfigurationUpdate& WithS3ContentLocationUpdate(S3ContentBaseLocationUpdate&& value) { SetS3ContentLocationUpdate(std::move(value)); return *this;}

  private:

    S3ContentBaseLocationUpdate m_s3ContentLocationUpdate;
    bool m_s3ContentLocationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
