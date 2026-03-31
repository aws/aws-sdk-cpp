/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Association.h>
#include <aws/devops-agent/model/GenericWebhook.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing the newly created association and optional webhook
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AssociateServiceOutput">AWS
 * API Reference</a></p>
 */
class AssociateServiceResult {
 public:
  AWS_DEVOPSAGENT_API AssociateServiceResult() = default;
  AWS_DEVOPSAGENT_API AssociateServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API AssociateServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Association& GetAssociation() const { return m_association; }
  template <typename AssociationT = Association>
  void SetAssociation(AssociationT&& value) {
    m_associationHasBeenSet = true;
    m_association = std::forward<AssociationT>(value);
  }
  template <typename AssociationT = Association>
  AssociateServiceResult& WithAssociation(AssociationT&& value) {
    SetAssociation(std::forward<AssociationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Generic webhook configuration</p>
   */
  inline const GenericWebhook& GetWebhook() const { return m_webhook; }
  template <typename WebhookT = GenericWebhook>
  void SetWebhook(WebhookT&& value) {
    m_webhookHasBeenSet = true;
    m_webhook = std::forward<WebhookT>(value);
  }
  template <typename WebhookT = GenericWebhook>
  AssociateServiceResult& WithWebhook(WebhookT&& value) {
    SetWebhook(std::forward<WebhookT>(value));
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
  AssociateServiceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Association m_association;

  GenericWebhook m_webhook;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_associationHasBeenSet = false;
  bool m_webhookHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
