/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobS3Data.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>An object containing information about the output file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportVectorEnrichmentJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class ExportVectorEnrichmentJobOutputConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobOutputConfig();
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const VectorEnrichmentJobS3Data& GetS3Data() const{ return m_s3Data; }

    /**
     * <p/>
     */
    inline bool S3DataHasBeenSet() const { return m_s3DataHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetS3Data(const VectorEnrichmentJobS3Data& value) { m_s3DataHasBeenSet = true; m_s3Data = value; }

    /**
     * <p/>
     */
    inline void SetS3Data(VectorEnrichmentJobS3Data&& value) { m_s3DataHasBeenSet = true; m_s3Data = std::move(value); }

    /**
     * <p/>
     */
    inline ExportVectorEnrichmentJobOutputConfig& WithS3Data(const VectorEnrichmentJobS3Data& value) { SetS3Data(value); return *this;}

    /**
     * <p/>
     */
    inline ExportVectorEnrichmentJobOutputConfig& WithS3Data(VectorEnrichmentJobS3Data&& value) { SetS3Data(std::move(value)); return *this;}

  private:

    VectorEnrichmentJobS3Data m_s3Data;
    bool m_s3DataHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
