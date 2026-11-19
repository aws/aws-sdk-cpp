/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/WebhookHmacAlgorithm.h>
#include <aws/eventbridgev2/model/WebhookHmacEncoding.h>
#include <aws/eventbridgev2/model/WebhookSecretEncoding.h>
#include <aws/eventbridgev2/model/WebhookSignedMessageComposition.h>

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
 * <p>The provider signs each request with a hash-based message authentication code
 * (HMAC) of the secret. Amazon EventBridge accepts the request if any signature in
 * SignatureHttpHeader matches.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/WebhookHmacAuthConfiguration">AWS
 * API Reference</a></p>
 */
class WebhookHmacAuthConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API WebhookHmacAuthConfiguration() = default;
  AWS_EVENTBRIDGEV2_API WebhookHmacAuthConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API WebhookHmacAuthConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The hash algorithm the provider uses to compute the signature.</p>
   */
  inline WebhookHmacAlgorithm GetAlgorithm() const { return m_algorithm; }
  inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
  inline void SetAlgorithm(WebhookHmacAlgorithm value) {
    m_algorithmHasBeenSet = true;
    m_algorithm = value;
  }
  inline WebhookHmacAuthConfiguration& WithAlgorithm(WebhookHmacAlgorithm value) {
    SetAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the provider encodes the signature in the header.</p>
   */
  inline WebhookHmacEncoding GetEncoding() const { return m_encoding; }
  inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
  inline void SetEncoding(WebhookHmacEncoding value) {
    m_encodingHasBeenSet = true;
    m_encoding = value;
  }
  inline WebhookHmacAuthConfiguration& WithEncoding(WebhookHmacEncoding value) {
    SetEncoding(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the header that carries the signature, for example
   * X-Hub-Signature-256. When TimestampHttpHeader names the same header, Delimiter,
   * SignaturePrefix and TimestampPrefix are all required. Reserved names are
   * rejected, as described on StaticTokenAuthConfiguration's TokenHttpHeader.</p>
   */
  inline const Aws::String& GetSignatureHttpHeader() const { return m_signatureHttpHeader; }
  inline bool SignatureHttpHeaderHasBeenSet() const { return m_signatureHttpHeaderHasBeenSet; }
  template <typename SignatureHttpHeaderT = Aws::String>
  void SetSignatureHttpHeader(SignatureHttpHeaderT&& value) {
    m_signatureHttpHeaderHasBeenSet = true;
    m_signatureHttpHeader = std::forward<SignatureHttpHeaderT>(value);
  }
  template <typename SignatureHttpHeaderT = Aws::String>
  WebhookHmacAuthConfiguration& WithSignatureHttpHeader(SignatureHttpHeaderT&& value) {
    SetSignatureHttpHeader(std::forward<SignatureHttpHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text that precedes the signature in the header value, for example
   * sha256=. Required when TimestampHttpHeader is the same header as
   * SignatureHttpHeader.</p>
   */
  inline const Aws::String& GetSignaturePrefix() const { return m_signaturePrefix; }
  inline bool SignaturePrefixHasBeenSet() const { return m_signaturePrefixHasBeenSet; }
  template <typename SignaturePrefixT = Aws::String>
  void SetSignaturePrefix(SignaturePrefixT&& value) {
    m_signaturePrefixHasBeenSet = true;
    m_signaturePrefix = std::forward<SignaturePrefixT>(value);
  }
  template <typename SignaturePrefixT = Aws::String>
  WebhookHmacAuthConfiguration& WithSignaturePrefix(SignaturePrefixT&& value) {
    SetSignaturePrefix(std::forward<SignaturePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The separator between parts of the signature header value, for example a
   * comma for a header value of t=1727816400,v1=&lt;signature&gt;, or a space when
   * the header carries several signatures. Required when TimestampHttpHeader is the
   * same header as SignatureHttpHeader.</p>
   */
  inline const Aws::String& GetDelimiter() const { return m_delimiter; }
  inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
  template <typename DelimiterT = Aws::String>
  void SetDelimiter(DelimiterT&& value) {
    m_delimiterHasBeenSet = true;
    m_delimiter = std::forward<DelimiterT>(value);
  }
  template <typename DelimiterT = Aws::String>
  WebhookHmacAuthConfiguration& WithDelimiter(DelimiterT&& value) {
    SetDelimiter(std::forward<DelimiterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the header that carries the request timestamp. Required when
   * SignedMessageComposition is TIMESTAMP_DOT_BODY or
   * MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY, or when TimestampToleranceInSeconds is set.
   * Not allowed when SignedMessageComposition is BODY, because BODY does not sign
   * the timestamp. Reserved names are rejected, as described on
   * StaticTokenAuthConfiguration's TokenHttpHeader.</p>
   */
  inline const Aws::String& GetTimestampHttpHeader() const { return m_timestampHttpHeader; }
  inline bool TimestampHttpHeaderHasBeenSet() const { return m_timestampHttpHeaderHasBeenSet; }
  template <typename TimestampHttpHeaderT = Aws::String>
  void SetTimestampHttpHeader(TimestampHttpHeaderT&& value) {
    m_timestampHttpHeaderHasBeenSet = true;
    m_timestampHttpHeader = std::forward<TimestampHttpHeaderT>(value);
  }
  template <typename TimestampHttpHeaderT = Aws::String>
  WebhookHmacAuthConfiguration& WithTimestampHttpHeader(TimestampHttpHeaderT&& value) {
    SetTimestampHttpHeader(std::forward<TimestampHttpHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text that precedes the timestamp in the header value, for example t=.
   * Required when TimestampHttpHeader is the same header as SignatureHttpHeader.</p>
   */
  inline const Aws::String& GetTimestampPrefix() const { return m_timestampPrefix; }
  inline bool TimestampPrefixHasBeenSet() const { return m_timestampPrefixHasBeenSet; }
  template <typename TimestampPrefixT = Aws::String>
  void SetTimestampPrefix(TimestampPrefixT&& value) {
    m_timestampPrefixHasBeenSet = true;
    m_timestampPrefix = std::forward<TimestampPrefixT>(value);
  }
  template <typename TimestampPrefixT = Aws::String>
  WebhookHmacAuthConfiguration& WithTimestampPrefix(TimestampPrefixT&& value) {
    SetTimestampPrefix(std::forward<TimestampPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum difference, in seconds, allowed between the request timestamp and
   * the time EventBridge receives the request. Requests outside this window are
   * rejected. The default is 300 seconds. Requires TimestampHttpHeader. Not allowed
   * when SignedMessageComposition is BODY, because BODY does not sign the
   * timestamp.</p>
   */
  inline int64_t GetTimestampToleranceInSeconds() const { return m_timestampToleranceInSeconds; }
  inline bool TimestampToleranceInSecondsHasBeenSet() const { return m_timestampToleranceInSecondsHasBeenSet; }
  inline void SetTimestampToleranceInSeconds(int64_t value) {
    m_timestampToleranceInSecondsHasBeenSet = true;
    m_timestampToleranceInSeconds = value;
  }
  inline WebhookHmacAuthConfiguration& WithTimestampToleranceInSeconds(int64_t value) {
    SetTimestampToleranceInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the header that carries the message ID. Required when
   * SignedMessageComposition is MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY. Requests whose
   * message ID contains a period (.) are rejected. Reserved names are rejected, as
   * described on StaticTokenAuthConfiguration's TokenHttpHeader.</p>
   */
  inline const Aws::String& GetMessageIdHttpHeader() const { return m_messageIdHttpHeader; }
  inline bool MessageIdHttpHeaderHasBeenSet() const { return m_messageIdHttpHeaderHasBeenSet; }
  template <typename MessageIdHttpHeaderT = Aws::String>
  void SetMessageIdHttpHeader(MessageIdHttpHeaderT&& value) {
    m_messageIdHttpHeaderHasBeenSet = true;
    m_messageIdHttpHeader = std::forward<MessageIdHttpHeaderT>(value);
  }
  template <typename MessageIdHttpHeaderT = Aws::String>
  WebhookHmacAuthConfiguration& WithMessageIdHttpHeader(MessageIdHttpHeaderT&& value) {
    SetMessageIdHttpHeader(std::forward<MessageIdHttpHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the provider assembles the message it signs from the request.</p> <ul>
   * <li> <p>BODY - The request body alone. BODY provides no replay protection.</p>
   * </li> <li> <p>TIMESTAMP_DOT_BODY - &lt;timestamp&gt;.&lt;body&gt;. Requires
   * TimestampHttpHeader.</p> </li> <li> <p>MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY -
   * &lt;messageId&gt;.&lt;timestamp&gt;.&lt;body&gt;, as in the Standard Webhooks
   * specification. Requires TimestampHttpHeader and MessageIdHttpHeader.</p> </li>
   * </ul>
   */
  inline WebhookSignedMessageComposition GetSignedMessageComposition() const { return m_signedMessageComposition; }
  inline bool SignedMessageCompositionHasBeenSet() const { return m_signedMessageCompositionHasBeenSet; }
  inline void SetSignedMessageComposition(WebhookSignedMessageComposition value) {
    m_signedMessageCompositionHasBeenSet = true;
    m_signedMessageComposition = value;
  }
  inline WebhookHmacAuthConfiguration& WithSignedMessageComposition(WebhookSignedMessageComposition value) {
    SetSignedMessageComposition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing key shared with the provider. If you omit it, EventBridge
   * generates one. EventBridge stores the key only in AWS Secrets Manager and never
   * returns it, including from DescribeEventSource. The key must be 16 to 512 bytes;
   * with BASE64 SecretEncoding, this is measured after decoding.</p>
   */
  inline const Aws::String& GetSecretValue() const { return m_secretValue; }
  inline bool SecretValueHasBeenSet() const { return m_secretValueHasBeenSet; }
  template <typename SecretValueT = Aws::String>
  void SetSecretValue(SecretValueT&& value) {
    m_secretValueHasBeenSet = true;
    m_secretValue = std::forward<SecretValueT>(value);
  }
  template <typename SecretValueT = Aws::String>
  WebhookHmacAuthConfiguration& WithSecretValue(SecretValueT&& value) {
    SetSecretValue(std::forward<SecretValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the secret is encoded. RAW uses the secret's characters as the signing
   * key. BASE64 decodes the secret first, as providers that follow the Standard
   * Webhooks specification require. The default is RAW.</p>
   */
  inline WebhookSecretEncoding GetSecretEncoding() const { return m_secretEncoding; }
  inline bool SecretEncodingHasBeenSet() const { return m_secretEncodingHasBeenSet; }
  inline void SetSecretEncoding(WebhookSecretEncoding value) {
    m_secretEncodingHasBeenSet = true;
    m_secretEncoding = value;
  }
  inline WebhookHmacAuthConfiguration& WithSecretEncoding(WebhookSecretEncoding value) {
    SetSecretEncoding(value);
    return *this;
  }
  ///@}
 private:
  WebhookHmacAlgorithm m_algorithm{WebhookHmacAlgorithm::NOT_SET};

  WebhookHmacEncoding m_encoding{WebhookHmacEncoding::NOT_SET};

  Aws::String m_signatureHttpHeader;

  Aws::String m_signaturePrefix;

  Aws::String m_delimiter;

  Aws::String m_timestampHttpHeader;

  Aws::String m_timestampPrefix;

  int64_t m_timestampToleranceInSeconds{0};

  Aws::String m_messageIdHttpHeader;

  WebhookSignedMessageComposition m_signedMessageComposition{WebhookSignedMessageComposition::NOT_SET};

  Aws::String m_secretValue;

  WebhookSecretEncoding m_secretEncoding{WebhookSecretEncoding::NOT_SET};
  bool m_algorithmHasBeenSet = false;
  bool m_encodingHasBeenSet = false;
  bool m_signatureHttpHeaderHasBeenSet = false;
  bool m_signaturePrefixHasBeenSet = false;
  bool m_delimiterHasBeenSet = false;
  bool m_timestampHttpHeaderHasBeenSet = false;
  bool m_timestampPrefixHasBeenSet = false;
  bool m_timestampToleranceInSecondsHasBeenSet = false;
  bool m_messageIdHttpHeaderHasBeenSet = false;
  bool m_signedMessageCompositionHasBeenSet = false;
  bool m_secretValueHasBeenSet = false;
  bool m_secretEncodingHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
