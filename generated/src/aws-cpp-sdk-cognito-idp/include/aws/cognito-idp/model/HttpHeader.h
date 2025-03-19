/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The HTTP header in the <code>ContextData</code> parameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/HttpHeader">AWS
   * API Reference</a></p>
   */
  class HttpHeader
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API HttpHeader() = default;
    AWS_COGNITOIDENTITYPROVIDER_API HttpHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API HttpHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The header name.</p>
     */
    inline const Aws::String& GetHeaderName() const { return m_headerName; }
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }
    template<typename HeaderNameT = Aws::String>
    void SetHeaderName(HeaderNameT&& value) { m_headerNameHasBeenSet = true; m_headerName = std::forward<HeaderNameT>(value); }
    template<typename HeaderNameT = Aws::String>
    HttpHeader& WithHeaderName(HeaderNameT&& value) { SetHeaderName(std::forward<HeaderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The header value.</p>
     */
    inline const Aws::String& GetHeaderValue() const { return m_headerValue; }
    inline bool HeaderValueHasBeenSet() const { return m_headerValueHasBeenSet; }
    template<typename HeaderValueT = Aws::String>
    void SetHeaderValue(HeaderValueT&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::forward<HeaderValueT>(value); }
    template<typename HeaderValueT = Aws::String>
    HttpHeader& WithHeaderValue(HeaderValueT&& value) { SetHeaderValue(std::forward<HeaderValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
