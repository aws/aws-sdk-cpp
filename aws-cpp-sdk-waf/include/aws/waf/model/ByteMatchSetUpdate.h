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
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/ByteMatchTuple.h>
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
   * <p>In an <a>UpdateByteMatchSet</a> request, <code>ByteMatchSetUpdate</code>
   * specifies whether to insert or delete a <a>ByteMatchTuple</a> and includes the
   * settings for the <code>ByteMatchTuple</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ByteMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API ByteMatchSetUpdate
  {
  public:
    ByteMatchSetUpdate();
    ByteMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    ByteMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_actionHasBeenSet;

    ByteMatchTuple m_byteMatchTuple;
    bool m_byteMatchTupleHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
