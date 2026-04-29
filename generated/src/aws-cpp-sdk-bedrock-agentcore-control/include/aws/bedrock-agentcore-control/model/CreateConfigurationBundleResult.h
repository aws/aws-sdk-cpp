/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class CreateConfigurationBundleResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateConfigurationBundleResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CreateConfigurationBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API CreateConfigurationBundleResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created configuration bundle.</p>
   */
  inline const Aws::String& GetBundleArn() const { return m_bundleArn; }
  template <typename BundleArnT = Aws::String>
  void SetBundleArn(BundleArnT&& value) {
    m_bundleArnHasBeenSet = true;
    m_bundleArn = std::forward<BundleArnT>(value);
  }
  template <typename BundleArnT = Aws::String>
  CreateConfigurationBundleResult& WithBundleArn(BundleArnT&& value) {
    SetBundleArn(std::forward<BundleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the created configuration bundle.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  CreateConfigurationBundleResult& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial version identifier of the configuration bundle.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  CreateConfigurationBundleResult& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the configuration bundle was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateConfigurationBundleResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  CreateConfigurationBundleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_bundleArn;

  Aws::String m_bundleId;

  Aws::String m_versionId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bundleArnHasBeenSet = false;
  bool m_bundleIdHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
