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
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/ByteMatchSetUpdate.h>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class AWS_WAF_API UpdateByteMatchSetRequest : public WAFRequest
  {
  public:
    UpdateByteMatchSetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline const Aws::String& GetByteMatchSetId() const{ return m_byteMatchSetId; }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(const Aws::String& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = value; }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(Aws::String&& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = value; }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline void SetByteMatchSetId(const char* value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId.assign(value); }

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline UpdateByteMatchSetRequest& WithByteMatchSetId(const Aws::String& value) { SetByteMatchSetId(value); return *this;}

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline UpdateByteMatchSetRequest& WithByteMatchSetId(Aws::String&& value) { SetByteMatchSetId(value); return *this;}

    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline UpdateByteMatchSetRequest& WithByteMatchSetId(const char* value) { SetByteMatchSetId(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateByteMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateByteMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline UpdateByteMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<ByteMatchSetUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(const Aws::Vector<ByteMatchSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline void SetUpdates(Aws::Vector<ByteMatchSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateByteMatchSetRequest& WithUpdates(const Aws::Vector<ByteMatchSetUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateByteMatchSetRequest& WithUpdates(Aws::Vector<ByteMatchSetUpdate>&& value) { SetUpdates(value); return *this;}

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateByteMatchSetRequest& AddUpdates(const ByteMatchSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline UpdateByteMatchSetRequest& AddUpdates(ByteMatchSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

  private:
    Aws::String m_byteMatchSetId;
    bool m_byteMatchSetIdHasBeenSet;
    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet;
    Aws::Vector<ByteMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
