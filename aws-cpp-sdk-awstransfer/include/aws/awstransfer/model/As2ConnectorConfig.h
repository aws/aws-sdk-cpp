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
   * <p>Contains the details for a connector object. The connector object is used for
   * AS2 outbound processes, to connect the Transfer Family customer with the trading
   * partner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/As2ConnectorConfig">AWS
   * API Reference</a></p>
   */
  class As2ConnectorConfig
  {
  public:
    AWS_TRANSFER_API As2ConnectorConfig();
    AWS_TRANSFER_API As2ConnectorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API As2ConnectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline const Aws::String& GetLocalProfileId() const{ return m_localProfileId; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(const Aws::String& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = value; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(Aws::String&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::move(value); }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(const char* value) { m_localProfileIdHasBeenSet = true; m_localProfileId.assign(value); }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline As2ConnectorConfig& WithLocalProfileId(const Aws::String& value) { SetLocalProfileId(value); return *this;}

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline As2ConnectorConfig& WithLocalProfileId(Aws::String&& value) { SetLocalProfileId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline As2ConnectorConfig& WithLocalProfileId(const char* value) { SetLocalProfileId(value); return *this;}


    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const{ return m_partnerProfileId; }

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline void SetPartnerProfileId(const Aws::String& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = value; }

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline void SetPartnerProfileId(Aws::String&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::move(value); }

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline void SetPartnerProfileId(const char* value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId.assign(value); }

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline As2ConnectorConfig& WithPartnerProfileId(const Aws::String& value) { SetPartnerProfileId(value); return *this;}

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline As2ConnectorConfig& WithPartnerProfileId(Aws::String&& value) { SetPartnerProfileId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the partner profile for the connector.</p>
     */
    inline As2ConnectorConfig& WithPartnerProfileId(const char* value) { SetPartnerProfileId(value); return *this;}


    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline const Aws::String& GetMessageSubject() const{ return m_messageSubject; }

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline bool MessageSubjectHasBeenSet() const { return m_messageSubjectHasBeenSet; }

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline void SetMessageSubject(const Aws::String& value) { m_messageSubjectHasBeenSet = true; m_messageSubject = value; }

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline void SetMessageSubject(Aws::String&& value) { m_messageSubjectHasBeenSet = true; m_messageSubject = std::move(value); }

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline void SetMessageSubject(const char* value) { m_messageSubjectHasBeenSet = true; m_messageSubject.assign(value); }

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline As2ConnectorConfig& WithMessageSubject(const Aws::String& value) { SetMessageSubject(value); return *this;}

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline As2ConnectorConfig& WithMessageSubject(Aws::String&& value) { SetMessageSubject(std::move(value)); return *this;}

    /**
     * <p>Used as the <code>Subject</code> HTTP header attribute in AS2 messages that
     * are being sent with the connector.</p>
     */
    inline As2ConnectorConfig& WithMessageSubject(const char* value) { SetMessageSubject(value); return *this;}


    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline const CompressionEnum& GetCompression() const{ return m_compression; }

    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }

    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline void SetCompression(const CompressionEnum& value) { m_compressionHasBeenSet = true; m_compression = value; }

    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline void SetCompression(CompressionEnum&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }

    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline As2ConnectorConfig& WithCompression(const CompressionEnum& value) { SetCompression(value); return *this;}

    /**
     * <p>Specifies whether the AS2 file is compressed.</p>
     */
    inline As2ConnectorConfig& WithCompression(CompressionEnum&& value) { SetCompression(std::move(value)); return *this;}


    /**
     * <p>The algorithm that is used to encrypt the file.</p>
     */
    inline const EncryptionAlg& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }

    /**
     * <p>The algorithm that is used to encrypt the file.</p>
     */
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that is used to encrypt the file.</p>
     */
    inline void SetEncryptionAlgorithm(const EncryptionAlg& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }

    /**
     * <p>The algorithm that is used to encrypt the file.</p>
     */
    inline void SetEncryptionAlgorithm(EncryptionAlg&& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that is used to encrypt the file.</p>
     */
    inline As2ConnectorConfig& WithEncryptionAlgorithm(const EncryptionAlg& value) { SetEncryptionAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that is used to encrypt the file.</p>
     */
    inline As2ConnectorConfig& WithEncryptionAlgorithm(EncryptionAlg&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline const SigningAlg& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlg& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline void SetSigningAlgorithm(SigningAlg&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline As2ConnectorConfig& WithSigningAlgorithm(const SigningAlg& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that is used to sign the AS2 messages sent with the
     * connector.</p>
     */
    inline As2ConnectorConfig& WithSigningAlgorithm(SigningAlg&& value) { SetSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlogorithm</code> is used.</p>
     * 
     */
    inline const MdnSigningAlg& GetMdnSigningAlgorithm() const{ return m_mdnSigningAlgorithm; }

    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlogorithm</code> is used.</p>
     * 
     */
    inline bool MdnSigningAlgorithmHasBeenSet() const { return m_mdnSigningAlgorithmHasBeenSet; }

    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlogorithm</code> is used.</p>
     * 
     */
    inline void SetMdnSigningAlgorithm(const MdnSigningAlg& value) { m_mdnSigningAlgorithmHasBeenSet = true; m_mdnSigningAlgorithm = value; }

    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlogorithm</code> is used.</p>
     * 
     */
    inline void SetMdnSigningAlgorithm(MdnSigningAlg&& value) { m_mdnSigningAlgorithmHasBeenSet = true; m_mdnSigningAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlogorithm</code> is used.</p>
     * 
     */
    inline As2ConnectorConfig& WithMdnSigningAlgorithm(const MdnSigningAlg& value) { SetMdnSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm for the MDN response.</p>  <p>If set to DEFAULT
     * (or not set at all), the value for <code>SigningAlogorithm</code> is used.</p>
     * 
     */
    inline As2ConnectorConfig& WithMdnSigningAlgorithm(MdnSigningAlg&& value) { SetMdnSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Used for outbound requests (from an Transfer Family server to a partner AS2
     * server) to determine whether the partner response for transfers is synchronous
     * or asynchronous. Specify either of the following values:</p> <ul> <li> <p>
     * <code>SYNC</code>: The system expects a synchronous MDN response, confirming
     * that the file was transferred successfully (or not).</p> </li> <li> <p>
     * <code>NONE</code>: Specifies that no MDN response is required.</p> </li> </ul>
     */
    inline const MdnResponse& GetMdnResponse() const{ return m_mdnResponse; }

    /**
     * <p>Used for outbound requests (from an Transfer Family server to a partner AS2
     * server) to determine whether the partner response for transfers is synchronous
     * or asynchronous. Specify either of the following values:</p> <ul> <li> <p>
     * <code>SYNC</code>: The system expects a synchronous MDN response, confirming
     * that the file was transferred successfully (or not).</p> </li> <li> <p>
     * <code>NONE</code>: Specifies that no MDN response is required.</p> </li> </ul>
     */
    inline bool MdnResponseHasBeenSet() const { return m_mdnResponseHasBeenSet; }

    /**
     * <p>Used for outbound requests (from an Transfer Family server to a partner AS2
     * server) to determine whether the partner response for transfers is synchronous
     * or asynchronous. Specify either of the following values:</p> <ul> <li> <p>
     * <code>SYNC</code>: The system expects a synchronous MDN response, confirming
     * that the file was transferred successfully (or not).</p> </li> <li> <p>
     * <code>NONE</code>: Specifies that no MDN response is required.</p> </li> </ul>
     */
    inline void SetMdnResponse(const MdnResponse& value) { m_mdnResponseHasBeenSet = true; m_mdnResponse = value; }

    /**
     * <p>Used for outbound requests (from an Transfer Family server to a partner AS2
     * server) to determine whether the partner response for transfers is synchronous
     * or asynchronous. Specify either of the following values:</p> <ul> <li> <p>
     * <code>SYNC</code>: The system expects a synchronous MDN response, confirming
     * that the file was transferred successfully (or not).</p> </li> <li> <p>
     * <code>NONE</code>: Specifies that no MDN response is required.</p> </li> </ul>
     */
    inline void SetMdnResponse(MdnResponse&& value) { m_mdnResponseHasBeenSet = true; m_mdnResponse = std::move(value); }

    /**
     * <p>Used for outbound requests (from an Transfer Family server to a partner AS2
     * server) to determine whether the partner response for transfers is synchronous
     * or asynchronous. Specify either of the following values:</p> <ul> <li> <p>
     * <code>SYNC</code>: The system expects a synchronous MDN response, confirming
     * that the file was transferred successfully (or not).</p> </li> <li> <p>
     * <code>NONE</code>: Specifies that no MDN response is required.</p> </li> </ul>
     */
    inline As2ConnectorConfig& WithMdnResponse(const MdnResponse& value) { SetMdnResponse(value); return *this;}

    /**
     * <p>Used for outbound requests (from an Transfer Family server to a partner AS2
     * server) to determine whether the partner response for transfers is synchronous
     * or asynchronous. Specify either of the following values:</p> <ul> <li> <p>
     * <code>SYNC</code>: The system expects a synchronous MDN response, confirming
     * that the file was transferred successfully (or not).</p> </li> <li> <p>
     * <code>NONE</code>: Specifies that no MDN response is required.</p> </li> </ul>
     */
    inline As2ConnectorConfig& WithMdnResponse(MdnResponse&& value) { SetMdnResponse(std::move(value)); return *this;}

  private:

    Aws::String m_localProfileId;
    bool m_localProfileIdHasBeenSet = false;

    Aws::String m_partnerProfileId;
    bool m_partnerProfileIdHasBeenSet = false;

    Aws::String m_messageSubject;
    bool m_messageSubjectHasBeenSet = false;

    CompressionEnum m_compression;
    bool m_compressionHasBeenSet = false;

    EncryptionAlg m_encryptionAlgorithm;
    bool m_encryptionAlgorithmHasBeenSet = false;

    SigningAlg m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet = false;

    MdnSigningAlg m_mdnSigningAlgorithm;
    bool m_mdnSigningAlgorithmHasBeenSet = false;

    MdnResponse m_mdnResponse;
    bool m_mdnResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
