﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/XssMatchTuple.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAF
{
namespace Model
{

  /**
   * <p>A complex type that contains <code>XssMatchTuple</code> objects, which
   * specify the parts of web requests that you want AWS WAF to inspect for
   * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
   * name of the header. If a <code>XssMatchSet</code> contains more than one
   * <code>XssMatchTuple</code> object, a request needs to include cross-site
   * scripting attacks in only one of the specified parts of the request to be
   * considered a match.</p>
   */
  class AWS_WAF_API XssMatchSet
  {
  public:
    XssMatchSet();
    XssMatchSet(const Aws::Utils::Json::JsonValue& jsonValue);
    XssMatchSet& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const{ return m_xssMatchSetId; }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const Aws::String& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(Aws::String&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline void SetXssMatchSetId(const char* value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId.assign(value); }

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSet& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSet& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSet& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSet& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSet& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline const Aws::Vector<XssMatchTuple>& GetXssMatchTuples() const{ return m_xssMatchTuples; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline void SetXssMatchTuples(const Aws::Vector<XssMatchTuple>& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples = value; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline void SetXssMatchTuples(Aws::Vector<XssMatchTuple>&& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples = value; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& WithXssMatchTuples(const Aws::Vector<XssMatchTuple>& value) { SetXssMatchTuples(value); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& WithXssMatchTuples(Aws::Vector<XssMatchTuple>&& value) { SetXssMatchTuples(value); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& AddXssMatchTuples(const XssMatchTuple& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples.push_back(value); return *this; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& AddXssMatchTuples(XssMatchTuple&& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples.push_back(value); return *this; }

  private:
    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<XssMatchTuple> m_xssMatchTuples;
    bool m_xssMatchTuplesHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
