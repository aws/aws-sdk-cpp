/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CodeCommit {
namespace Model {

/**
 */
class GetBlobDifferencesRequest : public CodeCommitRequest {
 public:
  AWS_CODECOMMIT_API GetBlobDifferencesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBlobDifferences"; }

  AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

  AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the repository that contains the blobs to compare.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  GetBlobDifferencesRequest& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the "after" (destination) blob in the diff. Typically the value of
   * <code>afterBlob.blobId</code> from a <code>Difference</code> object returned by
   * <a>GetDifferences</a>.</p>
   */
  inline const Aws::String& GetAfterBlobId() const { return m_afterBlobId; }
  inline bool AfterBlobIdHasBeenSet() const { return m_afterBlobIdHasBeenSet; }
  template <typename AfterBlobIdT = Aws::String>
  void SetAfterBlobId(AfterBlobIdT&& value) {
    m_afterBlobIdHasBeenSet = true;
    m_afterBlobId = std::forward<AfterBlobIdT>(value);
  }
  template <typename AfterBlobIdT = Aws::String>
  GetBlobDifferencesRequest& WithAfterBlobId(AfterBlobIdT&& value) {
    SetAfterBlobId(std::forward<AfterBlobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the "before" (source) blob in the diff. Typically the value of
   * <code>beforeBlob.blobId</code> from a <code>Difference</code> object returned by
   * <a>GetDifferences</a>.</p> <p>If you do not specify a value, the operation
   * returns a diff against an empty before-state. This is equivalent to treating the
   * file as newly added.</p>
   */
  inline const Aws::String& GetBeforeBlobId() const { return m_beforeBlobId; }
  inline bool BeforeBlobIdHasBeenSet() const { return m_beforeBlobIdHasBeenSet; }
  template <typename BeforeBlobIdT = Aws::String>
  void SetBeforeBlobId(BeforeBlobIdT&& value) {
    m_beforeBlobIdHasBeenSet = true;
    m_beforeBlobId = std::forward<BeforeBlobIdT>(value);
  }
  template <typename BeforeBlobIdT = Aws::String>
  GetBlobDifferencesRequest& WithBeforeBlobId(BeforeBlobIdT&& value) {
    SetBeforeBlobId(std::forward<BeforeBlobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of unchanged lines of context to include before and after each
   * block of changes in a hunk. Valid values are 0 through 20. Defaults to
   * <code>3</code>.</p>
   */
  inline int GetContextLines() const { return m_contextLines; }
  inline bool ContextLinesHasBeenSet() const { return m_contextLinesHasBeenSet; }
  inline void SetContextLines(int value) {
    m_contextLinesHasBeenSet = true;
    m_contextLines = value;
  }
  inline GetBlobDifferencesRequest& WithContextLines(int value) {
    SetContextLines(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to ignore whitespace-only changes when computing the diff.
   * When <code>true</code>, the operation treats lines that differ only in
   * whitespace as unchanged. Defaults to <code>false</code>.</p>
   */
  inline bool GetIgnoreWhitespace() const { return m_ignoreWhitespace; }
  inline bool IgnoreWhitespaceHasBeenSet() const { return m_ignoreWhitespaceHasBeenSet; }
  inline void SetIgnoreWhitespace(bool value) {
    m_ignoreWhitespaceHasBeenSet = true;
    m_ignoreWhitespace = value;
  }
  inline GetBlobDifferencesRequest& WithIgnoreWhitespace(bool value) {
    SetIgnoreWhitespace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of <code>DiffHunk</code> entries to return in a single
   * response page. Defaults to <code>100</code>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetBlobDifferencesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An enumeration token that returns the next batch of results when present in a
   * request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetBlobDifferencesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repositoryName;

  Aws::String m_afterBlobId;

  Aws::String m_beforeBlobId;

  int m_contextLines{0};

  bool m_ignoreWhitespace{false};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_repositoryNameHasBeenSet = false;
  bool m_afterBlobIdHasBeenSet = false;
  bool m_beforeBlobIdHasBeenSet = false;
  bool m_contextLinesHasBeenSet = false;
  bool m_ignoreWhitespaceHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
