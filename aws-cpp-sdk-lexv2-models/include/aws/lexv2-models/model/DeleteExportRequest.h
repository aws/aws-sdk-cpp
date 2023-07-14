﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELSV2_API DeleteExportRequest : public LexModelsV2Request
  {
  public:
    DeleteExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExport"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline DeleteExportRequest& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline DeleteExportRequest& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the export to delete.</p>
     */
    inline DeleteExportRequest& WithExportId(const char* value) { SetExportId(value); return *this;}

  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
