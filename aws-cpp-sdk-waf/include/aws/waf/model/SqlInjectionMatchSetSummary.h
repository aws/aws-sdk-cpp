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
   * <p>The <code>Id</code> and <code>Name</code> of a
   * <code>SqlInjectionMatchSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SqlInjectionMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API SqlInjectionMatchSetSummary
  {
  public:
    SqlInjectionMatchSetSummary();
    SqlInjectionMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    SqlInjectionMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline const Aws::String& GetSqlInjectionMatchSetId() const{ return m_sqlInjectionMatchSetId; }

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline bool SqlInjectionMatchSetIdHasBeenSet() const { return m_sqlInjectionMatchSetIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(const Aws::String& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = value; }

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(Aws::String&& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline void SetSqlInjectionMatchSetId(const char* value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId.assign(value); }

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline SqlInjectionMatchSetSummary& WithSqlInjectionMatchSetId(const Aws::String& value) { SetSqlInjectionMatchSetId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline SqlInjectionMatchSetSummary& WithSqlInjectionMatchSetId(Aws::String&& value) { SetSqlInjectionMatchSetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline SqlInjectionMatchSetSummary& WithSqlInjectionMatchSetId(const char* value) { SetSqlInjectionMatchSetId(value); return *this;}


    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline SqlInjectionMatchSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline SqlInjectionMatchSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline SqlInjectionMatchSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_sqlInjectionMatchSetId;
    bool m_sqlInjectionMatchSetIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
