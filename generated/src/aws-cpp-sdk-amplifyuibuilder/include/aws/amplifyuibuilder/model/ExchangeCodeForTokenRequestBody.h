﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration of a request to exchange an access code for a
   * token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExchangeCodeForTokenRequestBody">AWS
   * API Reference</a></p>
   */
  class ExchangeCodeForTokenRequestBody
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenRequestBody();
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenRequestBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ExchangeCodeForTokenRequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access code to send in the request.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline ExchangeCodeForTokenRequestBody& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline ExchangeCodeForTokenRequestBody& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline ExchangeCodeForTokenRequestBody& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the application that will receive the access code.</p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }
    inline ExchangeCodeForTokenRequestBody& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}
    inline ExchangeCodeForTokenRequestBody& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}
    inline ExchangeCodeForTokenRequestBody& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the client to request the token from.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline ExchangeCodeForTokenRequestBody& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline ExchangeCodeForTokenRequestBody& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline ExchangeCodeForTokenRequestBody& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
