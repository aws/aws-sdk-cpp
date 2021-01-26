/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A string repesenting the status of DNSSEC signing.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DNSSECStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API DNSSECStatus
  {
  public:
    DNSSECStatus();
    DNSSECStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    DNSSECStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline const Aws::String& GetServeSignature() const{ return m_serveSignature; }

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline bool ServeSignatureHasBeenSet() const { return m_serveSignatureHasBeenSet; }

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline void SetServeSignature(const Aws::String& value) { m_serveSignatureHasBeenSet = true; m_serveSignature = value; }

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline void SetServeSignature(Aws::String&& value) { m_serveSignatureHasBeenSet = true; m_serveSignature = std::move(value); }

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline void SetServeSignature(const char* value) { m_serveSignatureHasBeenSet = true; m_serveSignature.assign(value); }

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline DNSSECStatus& WithServeSignature(const Aws::String& value) { SetServeSignature(value); return *this;}

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline DNSSECStatus& WithServeSignature(Aws::String&& value) { SetServeSignature(std::move(value)); return *this;}

    /**
     * <p>Indicates your hosted zone signging status: <code>SIGNING</code>,
     * <code>NOT_SIGNING</code>, or <code>INTERNAL_FAILURE</code>. If the status is
     * <code>INTERNAL_FAILURE</code>, see <code>StatusMessage</code> for information
     * about steps that you can take to correct the problem.</p> <p>A status
     * <code>INTERNAL_FAILURE</code> means there was an error during a request. Before
     * you can continue to work with DNSSEC signing, including working with key signing
     * keys (KSKs), you must correct the problem by enabling or disabling DNSSEC
     * signing for the hosted zone.</p>
     */
    inline DNSSECStatus& WithServeSignature(const char* value) { SetServeSignature(value); return *this;}


    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline DNSSECStatus& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline DNSSECStatus& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message provided for the following DNSSEC signing status:
     * <code>INTERNAL_FAILURE</code>. The status message includes information about
     * what the problem might be and steps that you can take to correct the issue.</p>
     */
    inline DNSSECStatus& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_serveSignature;
    bool m_serveSignatureHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
