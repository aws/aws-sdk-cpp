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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>Contains the identifier and the name or description of the
   * <a>WebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/WebACLSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API WebACLSummary
  {
  public:
    WebACLSummary();
    WebACLSummary(Aws::Utils::Json::JsonView jsonValue);
    WebACLSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline WebACLSummary& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline WebACLSummary& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline WebACLSummary& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline WebACLSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline WebACLSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>WebACL</a>. You can't change the
     * name of a <code>WebACL</code> after you create it.</p>
     */
    inline WebACLSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
