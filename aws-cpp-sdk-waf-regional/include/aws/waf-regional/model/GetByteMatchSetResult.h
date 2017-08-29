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
#include <aws/waf-regional/model/ByteMatchSet.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{
  class AWS_WAFREGIONAL_API GetByteMatchSetResult
  {
  public:
    GetByteMatchSetResult();
    GetByteMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetByteMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline const ByteMatchSet& GetByteMatchSet() const{ return m_byteMatchSet; }

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline void SetByteMatchSet(const ByteMatchSet& value) { m_byteMatchSet = value; }

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline void SetByteMatchSet(ByteMatchSet&& value) { m_byteMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline GetByteMatchSetResult& WithByteMatchSet(const ByteMatchSet& value) { SetByteMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline GetByteMatchSetResult& WithByteMatchSet(ByteMatchSet&& value) { SetByteMatchSet(std::move(value)); return *this;}

  private:

    ByteMatchSet m_byteMatchSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
