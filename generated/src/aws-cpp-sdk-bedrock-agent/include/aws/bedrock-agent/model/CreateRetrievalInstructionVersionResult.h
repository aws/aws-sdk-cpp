/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent {
namespace Model {
class CreateRetrievalInstructionVersionResult {
 public:
  AWS_BEDROCKAGENT_API CreateRetrievalInstructionVersionResult() = default;
  AWS_BEDROCKAGENT_API CreateRetrievalInstructionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API CreateRetrievalInstructionVersionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the retrieval instruction.</p>
   */
  inline const Aws::String& GetRetrievalInstructionId() const { return m_retrievalInstructionId; }
  template <typename RetrievalInstructionIdT = Aws::String>
  void SetRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    m_retrievalInstructionIdHasBeenSet = true;
    m_retrievalInstructionId = std::forward<RetrievalInstructionIdT>(value);
  }
  template <typename RetrievalInstructionIdT = Aws::String>
  CreateRetrievalInstructionVersionResult& WithRetrievalInstructionId(RetrievalInstructionIdT&& value) {
    SetRetrievalInstructionId(std::forward<RetrievalInstructionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the retrieval instruction. Versions do not have their own ARN.</p>
   */
  inline const Aws::String& GetRetrievalInstructionArn() const { return m_retrievalInstructionArn; }
  template <typename RetrievalInstructionArnT = Aws::String>
  void SetRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
    m_retrievalInstructionArnHasBeenSet = true;
    m_retrievalInstructionArn = std::forward<RetrievalInstructionArnT>(value);
  }
  template <typename RetrievalInstructionArnT = Aws::String>
  CreateRetrievalInstructionVersionResult& WithRetrievalInstructionArn(RetrievalInstructionArnT&& value) {
    SetRetrievalInstructionArn(std::forward<RetrievalInstructionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the version created. Versions are numbered from 1 and allocated
   * monotonically; a number is never reused, even after the version is deleted.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CreateRetrievalInstructionVersionResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateRetrievalInstructionVersionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of this version, when one was supplied.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRetrievalInstructionVersionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  CreateRetrievalInstructionVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_retrievalInstructionId;

  Aws::String m_retrievalInstructionArn;

  Aws::String m_version;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_retrievalInstructionIdHasBeenSet = false;
  bool m_retrievalInstructionArnHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
