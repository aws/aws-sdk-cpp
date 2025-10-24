﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild {
namespace Model {
class ListSandboxesForProjectResult {
 public:
  AWS_CODEBUILD_API ListSandboxesForProjectResult() = default;
  AWS_CODEBUILD_API ListSandboxesForProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CODEBUILD_API ListSandboxesForProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the requested sandbox IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
  template <typename IdsT = Aws::Vector<Aws::String>>
  void SetIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids = std::forward<IdsT>(value);
  }
  template <typename IdsT = Aws::Vector<Aws::String>>
  ListSandboxesForProjectResult& WithIds(IdsT&& value) {
    SetIds(std::forward<IdsT>(value));
    return *this;
  }
  template <typename IdsT = Aws::String>
  ListSandboxesForProjectResult& AddIds(IdsT&& value) {
    m_idsHasBeenSet = true;
    m_ids.emplace_back(std::forward<IdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the next token to get paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSandboxesForProjectResult& WithNextToken(NextTokenT&& value) {
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
  ListSandboxesForProjectResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_ids;
  bool m_idsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
