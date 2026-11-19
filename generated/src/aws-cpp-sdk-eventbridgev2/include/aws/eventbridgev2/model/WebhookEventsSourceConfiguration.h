/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/LogConfiguration.h>
#include <aws/eventbridgev2/model/WebhookAuthConfiguration.h>
#include <aws/eventbridgev2/model/WebhookDeduplicationConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Configuration for receiving events from an external provider, such as a SaaS
 * application, that sends them as HTTPS POST requests to a webhook URL. The
 * provider authenticates with an HTTP scheme instead of AWS
 * credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookEventsSourceConfiguration">AWS
 * API Reference</a></p>
 */
class WebhookEventsSourceConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API WebhookEventsSourceConfiguration() = default;
  AWS_EVENTBRIDGEV2_API WebhookEventsSourceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookEventsSourceConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>How the provider authenticates its requests. Exactly one authentication type
   * must be set, and it can't be changed after the EventSource is created.</p>
   */
  inline const WebhookAuthConfiguration& GetAuthConfiguration() const { return m_authConfiguration; }
  inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
  template <typename AuthConfigurationT = WebhookAuthConfiguration>
  void SetAuthConfiguration(AuthConfigurationT&& value) {
    m_authConfigurationHasBeenSet = true;
    m_authConfiguration = std::forward<AuthConfigurationT>(value);
  }
  template <typename AuthConfigurationT = WebhookAuthConfiguration>
  WebhookEventsSourceConfiguration& WithAuthConfiguration(AuthConfigurationT&& value) {
    SetAuthConfiguration(std::forward<AuthConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. The AWS KMS key that encrypts the EventSource's secret in AWS
   * Secrets Manager. Omit it to encrypt the secret with the AWS managed key
   * aws/secretsmanager. A key you supply must be an enabled customer managed key in
   * your account and Region. Changing it re-encrypts the secret under the new key.
   * The previous key can still decrypt the stored versions until the credential is
   * next rotated.</p>
   */
  inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
  inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
  template <typename KmsKeyIdentifierT = Aws::String>
  void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    m_kmsKeyIdentifierHasBeenSet = true;
    m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value);
  }
  template <typename KmsKeyIdentifierT = Aws::String>
  WebhookEventsSourceConfiguration& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role the service assumes to put the webhook's events on the event bus.
   * Must belong to the calling account.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  WebhookEventsSourceConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP request headers to add to each event's metadata, up to 20. Header
   * names are case-insensitive and can't repeat. Each header is added under its
   * lowercase name. Omit the list to add no headers. Headers that carry credentials
   * or that describe the network path, and the header that carries the static token,
   * can't be listed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetadataHttpHeaders() const { return m_metadataHttpHeaders; }
  inline bool MetadataHttpHeadersHasBeenSet() const { return m_metadataHttpHeadersHasBeenSet; }
  template <typename MetadataHttpHeadersT = Aws::Vector<Aws::String>>
  void SetMetadataHttpHeaders(MetadataHttpHeadersT&& value) {
    m_metadataHttpHeadersHasBeenSet = true;
    m_metadataHttpHeaders = std::forward<MetadataHttpHeadersT>(value);
  }
  template <typename MetadataHttpHeadersT = Aws::Vector<Aws::String>>
  WebhookEventsSourceConfiguration& WithMetadataHttpHeaders(MetadataHttpHeadersT&& value) {
    SetMetadataHttpHeaders(std::forward<MetadataHttpHeadersT>(value));
    return *this;
  }
  template <typename MetadataHttpHeadersT = Aws::String>
  WebhookEventsSourceConfiguration& AddMetadataHttpHeaders(MetadataHttpHeadersT&& value) {
    m_metadataHttpHeadersHasBeenSet = true;
    m_metadataHttpHeaders.emplace_back(std::forward<MetadataHttpHeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. Deduplicates this EventSource's events on the event bus. Omit it to
   * deduplicate nothing.</p>
   */
  inline const WebhookDeduplicationConfiguration& GetDeduplicationConfiguration() const { return m_deduplicationConfiguration; }
  inline bool DeduplicationConfigurationHasBeenSet() const { return m_deduplicationConfigurationHasBeenSet; }
  template <typename DeduplicationConfigurationT = WebhookDeduplicationConfiguration>
  void SetDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    m_deduplicationConfigurationHasBeenSet = true;
    m_deduplicationConfiguration = std::forward<DeduplicationConfigurationT>(value);
  }
  template <typename DeduplicationConfigurationT = WebhookDeduplicationConfiguration>
  WebhookEventsSourceConfiguration& WithDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    SetDeduplicationConfiguration(std::forward<DeduplicationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. Controls the log records EventBridge delivers for this
   * EventSource's webhook requests. Omit it to deliver no logs. Logs are delivered
   * to the destinations you configure with Amazon CloudWatch Logs vended log
   * delivery.</p>
   */
  inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
  inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
  template <typename LogConfigurationT = LogConfiguration>
  void SetLogConfiguration(LogConfigurationT&& value) {
    m_logConfigurationHasBeenSet = true;
    m_logConfiguration = std::forward<LogConfigurationT>(value);
  }
  template <typename LogConfigurationT = LogConfiguration>
  WebhookEventsSourceConfiguration& WithLogConfiguration(LogConfigurationT&& value) {
    SetLogConfiguration(std::forward<LogConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  WebhookAuthConfiguration m_authConfiguration;

  Aws::String m_kmsKeyIdentifier;

  Aws::String m_roleArn;

  Aws::Vector<Aws::String> m_metadataHttpHeaders;

  WebhookDeduplicationConfiguration m_deduplicationConfiguration;

  LogConfiguration m_logConfiguration;
  bool m_authConfigurationHasBeenSet = false;
  bool m_kmsKeyIdentifierHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_metadataHttpHeadersHasBeenSet = false;
  bool m_deduplicationConfigurationHasBeenSet = false;
  bool m_logConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
