/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/ByteMatchTuple.h>
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
   * endpoints for regional and global use. </p>  <p>In an
   * <a>UpdateByteMatchSet</a> request, <code>ByteMatchSetUpdate</code> specifies
   * whether to insert or delete a <a>ByteMatchTuple</a> and includes the settings
   * for the <code>ByteMatchTuple</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ByteMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class ByteMatchSetUpdate
  {
  public:
    AWS_WAFREGIONAL_API ByteMatchSetUpdate();
    AWS_WAFREGIONAL_API ByteMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API ByteMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to insert or delete a <a>ByteMatchTuple</a>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to insert or delete a <a>ByteMatchTuple</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to insert or delete a <a>ByteMatchTuple</a>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert or delete a <a>ByteMatchTuple</a>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to insert or delete a <a>ByteMatchTuple</a>.</p>
     */
    inline ByteMatchSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert or delete a <a>ByteMatchTuple</a>.</p>
     */
    inline ByteMatchSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the value that you want AWS WAF to search for. If you specify
     * <code>DELETE</code> for the value of <code>Action</code>, the
     * <code>ByteMatchTuple</code> values must exactly match the values in the
     * <code>ByteMatchTuple</code> that you want to delete from the
     * <code>ByteMatchSet</code>.</p>
     */
    inline const ByteMatchTuple& GetByteMatchTuple() const{ return m_byteMatchTuple; }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the value that you want AWS WAF to search for. If you specify
     * <code>DELETE</code> for the value of <code>Action</code>, the
     * <code>ByteMatchTuple</code> values must exactly match the values in the
     * <code>ByteMatchTuple</code> that you want to delete from the
     * <code>ByteMatchSet</code>.</p>
     */
    inline bool ByteMatchTupleHasBeenSet() const { return m_byteMatchTupleHasBeenSet; }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the value that you want AWS WAF to search for. If you specify
     * <code>DELETE</code> for the value of <code>Action</code>, the
     * <code>ByteMatchTuple</code> values must exactly match the values in the
     * <code>ByteMatchTuple</code> that you want to delete from the
     * <code>ByteMatchSet</code>.</p>
     */
    inline void SetByteMatchTuple(const ByteMatchTuple& value) { m_byteMatchTupleHasBeenSet = true; m_byteMatchTuple = value; }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the value that you want AWS WAF to search for. If you specify
     * <code>DELETE</code> for the value of <code>Action</code>, the
     * <code>ByteMatchTuple</code> values must exactly match the values in the
     * <code>ByteMatchTuple</code> that you want to delete from the
     * <code>ByteMatchSet</code>.</p>
     */
    inline void SetByteMatchTuple(ByteMatchTuple&& value) { m_byteMatchTupleHasBeenSet = true; m_byteMatchTuple = std::move(value); }

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the value that you want AWS WAF to search for. If you specify
     * <code>DELETE</code> for the value of <code>Action</code>, the
     * <code>ByteMatchTuple</code> values must exactly match the values in the
     * <code>ByteMatchTuple</code> that you want to delete from the
     * <code>ByteMatchSet</code>.</p>
     */
    inline ByteMatchSetUpdate& WithByteMatchTuple(const ByteMatchTuple& value) { SetByteMatchTuple(value); return *this;}

    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the value that you want AWS WAF to search for. If you specify
     * <code>DELETE</code> for the value of <code>Action</code>, the
     * <code>ByteMatchTuple</code> values must exactly match the values in the
     * <code>ByteMatchTuple</code> that you want to delete from the
     * <code>ByteMatchSet</code>.</p>
     */
    inline ByteMatchSetUpdate& WithByteMatchTuple(ByteMatchTuple&& value) { SetByteMatchTuple(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    ByteMatchTuple m_byteMatchTuple;
    bool m_byteMatchTupleHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
