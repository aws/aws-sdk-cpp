/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/HttpAuthorization.h>
#include <aws/iot/model/HttpActionHeader.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Send data to an HTTPS endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/HttpAction">AWS API
   * Reference</a></p>
   */
  class HttpAction
  {
  public:
    AWS_IOT_API HttpAction();
    AWS_IOT_API HttpAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline HttpAction& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline HttpAction& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline HttpAction& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline const Aws::String& GetConfirmationUrl() const{ return m_confirmationUrl; }

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline bool ConfirmationUrlHasBeenSet() const { return m_confirmationUrlHasBeenSet; }

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline void SetConfirmationUrl(const Aws::String& value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl = value; }

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline void SetConfirmationUrl(Aws::String&& value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl = std::move(value); }

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline void SetConfirmationUrl(const char* value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl.assign(value); }

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline HttpAction& WithConfirmationUrl(const Aws::String& value) { SetConfirmationUrl(value); return *this;}

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline HttpAction& WithConfirmationUrl(Aws::String&& value) { SetConfirmationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline HttpAction& WithConfirmationUrl(const char* value) { SetConfirmationUrl(value); return *this;}


    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline const Aws::Vector<HttpActionHeader>& GetHeaders() const{ return m_headers; }

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline void SetHeaders(const Aws::Vector<HttpActionHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline void SetHeaders(Aws::Vector<HttpActionHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline HttpAction& WithHeaders(const Aws::Vector<HttpActionHeader>& value) { SetHeaders(value); return *this;}

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline HttpAction& WithHeaders(Aws::Vector<HttpActionHeader>&& value) { SetHeaders(std::move(value)); return *this;}

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline HttpAction& AddHeaders(const HttpActionHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }

    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline HttpAction& AddHeaders(HttpActionHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }


    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline const HttpAuthorization& GetAuth() const{ return m_auth; }

    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }

    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline void SetAuth(const HttpAuthorization& value) { m_authHasBeenSet = true; m_auth = value; }

    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline void SetAuth(HttpAuthorization&& value) { m_authHasBeenSet = true; m_auth = std::move(value); }

    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline HttpAction& WithAuth(const HttpAuthorization& value) { SetAuth(value); return *this;}

    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline HttpAction& WithAuth(HttpAuthorization&& value) { SetAuth(std::move(value)); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_confirmationUrl;
    bool m_confirmationUrlHasBeenSet = false;

    Aws::Vector<HttpActionHeader> m_headers;
    bool m_headersHasBeenSet = false;

    HttpAuthorization m_auth;
    bool m_authHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
