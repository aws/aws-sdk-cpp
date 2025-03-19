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
    AWS_BACKUP_API GetLegalHoldRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLegalHold"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const { return m_legalHoldId; }
    inline bool LegalHoldIdHasBeenSet() const { return m_legalHoldIdHasBeenSet; }
    template<typename LegalHoldIdT = Aws::String>
    void SetLegalHoldId(LegalHoldIdT&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::forward<LegalHoldIdT>(value); }
    template<typename LegalHoldIdT = Aws::String>
    GetLegalHoldRequest& WithLegalHoldId(LegalHoldIdT&& value) { SetLegalHoldId(std::forward<LegalHoldIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_legalHoldId;
    bool m_legalHoldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
