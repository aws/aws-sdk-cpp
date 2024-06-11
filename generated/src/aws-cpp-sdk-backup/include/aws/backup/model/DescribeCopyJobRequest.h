﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeCopyJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeCopyJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCopyJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }
    inline bool CopyJobIdHasBeenSet() const { return m_copyJobIdHasBeenSet; }
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = value; }
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = std::move(value); }
    inline void SetCopyJobId(const char* value) { m_copyJobIdHasBeenSet = true; m_copyJobId.assign(value); }
    inline DescribeCopyJobRequest& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}
    inline DescribeCopyJobRequest& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}
    inline DescribeCopyJobRequest& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_copyJobId;
    bool m_copyJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
