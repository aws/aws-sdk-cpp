﻿/**
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
    AWS_IOT_API HttpAction() = default;
    AWS_IOT_API HttpAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL. If substitution templates are used in the URL, you must
     * also specify a <code>confirmationUrl</code>. If this is a new destination, a new
     * <code>TopicRuleDestination</code> is created if possible.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    HttpAction& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to which IoT sends a confirmation message. The value of the
     * confirmation URL must be a prefix of the endpoint URL. If you do not specify a
     * confirmation URL IoT uses the endpoint URL as the confirmation URL. If you use
     * substitution templates in the confirmationUrl, you must create and enable topic
     * rule destinations that match each possible value of the substitution template
     * before traffic is allowed to your endpoint URL.</p>
     */
    inline const Aws::String& GetConfirmationUrl() const { return m_confirmationUrl; }
    inline bool ConfirmationUrlHasBeenSet() const { return m_confirmationUrlHasBeenSet; }
    template<typename ConfirmationUrlT = Aws::String>
    void SetConfirmationUrl(ConfirmationUrlT&& value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl = std::forward<ConfirmationUrlT>(value); }
    template<typename ConfirmationUrlT = Aws::String>
    HttpAction& WithConfirmationUrl(ConfirmationUrlT&& value) { SetConfirmationUrl(std::forward<ConfirmationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP headers to send with the message data.</p>
     */
    inline const Aws::Vector<HttpActionHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<HttpActionHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<HttpActionHeader>>
    HttpAction& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = HttpActionHeader>
    HttpAction& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication method to use when sending data to an HTTPS endpoint.</p>
     */
    inline const HttpAuthorization& GetAuth() const { return m_auth; }
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }
    template<typename AuthT = HttpAuthorization>
    void SetAuth(AuthT&& value) { m_authHasBeenSet = true; m_auth = std::forward<AuthT>(value); }
    template<typename AuthT = HttpAuthorization>
    HttpAction& WithAuth(AuthT&& value) { SetAuth(std::forward<AuthT>(value)); return *this;}
    ///@}
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
