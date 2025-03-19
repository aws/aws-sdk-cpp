/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for retrieving a job list for an Amazon S3 Glacier
   * vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListJobsInput">AWS
   * API Reference</a></p>
   */
  class ListJobsRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API ListJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;

    AWS_GLACIER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListJobsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const { return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    template<typename VaultNameT = Aws::String>
    void SetVaultName(VaultNameT&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::forward<VaultNameT>(value); }
    template<typename VaultNameT = Aws::String>
    ListJobsRequest& WithVaultName(VaultNameT&& value) { SetVaultName(std::forward<VaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of jobs to be returned. The default limit is 50. The
     * number of jobs returned might be fewer than the specified limit, but the number
     * of returned jobs never exceeds the limit.</p>
     */
    inline const Aws::String& GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    template<typename LimitT = Aws::String>
    void SetLimit(LimitT&& value) { m_limitHasBeenSet = true; m_limit = std::forward<LimitT>(value); }
    template<typename LimitT = Aws::String>
    ListJobsRequest& WithLimit(LimitT&& value) { SetLimit(std::forward<LimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An opaque string used for pagination. This value specifies the job at which
     * the listing of jobs should begin. Get the marker value from a previous List Jobs
     * response. You only need to include the marker if you are continuing the
     * pagination of results started in a previous List Jobs request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListJobsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job status to return. You can specify the following values:
     * <code>InProgress</code>, <code>Succeeded</code>, or <code>Failed</code>.</p>
     */
    inline const Aws::String& GetStatuscode() const { return m_statuscode; }
    inline bool StatuscodeHasBeenSet() const { return m_statuscodeHasBeenSet; }
    template<typename StatuscodeT = Aws::String>
    void SetStatuscode(StatuscodeT&& value) { m_statuscodeHasBeenSet = true; m_statuscode = std::forward<StatuscodeT>(value); }
    template<typename StatuscodeT = Aws::String>
    ListJobsRequest& WithStatuscode(StatuscodeT&& value) { SetStatuscode(std::forward<StatuscodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the jobs to return. You can specify <code>true</code> or
     * <code>false</code>.</p>
     */
    inline const Aws::String& GetCompleted() const { return m_completed; }
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }
    template<typename CompletedT = Aws::String>
    void SetCompleted(CompletedT&& value) { m_completedHasBeenSet = true; m_completed = std::forward<CompletedT>(value); }
    template<typename CompletedT = Aws::String>
    ListJobsRequest& WithCompleted(CompletedT&& value) { SetCompleted(std::forward<CompletedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_statuscode;
    bool m_statuscodeHasBeenSet = false;

    Aws::String m_completed;
    bool m_completedHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
