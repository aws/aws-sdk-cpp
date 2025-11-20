/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ContainerRecipe.h>
#include <aws/imagebuilder/model/LatestVersionReferences.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {
class GetContainerRecipeResult {
 public:
  AWS_IMAGEBUILDER_API GetContainerRecipeResult() = default;
  AWS_IMAGEBUILDER_API GetContainerRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IMAGEBUILDER_API GetContainerRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The request ID that uniquely identifies this request.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetContainerRecipeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container recipe object that is returned.</p>
   */
  inline const ContainerRecipe& GetContainerRecipe() const { return m_containerRecipe; }
  template <typename ContainerRecipeT = ContainerRecipe>
  void SetContainerRecipe(ContainerRecipeT&& value) {
    m_containerRecipeHasBeenSet = true;
    m_containerRecipe = std::forward<ContainerRecipeT>(value);
  }
  template <typename ContainerRecipeT = ContainerRecipe>
  GetContainerRecipeResult& WithContainerRecipe(ContainerRecipeT&& value) {
    SetContainerRecipe(std::forward<ContainerRecipeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ARNs with different wildcard variations of semantic
   * versioning.</p>
   */
  inline const LatestVersionReferences& GetLatestVersionReferences() const { return m_latestVersionReferences; }
  template <typename LatestVersionReferencesT = LatestVersionReferences>
  void SetLatestVersionReferences(LatestVersionReferencesT&& value) {
    m_latestVersionReferencesHasBeenSet = true;
    m_latestVersionReferences = std::forward<LatestVersionReferencesT>(value);
  }
  template <typename LatestVersionReferencesT = LatestVersionReferences>
  GetContainerRecipeResult& WithLatestVersionReferences(LatestVersionReferencesT&& value) {
    SetLatestVersionReferences(std::forward<LatestVersionReferencesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;

  ContainerRecipe m_containerRecipe;
  bool m_containerRecipeHasBeenSet = false;

  LatestVersionReferences m_latestVersionReferences;
  bool m_latestVersionReferencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
