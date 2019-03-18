/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The HTTP header.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/HttpHeader">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API HttpHeader
  {
  public:
    HttpHeader();
    HttpHeader(Aws::Utils::Json::JsonView jsonValue);
    HttpHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The header name</p>
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * <p>The header name</p>
     */
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }

    /**
     * <p>The header name</p>
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * <p>The header name</p>
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * <p>The header name</p>
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * <p>The header name</p>
     */
    inline HttpHeader& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * <p>The header name</p>
     */
    inline HttpHeader& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * <p>The header name</p>
     */
    inline HttpHeader& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}


    /**
     * <p>The header value.</p>
     */
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }

    /**
     * <p>The header value.</p>
     */
    inline bool HeaderValueHasBeenSet() const { return m_headerValueHasBeenSet; }

    /**
     * <p>The header value.</p>
     */
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    /**
     * <p>The header value.</p>
     */
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::move(value); }

    /**
     * <p>The header value.</p>
     */
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }

    /**
     * <p>The header value.</p>
     */
    inline HttpHeader& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}

    /**
     * <p>The header value.</p>
     */
    inline HttpHeader& WithHeaderValue(Aws::String&& value) { SetHeaderValue(std::move(value)); return *this;}

    /**
     * <p>The header value.</p>
     */
    inline HttpHeader& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}

  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet;

    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
