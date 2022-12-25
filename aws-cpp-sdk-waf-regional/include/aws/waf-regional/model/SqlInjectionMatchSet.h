/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/SqlInjectionMatchTuple.h>
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
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>A complex type that
   * contains <code>SqlInjectionMatchTuple</code> objects, which specify the parts of
   * web requests that you want AWS WAF to inspect for snippets of malicious SQL code
   * and, if you want AWS WAF to inspect a header, the name of the header. If a
   * <code>SqlInjectionMatchSet</code> contains more than one
   * <code>SqlInjectionMatchTuple</code> object, a request needs to include snippets
   * of SQL code in only one of the specified parts of the request to be considered a
   * match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SqlInjectionMatchSet">AWS
   * API Reference</a></p>
   */
  class SqlInjectionMatchSet
  {
  public:
    AWS_WAFREGIONAL_API SqlInjectionMatchSet();
    AWS_WAFREGIONAL_API SqlInjectionMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API SqlInjectionMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SqlInjectionMatchSet& WithSqlInjectionMatchSetId(const Aws::String& value) { SetSqlInjectionMatchSetId(value); return *this;}

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
    inline SqlInjectionMatchSet& WithSqlInjectionMatchSetId(Aws::String&& value) { SetSqlInjectionMatchSetId(std::move(value)); return *this;}

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
    inline SqlInjectionMatchSet& WithSqlInjectionMatchSetId(const char* value) { SetSqlInjectionMatchSetId(value); return *this;}


    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline SqlInjectionMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline SqlInjectionMatchSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name, if any, of the <code>SqlInjectionMatchSet</code>.</p>
     */
    inline SqlInjectionMatchSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline const Aws::Vector<SqlInjectionMatchTuple>& GetSqlInjectionMatchTuples() const{ return m_sqlInjectionMatchTuples; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline bool SqlInjectionMatchTuplesHasBeenSet() const { return m_sqlInjectionMatchTuplesHasBeenSet; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline void SetSqlInjectionMatchTuples(const Aws::Vector<SqlInjectionMatchTuple>& value) { m_sqlInjectionMatchTuplesHasBeenSet = true; m_sqlInjectionMatchTuples = value; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline void SetSqlInjectionMatchTuples(Aws::Vector<SqlInjectionMatchTuple>&& value) { m_sqlInjectionMatchTuplesHasBeenSet = true; m_sqlInjectionMatchTuples = std::move(value); }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline SqlInjectionMatchSet& WithSqlInjectionMatchTuples(const Aws::Vector<SqlInjectionMatchTuple>& value) { SetSqlInjectionMatchTuples(value); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline SqlInjectionMatchSet& WithSqlInjectionMatchTuples(Aws::Vector<SqlInjectionMatchTuple>&& value) { SetSqlInjectionMatchTuples(std::move(value)); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline SqlInjectionMatchSet& AddSqlInjectionMatchTuples(const SqlInjectionMatchTuple& value) { m_sqlInjectionMatchTuplesHasBeenSet = true; m_sqlInjectionMatchTuples.push_back(value); return *this; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for snippets of
     * malicious SQL code.</p>
     */
    inline SqlInjectionMatchSet& AddSqlInjectionMatchTuples(SqlInjectionMatchTuple&& value) { m_sqlInjectionMatchTuplesHasBeenSet = true; m_sqlInjectionMatchTuples.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sqlInjectionMatchSetId;
    bool m_sqlInjectionMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SqlInjectionMatchTuple> m_sqlInjectionMatchTuples;
    bool m_sqlInjectionMatchTuplesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
