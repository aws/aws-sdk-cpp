/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Architecture.h>
#include <aws/lambda-microvms/model/Chipset.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace LambdaMicrovms {
namespace Model {

/**
 */
class ListMicrovmImageBuildsRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API ListMicrovmImageBuildsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListMicrovmImageBuilds"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  AWS_LAMBDAMICROVMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListMicrovmImageBuildsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from a previous call. Use this token to retrieve the
   * next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMicrovmImageBuildsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier (ARN or ID) of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageIdentifier() const { return m_imageIdentifier; }
  inline bool ImageIdentifierHasBeenSet() const { return m_imageIdentifierHasBeenSet; }
  template <typename ImageIdentifierT = Aws::String>
  void SetImageIdentifier(ImageIdentifierT&& value) {
    m_imageIdentifierHasBeenSet = true;
    m_imageIdentifier = std::forward<ImageIdentifierT>(value);
  }
  template <typename ImageIdentifierT = Aws::String>
  ListMicrovmImageBuildsRequest& WithImageIdentifier(ImageIdentifierT&& value) {
    SetImageIdentifier(std::forward<ImageIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image to list builds for.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  ListMicrovmImageBuildsRequest& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters builds by target CPU architecture.</p>
   */
  inline Architecture GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  inline void SetArchitecture(Architecture value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline ListMicrovmImageBuildsRequest& WithArchitecture(Architecture value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters builds by target chipset.</p>
   */
  inline Chipset GetChipset() const { return m_chipset; }
  inline bool ChipsetHasBeenSet() const { return m_chipsetHasBeenSet; }
  inline void SetChipset(Chipset value) {
    m_chipsetHasBeenSet = true;
    m_chipset = value;
  }
  inline ListMicrovmImageBuildsRequest& WithChipset(Chipset value) {
    SetChipset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters builds by target chipset generation.</p>
   */
  inline const Aws::String& GetChipsetGeneration() const { return m_chipsetGeneration; }
  inline bool ChipsetGenerationHasBeenSet() const { return m_chipsetGenerationHasBeenSet; }
  template <typename ChipsetGenerationT = Aws::String>
  void SetChipsetGeneration(ChipsetGenerationT&& value) {
    m_chipsetGenerationHasBeenSet = true;
    m_chipsetGeneration = std::forward<ChipsetGenerationT>(value);
  }
  template <typename ChipsetGenerationT = Aws::String>
  ListMicrovmImageBuildsRequest& WithChipsetGeneration(ChipsetGenerationT&& value) {
    SetChipsetGeneration(std::forward<ChipsetGenerationT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_imageIdentifier;

  Aws::String m_imageVersion;

  Architecture m_architecture{Architecture::NOT_SET};

  Chipset m_chipset{Chipset::NOT_SET};

  Aws::String m_chipsetGeneration;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_imageIdentifierHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_chipsetHasBeenSet = false;
  bool m_chipsetGenerationHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
