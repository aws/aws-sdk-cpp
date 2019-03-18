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
   * <p>The <code>Id</code> and <code>Name</code> of a
   * <code>SizeConstraintSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SizeConstraintSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API SizeConstraintSetSummary
  {
  public:
    SizeConstraintSetSummary();
    SizeConstraintSetSummary(Aws::Utils::Json::JsonView jsonValue);
    SizeConstraintSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const{ return m_sizeConstraintSetId; }

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(const Aws::String& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = value; }

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(Aws::String&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(const char* value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId.assign(value); }

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline SizeConstraintSetSummary& WithSizeConstraintSetId(const Aws::String& value) { SetSizeConstraintSetId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline SizeConstraintSetSummary& WithSizeConstraintSetId(Aws::String&& value) { SetSizeConstraintSetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline SizeConstraintSetSummary& WithSizeConstraintSetId(const char* value) { SetSizeConstraintSetId(value); return *this;}


    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline SizeConstraintSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline SizeConstraintSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SizeConstraintSet</code>, if any.</p>
     */
    inline SizeConstraintSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_sizeConstraintSetId;
    bool m_sizeConstraintSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
