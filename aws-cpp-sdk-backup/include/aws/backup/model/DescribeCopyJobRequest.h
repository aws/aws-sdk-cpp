/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BACKUP_API DescribeCopyJobRequest : public BackupRequest
  {
  public:
    DescribeCopyJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCopyJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline bool CopyJobIdHasBeenSet() const { return m_copyJobIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = value; }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = std::move(value); }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline void SetCopyJobId(const char* value) { m_copyJobIdHasBeenSet = true; m_copyJobId.assign(value); }

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline DescribeCopyJobRequest& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline DescribeCopyJobRequest& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a request to AWS Backup to copy a resource.</p>
     */
    inline DescribeCopyJobRequest& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}

  private:

    Aws::String m_copyJobId;
    bool m_copyJobIdHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
