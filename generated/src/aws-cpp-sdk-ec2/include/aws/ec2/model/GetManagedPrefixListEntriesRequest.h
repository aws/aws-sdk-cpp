/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetManagedPrefixListEntriesRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetManagedPrefixListEntriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetManagedPrefixListEntries"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetManagedPrefixListEntriesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline GetManagedPrefixListEntriesRequest& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline GetManagedPrefixListEntriesRequest& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline GetManagedPrefixListEntriesRequest& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the prefix list for which to return the entries. The default
     * is the current version.</p>
     */
    inline long long GetTargetVersion() const{ return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    inline void SetTargetVersion(long long value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }
    inline GetManagedPrefixListEntriesRequest& WithTargetVersion(long long value) { SetTargetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetManagedPrefixListEntriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetManagedPrefixListEntriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetManagedPrefixListEntriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetManagedPrefixListEntriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    long long m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
