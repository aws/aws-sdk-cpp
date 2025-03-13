/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-data-exports/model/ExportStatus.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The reference details for a given export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/ExportReference">AWS
   * API Reference</a></p>
   */
  class ExportReference
  {
  public:
    AWS_BCMDATAEXPORTS_API ExportReference() = default;
    AWS_BCMDATAEXPORTS_API ExportReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API ExportReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline const Aws::String& GetExportArn() const { return m_exportArn; }
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
    template<typename ExportArnT = Aws::String>
    void SetExportArn(ExportArnT&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::forward<ExportArnT>(value); }
    template<typename ExportArnT = Aws::String>
    ExportReference& WithExportArn(ExportArnT&& value) { SetExportArn(std::forward<ExportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this specific data export.</p>
     */
    inline const Aws::String& GetExportName() const { return m_exportName; }
    inline bool ExportNameHasBeenSet() const { return m_exportNameHasBeenSet; }
    template<typename ExportNameT = Aws::String>
    void SetExportName(ExportNameT&& value) { m_exportNameHasBeenSet = true; m_exportName = std::forward<ExportNameT>(value); }
    template<typename ExportNameT = Aws::String>
    ExportReference& WithExportName(ExportNameT&& value) { SetExportName(std::forward<ExportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this specific data export.</p>
     */
    inline const ExportStatus& GetExportStatus() const { return m_exportStatus; }
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }
    template<typename ExportStatusT = ExportStatus>
    void SetExportStatus(ExportStatusT&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::forward<ExportStatusT>(value); }
    template<typename ExportStatusT = ExportStatus>
    ExportReference& WithExportStatus(ExportStatusT&& value) { SetExportStatus(std::forward<ExportStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    Aws::String m_exportName;
    bool m_exportNameHasBeenSet = false;

    ExportStatus m_exportStatus;
    bool m_exportStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
