/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A custom header for custom request and response handling. This is used in
   * <a>CustomResponse</a> and <a>CustomRequestHandling</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/CustomHTTPHeader">AWS
   * API Reference</a></p>
   */
  class CustomHTTPHeader
  {
  public:
    AWS_WAFV2_API CustomHTTPHeader();
    AWS_WAFV2_API CustomHTTPHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API CustomHTTPHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline CustomHTTPHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline CustomHTTPHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom header. </p> <p>For custom request header insertion,
     * when WAF inserts the header into the request, it prefixes this name
     * <code>x-amzn-waf-</code>, to avoid confusion with the headers that are already
     * in the request. For example, for the header name <code>sample</code>, WAF
     * inserts the header <code>x-amzn-waf-sample</code>.</p>
     */
    inline CustomHTTPHeader& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the custom header.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the custom header.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the custom header.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the custom header.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the custom header.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the custom header.</p>
     */
    inline CustomHTTPHeader& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the custom header.</p>
     */
    inline CustomHTTPHeader& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the custom header.</p>
     */
    inline CustomHTTPHeader& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
