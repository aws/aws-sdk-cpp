/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/IngestionS3InputConfiguration.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Specifies configuration information for the input data for the data
   * ingestion job, including input data S3 location. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/IngestionInputConfiguration">AWS
   * API Reference</a></p>
   */
  class IngestionInputConfiguration
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API IngestionInputConfiguration();
    AWS_LOOKOUTEQUIPMENT_API IngestionInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API IngestionInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location information for the S3 bucket used for input data for the data
     * ingestion. </p>
     */
    inline const IngestionS3InputConfiguration& GetS3InputConfiguration() const{ return m_s3InputConfiguration; }

    /**
     * <p>The location information for the S3 bucket used for input data for the data
     * ingestion. </p>
     */
    inline bool S3InputConfigurationHasBeenSet() const { return m_s3InputConfigurationHasBeenSet; }

    /**
     * <p>The location information for the S3 bucket used for input data for the data
     * ingestion. </p>
     */
    inline void SetS3InputConfiguration(const IngestionS3InputConfiguration& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = value; }

    /**
     * <p>The location information for the S3 bucket used for input data for the data
     * ingestion. </p>
     */
    inline void SetS3InputConfiguration(IngestionS3InputConfiguration&& value) { m_s3InputConfigurationHasBeenSet = true; m_s3InputConfiguration = std::move(value); }

    /**
     * <p>The location information for the S3 bucket used for input data for the data
     * ingestion. </p>
     */
    inline IngestionInputConfiguration& WithS3InputConfiguration(const IngestionS3InputConfiguration& value) { SetS3InputConfiguration(value); return *this;}

    /**
     * <p>The location information for the S3 bucket used for input data for the data
     * ingestion. </p>
     */
    inline IngestionInputConfiguration& WithS3InputConfiguration(IngestionS3InputConfiguration&& value) { SetS3InputConfiguration(std::move(value)); return *this;}

  private:

    IngestionS3InputConfiguration m_s3InputConfiguration;
    bool m_s3InputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
