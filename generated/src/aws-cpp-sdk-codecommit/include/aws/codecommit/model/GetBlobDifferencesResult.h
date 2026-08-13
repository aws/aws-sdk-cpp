/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/DiffHunk.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CodeCommit {
namespace Model {
class GetBlobDifferencesResult {
 public:
  AWS_CODECOMMIT_API GetBlobDifferencesResult() = default;
  AWS_CODECOMMIT_API GetBlobDifferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CODECOMMIT_API GetBlobDifferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An ordered list of diff hunks. Each hunk represents a contiguous run of
   * changed and adjacent context lines. The list is empty when the blobs are
   * identical or when the content is binary. The list is also empty when a paginated
   * request has already returned all hunks in earlier pages, in which case
   * <code>NextToken</code> is also <code>null</code>.</p>
   */
  inline const Aws::Vector<DiffHunk>& GetHunks() const { return m_hunks; }
  template <typename HunksT = Aws::Vector<DiffHunk>>
  void SetHunks(HunksT&& value) {
    m_hunksHasBeenSet = true;
    m_hunks = std::forward<HunksT>(value);
  }
  template <typename HunksT = Aws::Vector<DiffHunk>>
  GetBlobDifferencesResult& WithHunks(HunksT&& value) {
    SetHunks(std::forward<HunksT>(value));
    return *this;
  }
  template <typename HunksT = DiffHunk>
  GetBlobDifferencesResult& AddHunks(HunksT&& value) {
    m_hunksHasBeenSet = true;
    m_hunks.emplace_back(std::forward<HunksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the operation treated the diff content as binary. When
   * <code>true</code>, the operation does not compute a line-level diff and
   * <code>hunks</code> is empty.</p>
   */
  inline bool GetIsBinary() const { return m_isBinary; }
  inline void SetIsBinary(bool value) {
    m_isBinaryHasBeenSet = true;
    m_isBinary = value;
  }
  inline GetBlobDifferencesResult& WithIsBinary(bool value) {
    SetIsBinary(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in bytes, of the blob identified by <code>beforeBlobId</code>.
   * Returns <code>0</code> when you do not specify <code>beforeBlobId</code>.</p>
   */
  inline long long GetBeforeBlobSize() const { return m_beforeBlobSize; }
  inline void SetBeforeBlobSize(long long value) {
    m_beforeBlobSizeHasBeenSet = true;
    m_beforeBlobSize = value;
  }
  inline GetBlobDifferencesResult& WithBeforeBlobSize(long long value) {
    SetBeforeBlobSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size, in bytes, of the blob identified by <code>afterBlobId</code>.</p>
   */
  inline long long GetAfterBlobSize() const { return m_afterBlobSize; }
  inline void SetAfterBlobSize(long long value) {
    m_afterBlobSizeHasBeenSet = true;
    m_afterBlobSize = value;
  }
  inline GetBlobDifferencesResult& WithAfterBlobSize(long long value) {
    SetAfterBlobSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An enumeration token that can be used in a request to return the next batch
   * of <code>DiffHunk</code> entries. <code>null</code> when the response contains
   * the final page of the diff.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetBlobDifferencesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetBlobDifferencesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DiffHunk> m_hunks;

  bool m_isBinary{false};

  long long m_beforeBlobSize{0};

  long long m_afterBlobSize{0};

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_hunksHasBeenSet = false;
  bool m_isBinaryHasBeenSet = false;
  bool m_beforeBlobSizeHasBeenSet = false;
  bool m_afterBlobSizeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
