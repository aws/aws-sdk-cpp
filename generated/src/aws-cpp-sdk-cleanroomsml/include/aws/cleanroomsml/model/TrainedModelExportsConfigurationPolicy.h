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
    AWS_CLEANROOMSML_API TrainedModelExportsConfigurationPolicy() = default;
    AWS_CLEANROOMSML_API TrainedModelExportsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelExportsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum size of the data that can be exported.</p>
     */
    inline const TrainedModelExportsMaxSize& GetMaxSize() const { return m_maxSize; }
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }
    template<typename MaxSizeT = TrainedModelExportsMaxSize>
    void SetMaxSize(MaxSizeT&& value) { m_maxSizeHasBeenSet = true; m_maxSize = std::forward<MaxSizeT>(value); }
    template<typename MaxSizeT = TrainedModelExportsMaxSize>
    TrainedModelExportsConfigurationPolicy& WithMaxSize(MaxSizeT&& value) { SetMaxSize(std::forward<MaxSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files that are exported during the trained model export job.</p>
     */
    inline const Aws::Vector<TrainedModelExportFileType>& GetFilesToExport() const { return m_filesToExport; }
    inline bool FilesToExportHasBeenSet() const { return m_filesToExportHasBeenSet; }
    template<typename FilesToExportT = Aws::Vector<TrainedModelExportFileType>>
    void SetFilesToExport(FilesToExportT&& value) { m_filesToExportHasBeenSet = true; m_filesToExport = std::forward<FilesToExportT>(value); }
    template<typename FilesToExportT = Aws::Vector<TrainedModelExportFileType>>
    TrainedModelExportsConfigurationPolicy& WithFilesToExport(FilesToExportT&& value) { SetFilesToExport(std::forward<FilesToExportT>(value)); return *this;}
    inline TrainedModelExportsConfigurationPolicy& AddFilesToExport(TrainedModelExportFileType value) { m_filesToExportHasBeenSet = true; m_filesToExport.push_back(value); return *this; }
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
