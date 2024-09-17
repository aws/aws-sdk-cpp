/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ExportStatus.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>Summary statuses of an archive export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ExportSummary">AWS
   * API Reference</a></p>
   */
  class ExportSummary
  {
  public:
    AWS_MAILMANAGER_API ExportSummary();
    AWS_MAILMANAGER_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the export job.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }
    inline ExportSummary& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline ExportSummary& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline ExportSummary& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the export job.</p>
     */
    inline const ExportStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExportStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportSummary& WithStatus(const ExportStatus& value) { SetStatus(value); return *this;}
    inline ExportSummary& WithStatus(ExportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    ExportStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
