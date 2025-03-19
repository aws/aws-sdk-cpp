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
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class CancelLegalHoldRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CancelLegalHoldRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelLegalHold"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the legal hold.</p>
     */
    inline const Aws::String& GetLegalHoldId() const { return m_legalHoldId; }
    inline bool LegalHoldIdHasBeenSet() const { return m_legalHoldIdHasBeenSet; }
    template<typename LegalHoldIdT = Aws::String>
    void SetLegalHoldId(LegalHoldIdT&& value) { m_legalHoldIdHasBeenSet = true; m_legalHoldId = std::forward<LegalHoldIdT>(value); }
    template<typename LegalHoldIdT = Aws::String>
    CancelLegalHoldRequest& WithLegalHoldId(LegalHoldIdT&& value) { SetLegalHoldId(std::forward<LegalHoldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string the describes the reason for removing the legal hold.</p>
     */
    inline const Aws::String& GetCancelDescription() const { return m_cancelDescription; }
    inline bool CancelDescriptionHasBeenSet() const { return m_cancelDescriptionHasBeenSet; }
    template<typename CancelDescriptionT = Aws::String>
    void SetCancelDescription(CancelDescriptionT&& value) { m_cancelDescriptionHasBeenSet = true; m_cancelDescription = std::forward<CancelDescriptionT>(value); }
    template<typename CancelDescriptionT = Aws::String>
    CancelLegalHoldRequest& WithCancelDescription(CancelDescriptionT&& value) { SetCancelDescription(std::forward<CancelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integer amount, in days, after which to remove legal hold.</p>
     */
    inline long long GetRetainRecordInDays() const { return m_retainRecordInDays; }
    inline bool RetainRecordInDaysHasBeenSet() const { return m_retainRecordInDaysHasBeenSet; }
    inline void SetRetainRecordInDays(long long value) { m_retainRecordInDaysHasBeenSet = true; m_retainRecordInDays = value; }
    inline CancelLegalHoldRequest& WithRetainRecordInDays(long long value) { SetRetainRecordInDays(value); return *this;}
    ///@}
  private:

    Aws::String m_legalHoldId;
    bool m_legalHoldIdHasBeenSet = false;

    Aws::String m_cancelDescription;
    bool m_cancelDescriptionHasBeenSet = false;

    long long m_retainRecordInDays{0};
    bool m_retainRecordInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
