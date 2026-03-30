/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DescribeLookupTablesRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeLookupTablesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeLookupTables"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A prefix to filter lookup tables by name. Only tables whose names start with
   * this prefix are returned. If you don't specify a prefix, all tables in the
   * account and Region are returned.</p>
   */
  inline const Aws::String& GetLookupTableNamePrefix() const { return m_lookupTableNamePrefix; }
  inline bool LookupTableNamePrefixHasBeenSet() const { return m_lookupTableNamePrefixHasBeenSet; }
  template <typename LookupTableNamePrefixT = Aws::String>
  void SetLookupTableNamePrefix(LookupTableNamePrefixT&& value) {
    m_lookupTableNamePrefixHasBeenSet = true;
    m_lookupTableNamePrefix = std::forward<LookupTableNamePrefixT>(value);
  }
  template <typename LookupTableNamePrefixT = Aws::String>
  DescribeLookupTablesRequest& WithLookupTableNamePrefix(LookupTableNamePrefixT&& value) {
    SetLookupTableNamePrefix(std::forward<LookupTableNamePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of lookup tables to return in the response. The default
   * value is 50 and the maximum value is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeLookupTablesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of items to return. (You received this token from
   * a previous call.)</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeLookupTablesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lookupTableNamePrefix;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_lookupTableNamePrefixHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
