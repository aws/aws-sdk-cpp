/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/S3ContentBaseLocationDescription.h>
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
   * <p>The configuration information required to deploy an Amazon Data Analytics
   * Studio notebook as an application with durable state.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/DeployAsApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class DeployAsApplicationConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API DeployAsApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location that holds the data required to specify an Amazon Data Analytics
     * application.</p>
     */
    inline const S3ContentBaseLocationDescription& GetS3ContentLocationDescription() const { return m_s3ContentLocationDescription; }
    inline bool S3ContentLocationDescriptionHasBeenSet() const { return m_s3ContentLocationDescriptionHasBeenSet; }
    template<typename S3ContentLocationDescriptionT = S3ContentBaseLocationDescription>
    void SetS3ContentLocationDescription(S3ContentLocationDescriptionT&& value) { m_s3ContentLocationDescriptionHasBeenSet = true; m_s3ContentLocationDescription = std::forward<S3ContentLocationDescriptionT>(value); }
    template<typename S3ContentLocationDescriptionT = S3ContentBaseLocationDescription>
    DeployAsApplicationConfigurationDescription& WithS3ContentLocationDescription(S3ContentLocationDescriptionT&& value) { SetS3ContentLocationDescription(std::forward<S3ContentLocationDescriptionT>(value)); return *this;}
    ///@}
  private:

    S3ContentBaseLocationDescription m_s3ContentLocationDescription;
    bool m_s3ContentLocationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
