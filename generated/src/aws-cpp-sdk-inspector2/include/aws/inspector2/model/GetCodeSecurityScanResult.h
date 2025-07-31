/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSecurityResource.h>
#include <aws/inspector2/model/CodeScanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{
  class GetCodeSecurityScanResult
  {
  public:
    AWS_INSPECTOR2_API GetCodeSecurityScanResult() = default;
    AWS_INSPECTOR2_API GetCodeSecurityScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCodeSecurityScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the scan.</p>
     */
    inline const Aws::String& GetScanId() const { return m_scanId; }
    template<typename ScanIdT = Aws::String>
    void SetScanId(ScanIdT&& value) { m_scanIdHasBeenSet = true; m_scanId = std::forward<ScanIdT>(value); }
    template<typename ScanIdT = Aws::String>
    GetCodeSecurityScanResult& WithScanId(ScanIdT&& value) { SetScanId(std::forward<ScanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier for the code repository that was scanned.</p>
     */
    inline const CodeSecurityResource& GetResource() const { return m_resource; }
    template<typename ResourceT = CodeSecurityResource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = CodeSecurityResource>
    GetCodeSecurityScanResult& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the scan.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    GetCodeSecurityScanResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the scan.</p>
     */
    inline CodeScanStatus GetStatus() const { return m_status; }
    inline void SetStatus(CodeScanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCodeSecurityScanResult& WithStatus(CodeScanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the scan.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetCodeSecurityScanResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the scan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetCodeSecurityScanResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the scan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetCodeSecurityScanResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the last commit that was scanned. This is only returned if
     * the scan was successful or skipped.</p>
     */
    inline const Aws::String& GetLastCommitId() const { return m_lastCommitId; }
    template<typename LastCommitIdT = Aws::String>
    void SetLastCommitId(LastCommitIdT&& value) { m_lastCommitIdHasBeenSet = true; m_lastCommitId = std::forward<LastCommitIdT>(value); }
    template<typename LastCommitIdT = Aws::String>
    GetCodeSecurityScanResult& WithLastCommitId(LastCommitIdT&& value) { SetLastCommitId(std::forward<LastCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCodeSecurityScanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;

    CodeSecurityResource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CodeScanStatus m_status{CodeScanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_lastCommitId;
    bool m_lastCommitIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
