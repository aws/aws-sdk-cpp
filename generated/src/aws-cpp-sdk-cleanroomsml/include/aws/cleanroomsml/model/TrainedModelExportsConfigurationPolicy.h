/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/TrainedModelExportsMaxSize.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainedModelExportFileType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about how the trained model exports are configured.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelExportsConfigurationPolicy">AWS
   * API Reference</a></p>
   */
  class TrainedModelExportsConfigurationPolicy
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelExportsConfigurationPolicy();
    AWS_CLEANROOMSML_API TrainedModelExportsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelExportsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum size of the data that can be exported.</p>
     */
    inline const TrainedModelExportsMaxSize& GetMaxSize() const{ return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    inline void SetMaxSize(const TrainedModelExportsMaxSize& value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }
    inline void SetMaxSize(TrainedModelExportsMaxSize&& value) { m_maxSizeHasBeenSet = true; m_maxSize = std::move(value); }
    inline TrainedModelExportsConfigurationPolicy& WithMaxSize(const TrainedModelExportsMaxSize& value) { SetMaxSize(value); return *this;}
    inline TrainedModelExportsConfigurationPolicy& WithMaxSize(TrainedModelExportsMaxSize&& value) { SetMaxSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files that are exported during the trained model export job.</p>
     */
    inline const Aws::Vector<TrainedModelExportFileType>& GetFilesToExport() const{ return m_filesToExport; }
    inline bool FilesToExportHasBeenSet() const { return m_filesToExportHasBeenSet; }
    inline void SetFilesToExport(const Aws::Vector<TrainedModelExportFileType>& value) { m_filesToExportHasBeenSet = true; m_filesToExport = value; }
    inline void SetFilesToExport(Aws::Vector<TrainedModelExportFileType>&& value) { m_filesToExportHasBeenSet = true; m_filesToExport = std::move(value); }
    inline TrainedModelExportsConfigurationPolicy& WithFilesToExport(const Aws::Vector<TrainedModelExportFileType>& value) { SetFilesToExport(value); return *this;}
    inline TrainedModelExportsConfigurationPolicy& WithFilesToExport(Aws::Vector<TrainedModelExportFileType>&& value) { SetFilesToExport(std::move(value)); return *this;}
    inline TrainedModelExportsConfigurationPolicy& AddFilesToExport(const TrainedModelExportFileType& value) { m_filesToExportHasBeenSet = true; m_filesToExport.push_back(value); return *this; }
    inline TrainedModelExportsConfigurationPolicy& AddFilesToExport(TrainedModelExportFileType&& value) { m_filesToExportHasBeenSet = true; m_filesToExport.push_back(std::move(value)); return *this; }
    ///@}
  private:

    TrainedModelExportsMaxSize m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    Aws::Vector<TrainedModelExportFileType> m_filesToExport;
    bool m_filesToExportHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
