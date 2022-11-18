/**
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
  class AWS_BACKUP_API DescribeCopyJobRequest : public BackupRequest
  {
  public:
    DescribeCopyJobRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DescribeCopyJobRequest> Clone() const
    {
      return Aws::MakeUnique<DescribeCopyJobRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCopyJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline const Aws::String& GetCopyJobId() const{ return m_copyJobId; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline bool CopyJobIdHasBeenSet() const { return m_copyJobIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(const Aws::String& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = value; }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(Aws::String&& value) { m_copyJobIdHasBeenSet = true; m_copyJobId = std::move(value); }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline void SetCopyJobId(const char* value) { m_copyJobIdHasBeenSet = true; m_copyJobId.assign(value); }

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline DescribeCopyJobRequest& WithCopyJobId(const Aws::String& value) { SetCopyJobId(value); return *this;}

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline DescribeCopyJobRequest& WithCopyJobId(Aws::String&& value) { SetCopyJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a copy job.</p>
     */
    inline DescribeCopyJobRequest& WithCopyJobId(const char* value) { SetCopyJobId(value); return *this;}

  private:

    Aws::String m_copyJobId;
    bool m_copyJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
