/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/ExportErrorDetailsOutput.h>
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
   * <p>The structure for returning the export error details in a
   * GetEarthObservationJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportErrorDetails">AWS
   * API Reference</a></p>
   */
  class ExportErrorDetails
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportErrorDetails();
    AWS_SAGEMAKERGEOSPATIAL_API ExportErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ExportErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const ExportErrorDetailsOutput& GetExportResults() const{ return m_exportResults; }

    /**
     * <p/>
     */
    inline bool ExportResultsHasBeenSet() const { return m_exportResultsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetExportResults(const ExportErrorDetailsOutput& value) { m_exportResultsHasBeenSet = true; m_exportResults = value; }

    /**
     * <p/>
     */
    inline void SetExportResults(ExportErrorDetailsOutput&& value) { m_exportResultsHasBeenSet = true; m_exportResults = std::move(value); }

    /**
     * <p/>
     */
    inline ExportErrorDetails& WithExportResults(const ExportErrorDetailsOutput& value) { SetExportResults(value); return *this;}

    /**
     * <p/>
     */
    inline ExportErrorDetails& WithExportResults(ExportErrorDetailsOutput&& value) { SetExportResults(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const ExportErrorDetailsOutput& GetExportSourceImages() const{ return m_exportSourceImages; }

    /**
     * <p/>
     */
    inline bool ExportSourceImagesHasBeenSet() const { return m_exportSourceImagesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetExportSourceImages(const ExportErrorDetailsOutput& value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = value; }

    /**
     * <p/>
     */
    inline void SetExportSourceImages(ExportErrorDetailsOutput&& value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = std::move(value); }

    /**
     * <p/>
     */
    inline ExportErrorDetails& WithExportSourceImages(const ExportErrorDetailsOutput& value) { SetExportSourceImages(value); return *this;}

    /**
     * <p/>
     */
    inline ExportErrorDetails& WithExportSourceImages(ExportErrorDetailsOutput&& value) { SetExportSourceImages(std::move(value)); return *this;}

  private:

    ExportErrorDetailsOutput m_exportResults;
    bool m_exportResultsHasBeenSet = false;

    ExportErrorDetailsOutput m_exportSourceImages;
    bool m_exportSourceImagesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
