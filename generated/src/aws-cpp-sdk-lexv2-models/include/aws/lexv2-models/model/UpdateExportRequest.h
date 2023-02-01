/**
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
  class UpdateExportRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExport"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline UpdateExportRequest& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline UpdateExportRequest& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline UpdateExportRequest& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline const Aws::String& GetFilePassword() const{ return m_filePassword; }

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline bool FilePasswordHasBeenSet() const { return m_filePasswordHasBeenSet; }

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline void SetFilePassword(const Aws::String& value) { m_filePasswordHasBeenSet = true; m_filePassword = value; }

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline void SetFilePassword(Aws::String&& value) { m_filePasswordHasBeenSet = true; m_filePassword = std::move(value); }

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline void SetFilePassword(const char* value) { m_filePasswordHasBeenSet = true; m_filePassword.assign(value); }

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline UpdateExportRequest& WithFilePassword(const Aws::String& value) { SetFilePassword(value); return *this;}

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline UpdateExportRequest& WithFilePassword(Aws::String&& value) { SetFilePassword(std::move(value)); return *this;}

    /**
     * <p>The new password to use to encrypt the export zip archive.</p>
     */
    inline UpdateExportRequest& WithFilePassword(const char* value) { SetFilePassword(value); return *this;}

  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    Aws::String m_filePassword;
    bool m_filePasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
