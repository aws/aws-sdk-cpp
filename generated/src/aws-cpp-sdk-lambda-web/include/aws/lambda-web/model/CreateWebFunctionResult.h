/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/FunctionEndpointSummary.h>
#include <aws/lambda-web/model/FunctionRevisionSummary.h>
#include <aws/lambda-web/model/FunctionState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {
/**
 * <p>Contains details about the created web function.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CreateWebFunctionResponse">AWS
 * API Reference</a></p>
 */
class CreateWebFunctionResult {
 public:
  AWS_LAMBDAWEB_API CreateWebFunctionResult() = default;
  AWS_LAMBDAWEB_API CreateWebFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAWEB_API CreateWebFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the web function.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  CreateWebFunctionResult& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web function.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  CreateWebFunctionResult& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the web function.</p>
   */
  inline FunctionState GetState() const { return m_state; }
  inline void SetState(FunctionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateWebFunctionResult& WithState(FunctionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the web function.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  CreateWebFunctionResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the web function was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateWebFunctionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the web function was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateWebFunctionResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the initial revision created with the web function.</p>
   */
  inline const FunctionRevisionSummary& GetRevision() const { return m_revision; }
  template <typename RevisionT = FunctionRevisionSummary>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = FunctionRevisionSummary>
  CreateWebFunctionResult& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the initial endpoint created with the web function.</p>
   */
  inline const FunctionEndpointSummary& GetEndpoint() const { return m_endpoint; }
  template <typename EndpointT = FunctionEndpointSummary>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = FunctionEndpointSummary>
  CreateWebFunctionResult& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values associated with the web function.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateWebFunctionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateWebFunctionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreateWebFunctionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_functionName;

  Aws::String m_functionArn;

  FunctionState m_state{FunctionState::NOT_SET};

  Aws::String m_stateReason;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  FunctionRevisionSummary m_revision;

  FunctionEndpointSummary m_endpoint;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_functionNameHasBeenSet = false;
  bool m_functionArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
