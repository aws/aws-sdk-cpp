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
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/MethodName.h>
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
namespace MediaStore
{
namespace Model
{

  /**
   * <p>A rule for a CORS policy. You can add up to 100 rules to a CORS policy. If
   * more than one rule applies, the service uses the first applicable rule
   * listed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-2017-09-01/CorsRule">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIASTORE_API CorsRule
  {
  public:
    CorsRule();
    CorsRule(Aws::Utils::Json::JsonView jsonValue);
    CorsRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const{ return m_allowedOrigins; }

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline void SetAllowedOrigins(const Aws::Vector<Aws::String>& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = value; }

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline void SetAllowedOrigins(Aws::Vector<Aws::String>&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins = std::move(value); }

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline CorsRule& WithAllowedOrigins(const Aws::Vector<Aws::String>& value) { SetAllowedOrigins(value); return *this;}

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline CorsRule& WithAllowedOrigins(Aws::Vector<Aws::String>&& value) { SetAllowedOrigins(std::move(value)); return *this;}

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline CorsRule& AddAllowedOrigins(const Aws::String& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(value); return *this; }

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline CorsRule& AddAllowedOrigins(Aws::String&& value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more response headers that you want users to be able to access from
     * their applications (for example, from a JavaScript <code>XMLHttpRequest</code>
     * object).</p> <p>Each CORS rule must have at least one
     * <code>AllowedOrigins</code> element. The string value can include only one
     * wildcard character (*), for example, http:// *.example.com. Additionally, you can
     * specify only one wildcard character to allow cross-origin access for all
     * origins.</p>
     */
    inline CorsRule& AddAllowedOrigins(const char* value) { m_allowedOriginsHasBeenSet = true; m_allowedOrigins.push_back(value); return *this; }


    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline const Aws::Vector<MethodName>& GetAllowedMethods() const{ return m_allowedMethods; }

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline void SetAllowedMethods(const Aws::Vector<MethodName>& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = value; }

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline void SetAllowedMethods(Aws::Vector<MethodName>&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods = std::move(value); }

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline CorsRule& WithAllowedMethods(const Aws::Vector<MethodName>& value) { SetAllowedMethods(value); return *this;}

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline CorsRule& WithAllowedMethods(Aws::Vector<MethodName>&& value) { SetAllowedMethods(std::move(value)); return *this;}

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline CorsRule& AddAllowedMethods(const MethodName& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods.push_back(value); return *this; }

    /**
     * <p>Identifies an HTTP method that the origin that is specified in the rule is
     * allowed to execute.</p> <p>Each CORS rule must contain at least one
     * <code>AllowedMethods</code> and one <code>AllowedOrigins</code> element.</p>
     */
    inline CorsRule& AddAllowedMethods(MethodName&& value) { m_allowedMethodsHasBeenSet = true; m_allowedMethods.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedHeaders() const{ return m_allowedHeaders; }

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline bool AllowedHeadersHasBeenSet() const { return m_allowedHeadersHasBeenSet; }

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline void SetAllowedHeaders(const Aws::Vector<Aws::String>& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders = value; }

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline void SetAllowedHeaders(Aws::Vector<Aws::String>&& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders = std::move(value); }

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline CorsRule& WithAllowedHeaders(const Aws::Vector<Aws::String>& value) { SetAllowedHeaders(value); return *this;}

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline CorsRule& WithAllowedHeaders(Aws::Vector<Aws::String>&& value) { SetAllowedHeaders(std::move(value)); return *this;}

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline CorsRule& AddAllowedHeaders(const Aws::String& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders.push_back(value); return *this; }

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline CorsRule& AddAllowedHeaders(Aws::String&& value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies which headers are allowed in a preflight <code>OPTIONS</code>
     * request through the <code>Access-Control-Request-Headers</code> header. Each
     * header name that is specified in <code>Access-Control-Request-Headers</code>
     * must have a corresponding entry in the rule. Only the headers that were
     * requested are sent back. </p> <p>This element can contain only one wildcard
     * character (*).</p>
     */
    inline CorsRule& AddAllowedHeaders(const char* value) { m_allowedHeadersHasBeenSet = true; m_allowedHeaders.push_back(value); return *this; }


    /**
     * <p>The time in seconds that your browser caches the preflight response for the
     * specified resource.</p> <p>A CORS rule can have only one
     * <code>MaxAgeSeconds</code> element.</p>
     */
    inline int GetMaxAgeSeconds() const{ return m_maxAgeSeconds; }

    /**
     * <p>The time in seconds that your browser caches the preflight response for the
     * specified resource.</p> <p>A CORS rule can have only one
     * <code>MaxAgeSeconds</code> element.</p>
     */
    inline bool MaxAgeSecondsHasBeenSet() const { return m_maxAgeSecondsHasBeenSet; }

    /**
     * <p>The time in seconds that your browser caches the preflight response for the
     * specified resource.</p> <p>A CORS rule can have only one
     * <code>MaxAgeSeconds</code> element.</p>
     */
    inline void SetMaxAgeSeconds(int value) { m_maxAgeSecondsHasBeenSet = true; m_maxAgeSeconds = value; }

    /**
     * <p>The time in seconds that your browser caches the preflight response for the
     * specified resource.</p> <p>A CORS rule can have only one
     * <code>MaxAgeSeconds</code> element.</p>
     */
    inline CorsRule& WithMaxAgeSeconds(int value) { SetMaxAgeSeconds(value); return *this;}


    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExposeHeaders() const{ return m_exposeHeaders; }

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline void SetExposeHeaders(const Aws::Vector<Aws::String>& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = value; }

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline void SetExposeHeaders(Aws::Vector<Aws::String>&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders = std::move(value); }

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline CorsRule& WithExposeHeaders(const Aws::Vector<Aws::String>& value) { SetExposeHeaders(value); return *this;}

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline CorsRule& WithExposeHeaders(Aws::Vector<Aws::String>&& value) { SetExposeHeaders(std::move(value)); return *this;}

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline CorsRule& AddExposeHeaders(const Aws::String& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline CorsRule& AddExposeHeaders(Aws::String&& value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more headers in the response that you want users to be able to access
     * from their applications (for example, from a JavaScript
     * <code>XMLHttpRequest</code> object).</p> <p>This element is optional for each
     * rule.</p>
     */
    inline CorsRule& AddExposeHeaders(const char* value) { m_exposeHeadersHasBeenSet = true; m_exposeHeaders.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowedOrigins;
    bool m_allowedOriginsHasBeenSet;

    Aws::Vector<MethodName> m_allowedMethods;
    bool m_allowedMethodsHasBeenSet;

    Aws::Vector<Aws::String> m_allowedHeaders;
    bool m_allowedHeadersHasBeenSet;

    int m_maxAgeSeconds;
    bool m_maxAgeSecondsHasBeenSet;

    Aws::Vector<Aws::String> m_exposeHeaders;
    bool m_exposeHeadersHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
