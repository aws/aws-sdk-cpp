﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to stop an in-progress archive export job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StopArchiveExportRequest">AWS
   * API Reference</a></p>
   */
  class StopArchiveExportRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API StopArchiveExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopArchiveExport"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the export job to stop.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }
    inline StopArchiveExportRequest& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline StopArchiveExportRequest& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline StopArchiveExportRequest& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
