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
  class GetLegalHoldRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API GetLegalHoldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLegalHold"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const{ return m_legalHoldId; }

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline bool LegalHoldIdHasBeenSet() const { return m_legalHoldIdHasBeenSet; }

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline void SetLegalHoldId(const Aws::String& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = value; }

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline void SetLegalHoldId(Aws::String&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::move(value); }

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline void SetLegalHoldId(const char* value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId.assign(value); }

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline GetLegalHoldRequest& WithLegalHoldId(const Aws::String& value) { SetLegalHoldId(value); return *this;}

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline GetLegalHoldRequest& WithLegalHoldId(Aws::String&& value) { SetLegalHoldId(std::move(value)); return *this;}

    /**
     * <p>This is the ID required to use <code>GetLegalHold</code>. This unique ID is
     * associated with a specific legal hold.</p>
     */
    inline GetLegalHoldRequest& WithLegalHoldId(const char* value) { SetLegalHoldId(value); return *this;}

  private:

    Aws::String m_legalHoldId;
    bool m_legalHoldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
