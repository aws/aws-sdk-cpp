/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/IntegrationIdentifier.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The request for deleting an integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteIntegrationInput">AWS
 * API Reference</a></p>
 */
class DeleteIntegrationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API DeleteIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteIntegration"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Identifies the integration to delete — exactly one of integrationId,
   * integrationArn, or integrationName.</p>
   */
  inline const IntegrationIdentifier& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = IntegrationIdentifier>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = IntegrationIdentifier>
  DeleteIntegrationRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  IntegrationIdentifier m_identifier;
  bool m_identifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
