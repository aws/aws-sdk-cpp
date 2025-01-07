﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/BackupSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

  /**
   */
  class GetSearchResultExportJobRequest : public BackupSearchRequest
  {
  public:
    AWS_BACKUPSEARCH_API GetSearchResultExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSearchResultExportJob"; }

    AWS_BACKUPSEARCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is the unique string that identifies a specific export job.</p>
     * <p>Required for this operation.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const{ return m_exportJobIdentifier; }
    inline bool ExportJobIdentifierHasBeenSet() const { return m_exportJobIdentifierHasBeenSet; }
    inline void SetExportJobIdentifier(const Aws::String& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = value; }
    inline void SetExportJobIdentifier(Aws::String&& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = std::move(value); }
    inline void SetExportJobIdentifier(const char* value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier.assign(value); }
    inline GetSearchResultExportJobRequest& WithExportJobIdentifier(const Aws::String& value) { SetExportJobIdentifier(value); return *this;}
    inline GetSearchResultExportJobRequest& WithExportJobIdentifier(Aws::String&& value) { SetExportJobIdentifier(std::move(value)); return *this;}
    inline GetSearchResultExportJobRequest& WithExportJobIdentifier(const char* value) { SetExportJobIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_exportJobIdentifier;
    bool m_exportJobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
