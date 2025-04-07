/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/CompressionEnum.h>
#include <aws/awstransfer/model/EncryptionAlg.h>
#include <aws/awstransfer/model/SigningAlg.h>
#include <aws/awstransfer/model/MdnSigningAlg.h>
#include <aws/awstransfer/model/MdnResponse.h>
#include <aws/awstransfer/model/PreserveContentType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Contains the details for an AS2 connector object. The connector object is
   * used for AS2 outbound processes, to connect the Transfer Family customer with
   * the trading partner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/As2ConnectorConfig">AWS
   * API Reference</a></p>
   */
  class As2ConnectorConfig
  {
  public:
    AWS_TRANSFER_API As2ConnectorConfig() = default;
    AWS_TRANSFER_API As2ConnectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API As2ConnectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline const Aws::String& GetLocalProfileId() const { return m_localProfileId; }
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }
    template<typename LocalProfileIdT = Aws::String>
    void SetLocalProfileId(LocalProfileIdT&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::forward<LocalProfileIdT>(value); }
    template<typename LocalProfileIdT = Aws::String>
    As2ConnectorConfig& WithLocalProfileId(LocalProfileIdT&& value) { SetLocalProfileId(std::forward<LocalProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const { return m_partnerProfileId; }
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }
    template<typename PartnerProfileIdT = Aws::String>
    void SetPartnerProfileId(PartnerProfileIdT&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::forward<PartnerProfileIdT>(value); }
    template<typename PartnerProfileIdT = Aws::String>
    As2ConnectorConfig& WithPartnerProfileId(PartnerProfileIdT&& value) { SetPartnerProfileId(std::forward<PartnerProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline const Aws::String& GetMessageSubject() const { return m_messageSubject; }
    inline bool MessageSubjectHasBeenSet() const { return m_messageSubjectHasBeenSet; }
    template<typename MessageSubjectT = Aws::String>
    void SetMessageSubject(MessageSubjectT&& value) { m_messageSubjectHasBeenSet = true; m_messageSubject = std::forward<MessageSubjectT>(value); }
    template<typename MessageSubjectT = Aws::String>
    As2ConnectorConfig& WithMessageSubject(MessageSubjectT&& value) { SetMessageSubject(std::forward<MessageSubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline CompressionEnum GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(CompressionEnum value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline As2ConnectorConfig& WithCompression(CompressionEnum value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that is used to encrypt the file.</p> <p>Note the
     * following:</p> <ul> <li> <p>Do not use the <code>DES_EDE3_CBC</code> algorithm
     * unless you must support a legacy client that requires it, as it is a weak
     * encryption algorithm.</p> </li> <li> <p>You can only specify <code>NONE</code>
     * if the URL for your connector uses HTTPS. Using HTTPS ensures that no traffic is
     * sent in clear text.</p> </li> </ul>
     */
    inline EncryptionAlg GetEncryptionAlgorithm() const { return m_encryptionAlgorithm; }
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }
    inline void SetEncryptionAlgorithm(EncryptionAlg value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }
    inline As2ConnectorConfig& WithEncryptionAlgorithm(EncryptionAlg value) { SetEncryptionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline SigningAlg GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
    inline void SetSigningAlgorithm(SigningAlg value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }
    inline As2ConnectorConfig& WithSigningAlgorithm(SigningAlg value) { SetSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlgorithm</code> is used.</p>
     * 
     */
    inline MdnSigningAlg GetMdnSigningAlgorithm() const { return m_mdnSigningAlgorithm; }
    inline bool MdnSigningAlgorithmHasBeenSet() const { return m_mdnSigningAlgorithmHasBeenSet; }
    inline void SetMdnSigningAlgorithm(MdnSigningAlg value) { m_mdnSigningAlgorithmHasBeenSet = true; m_mdnSigningAlgorithm = value; }
    inline As2ConnectorConfig& WithMdnSigningAlgorithm(MdnSigningAlg value) { SetMdnSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for outbound requests (from an Transfer Family connector to a partner
     * AS2 server) to determine whether the partner response for transfers is
     * synchronous or asynchronous. Specify either of the following values:</p> <ul>
     * <li> <p> <code>SYNC</code>: The system expects a synchronous MDN response,
     * confirming that the file was transferred successfully (or not).</p> </li> <li>
     * <p> <code>NONE</code>: Specifies that no MDN response is required.</p> </li>
     * </ul>
     */
    inline MdnResponse GetMdnResponse() const { return m_mdnResponse; }
    inline bool MdnResponseHasBeenSet() const { return m_mdnResponseHasBeenSet; }
    inline void SetMdnResponse(MdnResponse value) { m_mdnResponseHasBeenSet = true; m_mdnResponse = value; }
    inline As2ConnectorConfig& WithMdnResponse(MdnResponse value) { SetMdnResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides Basic authentication support to the AS2 Connectors API. To use Basic
     * authentication, you must provide the name or Amazon Resource Name (ARN) of a
     * secret in Secrets Manager.</p> <p>The default value for this parameter is
     * <code>null</code>, which indicates that Basic authentication is not enabled for
     * the connector.</p> <p>If the connector should use Basic authentication, the
     * secret needs to be in the following format:</p> <p> <code>{ "Username":
     * "user-name", "Password": "user-password" }</code> </p> <p>Replace
     * <code>user-name</code> and <code>user-password</code> with the credentials for
     * the actual user that is being authenticated.</p> <p>Note the following:</p> <ul>
     * <li> <p>You are storing these credentials in Secrets Manager, <i>not passing
     * them directly</i> into this API.</p> </li> <li> <p>If you are using the API,
     * SDKs, or CloudFormation to configure your connector, then you must create the
     * secret before you can enable Basic authentication. However, if you are using the
     * Amazon Web Services management console, you can have the system create the
     * secret for you.</p> </li> </ul> <p>If you have previously enabled Basic
     * authentication for a connector, you can disable it by using the
     * <code>UpdateConnector</code> API call. For example, if you are using the CLI,
     * you can run the following command to remove Basic authentication:</p> <p>
     * <code>update-connector --connector-id my-connector-id --as2-config
     * 'BasicAuthSecretId=""'</code> </p>
     */
    inline const Aws::String& GetBasicAuthSecretId() const { return m_basicAuthSecretId; }
    inline bool BasicAuthSecretIdHasBeenSet() const { return m_basicAuthSecretIdHasBeenSet; }
    template<typename BasicAuthSecretIdT = Aws::String>
    void SetBasicAuthSecretId(BasicAuthSecretIdT&& value) { m_basicAuthSecretIdHasBeenSet = true; m_basicAuthSecretId = std::forward<BasicAuthSecretIdT>(value); }
    template<typename BasicAuthSecretIdT = Aws::String>
    As2ConnectorConfig& WithBasicAuthSecretId(BasicAuthSecretIdT&& value) { SetBasicAuthSecretId(std::forward<BasicAuthSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to use the Amazon S3 <code>Content-Type</code> that is associated
     * with objects in S3 instead of having the content type mapped based on the file
     * extension. This parameter is enabled by default when you create an AS2 connector
     * from the console, but disabled by default when you create an AS2 connector by
     * calling the API directly.</p>
     */
    inline PreserveContentType GetPreserveContentType() const { return m_preserveContentType; }
    inline bool PreserveContentTypeHasBeenSet() const { return m_preserveContentTypeHasBeenSet; }
    inline void SetPreserveContentType(PreserveContentType value) { m_preserveContentTypeHasBeenSet = true; m_preserveContentType = value; }
    inline As2ConnectorConfig& WithPreserveContentType(PreserveContentType value) { SetPreserveContentType(value); return *this;}
    ///@}
  private:

    Aws::String m_localProfileId;
    bool m_localProfileIdHasBeenSet = false;

    Aws::String m_partnerProfileId;
    bool m_partnerProfileIdHasBeenSet = false;

    Aws::String m_messageSubject;
    bool m_messageSubjectHasBeenSet = false;

    CompressionEnum m_compression{CompressionEnum::NOT_SET};
    bool m_compressionHasBeenSet = false;

    EncryptionAlg m_encryptionAlgorithm{EncryptionAlg::NOT_SET};
    bool m_encryptionAlgorithmHasBeenSet = false;

    SigningAlg m_signingAlgorithm{SigningAlg::NOT_SET};
    bool m_signingAlgorithmHasBeenSet = false;

    MdnSigningAlg m_mdnSigningAlgorithm{MdnSigningAlg::NOT_SET};
    bool m_mdnSigningAlgorithmHasBeenSet = false;

    MdnResponse m_mdnResponse{MdnResponse::NOT_SET};
    bool m_mdnResponseHasBeenSet = false;

    Aws::String m_basicAuthSecretId;
    bool m_basicAuthSecretIdHasBeenSet = false;

    PreserveContentType m_preserveContentType{PreserveContentType::NOT_SET};
    bool m_preserveContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
