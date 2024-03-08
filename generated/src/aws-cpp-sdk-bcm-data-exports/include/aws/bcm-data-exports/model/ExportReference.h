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
    AWS_BCMDATAEXPORTS_API ExportReference();
    AWS_BCMDATAEXPORTS_API ExportReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API ExportReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const Aws::String& value) { m_exportArnHasBeenSet = true; m_exportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(Aws::String&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const char* value) { m_exportArnHasBeenSet = true; m_exportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline ExportReference& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline ExportReference& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline ExportReference& WithExportArn(const char* value) { SetExportArn(value); return *this;}


    /**
     * <p>The name of this specific data export.</p>
     */
    inline const Aws::String& GetExportName() const{ return m_exportName; }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline bool ExportNameHasBeenSet() const { return m_exportNameHasBeenSet; }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline void SetExportName(const Aws::String& value) { m_exportNameHasBeenSet = true; m_exportName = value; }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline void SetExportName(Aws::String&& value) { m_exportNameHasBeenSet = true; m_exportName = std::move(value); }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline void SetExportName(const char* value) { m_exportNameHasBeenSet = true; m_exportName.assign(value); }

    /**
     * <p>The name of this specific data export.</p>
     */
    inline ExportReference& WithExportName(const Aws::String& value) { SetExportName(value); return *this;}

    /**
     * <p>The name of this specific data export.</p>
     */
    inline ExportReference& WithExportName(Aws::String&& value) { SetExportName(std::move(value)); return *this;}

    /**
     * <p>The name of this specific data export.</p>
     */
    inline ExportReference& WithExportName(const char* value) { SetExportName(value); return *this;}


    /**
     * <p>The status of this specific data export.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of this specific data export.</p>
     */
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }

    /**
     * <p>The status of this specific data export.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }

    /**
     * <p>The status of this specific data export.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::move(value); }

    /**
     * <p>The status of this specific data export.</p>
     */
    inline ExportReference& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of this specific data export.</p>
     */
    inline ExportReference& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}

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
