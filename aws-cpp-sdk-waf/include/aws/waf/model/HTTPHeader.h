/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
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
namespace WAF
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The response from a
   * <a>GetSampledRequests</a> request includes an <code>HTTPHeader</code> complex
   * type that appears as <code>Headers</code> in the response syntax.
   * <code>HTTPHeader</code> contains the names and values of all of the headers that
   * appear in one of the web requests that were returned by
   * <code>GetSampledRequests</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/HTTPHeader">AWS API
   * Reference</a></p>
   */
  class HTTPHeader
  {
  public:
    AWS_WAF_API HTTPHeader();
    AWS_WAF_API HTTPHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API HTTPHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline HTTPHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline HTTPHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of one of the headers in the sampled web request.</p>
     */
    inline HTTPHeader& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline HTTPHeader& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline HTTPHeader& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of one of the headers in the sampled web request.</p>
     */
    inline HTTPHeader& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
