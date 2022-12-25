/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The rules to redirect the request if the condition in <code>Condition</code>
   * is met.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketWebsiteConfigurationRoutingRuleRedirect">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketWebsiteConfigurationRoutingRuleRedirect
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleRedirect();
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleRedirect(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The host name to use in the redirect request.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline const Aws::String& GetHttpRedirectCode() const{ return m_httpRedirectCode; }

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline bool HttpRedirectCodeHasBeenSet() const { return m_httpRedirectCodeHasBeenSet; }

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline void SetHttpRedirectCode(const Aws::String& value) { m_httpRedirectCodeHasBeenSet = true; m_httpRedirectCode = value; }

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline void SetHttpRedirectCode(Aws::String&& value) { m_httpRedirectCodeHasBeenSet = true; m_httpRedirectCode = std::move(value); }

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline void SetHttpRedirectCode(const char* value) { m_httpRedirectCodeHasBeenSet = true; m_httpRedirectCode.assign(value); }

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHttpRedirectCode(const Aws::String& value) { SetHttpRedirectCode(value); return *this;}

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHttpRedirectCode(Aws::String&& value) { SetHttpRedirectCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP redirect code to use in the response.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithHttpRedirectCode(const char* value) { SetHttpRedirectCode(value); return *this;}


    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol to use to redirect the request. By default, uses the protocol
     * from the original request.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline const Aws::String& GetReplaceKeyPrefixWith() const{ return m_replaceKeyPrefixWith; }

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline bool ReplaceKeyPrefixWithHasBeenSet() const { return m_replaceKeyPrefixWithHasBeenSet; }

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline void SetReplaceKeyPrefixWith(const Aws::String& value) { m_replaceKeyPrefixWithHasBeenSet = true; m_replaceKeyPrefixWith = value; }

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline void SetReplaceKeyPrefixWith(Aws::String&& value) { m_replaceKeyPrefixWithHasBeenSet = true; m_replaceKeyPrefixWith = std::move(value); }

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline void SetReplaceKeyPrefixWith(const char* value) { m_replaceKeyPrefixWithHasBeenSet = true; m_replaceKeyPrefixWith.assign(value); }

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyPrefixWith(const Aws::String& value) { SetReplaceKeyPrefixWith(value); return *this;}

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyPrefixWith(Aws::String&& value) { SetReplaceKeyPrefixWith(std::move(value)); return *this;}

    /**
     * <p>The object key prefix to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyWith</code> is present.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyPrefixWith(const char* value) { SetReplaceKeyPrefixWith(value); return *this;}


    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline const Aws::String& GetReplaceKeyWith() const{ return m_replaceKeyWith; }

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline bool ReplaceKeyWithHasBeenSet() const { return m_replaceKeyWithHasBeenSet; }

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline void SetReplaceKeyWith(const Aws::String& value) { m_replaceKeyWithHasBeenSet = true; m_replaceKeyWith = value; }

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline void SetReplaceKeyWith(Aws::String&& value) { m_replaceKeyWithHasBeenSet = true; m_replaceKeyWith = std::move(value); }

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline void SetReplaceKeyWith(const char* value) { m_replaceKeyWithHasBeenSet = true; m_replaceKeyWith.assign(value); }

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyWith(const Aws::String& value) { SetReplaceKeyWith(value); return *this;}

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyWith(Aws::String&& value) { SetReplaceKeyWith(std::move(value)); return *this;}

    /**
     * <p>The specific object key to use in the redirect request.</p> <p>Cannot be
     * provided if <code>ReplaceKeyPrefixWith</code> is present.</p>
     */
    inline AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& WithReplaceKeyWith(const char* value) { SetReplaceKeyWith(value); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_httpRedirectCode;
    bool m_httpRedirectCodeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_replaceKeyPrefixWith;
    bool m_replaceKeyPrefixWithHasBeenSet = false;

    Aws::String m_replaceKeyWith;
    bool m_replaceKeyWithHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
