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
#include <aws/waf/model/SizeConstraintSet.h>

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
namespace WAF
{
namespace Model
{
  class AWS_WAF_API GetSizeConstraintSetResult
  {
  public:
    GetSizeConstraintSetResult();
    GetSizeConstraintSetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSizeConstraintSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the <a>SizeConstraintSet</a> that you specified in the
     * <code>GetSizeConstraintSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SizeConstraintSet</a>: Contains
     * <code>SizeConstraintSetId</code>, <code>SizeConstraints</code>, and
     * <code>Name</code> </p> </li> <li> <p> <code>SizeConstraints</code>: Contains an
     * array of <a>SizeConstraint</a> objects. Each <code>SizeConstraint</code> object
     * contains <a>FieldToMatch</a>, <code>TextTransformation</code>,
     * <code>ComparisonOperator</code>, and <code>Size</code> </p> </li> <li> <p>
     * <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p> </li>
     * </ul>
     */
    inline const SizeConstraintSet& GetSizeConstraintSet() const{ return m_sizeConstraintSet; }

    /**
     * <p>Information about the <a>SizeConstraintSet</a> that you specified in the
     * <code>GetSizeConstraintSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SizeConstraintSet</a>: Contains
     * <code>SizeConstraintSetId</code>, <code>SizeConstraints</code>, and
     * <code>Name</code> </p> </li> <li> <p> <code>SizeConstraints</code>: Contains an
     * array of <a>SizeConstraint</a> objects. Each <code>SizeConstraint</code> object
     * contains <a>FieldToMatch</a>, <code>TextTransformation</code>,
     * <code>ComparisonOperator</code>, and <code>Size</code> </p> </li> <li> <p>
     * <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p> </li>
     * </ul>
     */
    inline void SetSizeConstraintSet(const SizeConstraintSet& value) { m_sizeConstraintSet = value; }

    /**
     * <p>Information about the <a>SizeConstraintSet</a> that you specified in the
     * <code>GetSizeConstraintSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SizeConstraintSet</a>: Contains
     * <code>SizeConstraintSetId</code>, <code>SizeConstraints</code>, and
     * <code>Name</code> </p> </li> <li> <p> <code>SizeConstraints</code>: Contains an
     * array of <a>SizeConstraint</a> objects. Each <code>SizeConstraint</code> object
     * contains <a>FieldToMatch</a>, <code>TextTransformation</code>,
     * <code>ComparisonOperator</code>, and <code>Size</code> </p> </li> <li> <p>
     * <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p> </li>
     * </ul>
     */
    inline void SetSizeConstraintSet(SizeConstraintSet&& value) { m_sizeConstraintSet = value; }

    /**
     * <p>Information about the <a>SizeConstraintSet</a> that you specified in the
     * <code>GetSizeConstraintSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SizeConstraintSet</a>: Contains
     * <code>SizeConstraintSetId</code>, <code>SizeConstraints</code>, and
     * <code>Name</code> </p> </li> <li> <p> <code>SizeConstraints</code>: Contains an
     * array of <a>SizeConstraint</a> objects. Each <code>SizeConstraint</code> object
     * contains <a>FieldToMatch</a>, <code>TextTransformation</code>,
     * <code>ComparisonOperator</code>, and <code>Size</code> </p> </li> <li> <p>
     * <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p> </li>
     * </ul>
     */
    inline GetSizeConstraintSetResult& WithSizeConstraintSet(const SizeConstraintSet& value) { SetSizeConstraintSet(value); return *this;}

    /**
     * <p>Information about the <a>SizeConstraintSet</a> that you specified in the
     * <code>GetSizeConstraintSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SizeConstraintSet</a>: Contains
     * <code>SizeConstraintSetId</code>, <code>SizeConstraints</code>, and
     * <code>Name</code> </p> </li> <li> <p> <code>SizeConstraints</code>: Contains an
     * array of <a>SizeConstraint</a> objects. Each <code>SizeConstraint</code> object
     * contains <a>FieldToMatch</a>, <code>TextTransformation</code>,
     * <code>ComparisonOperator</code>, and <code>Size</code> </p> </li> <li> <p>
     * <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p> </li>
     * </ul>
     */
    inline GetSizeConstraintSetResult& WithSizeConstraintSet(SizeConstraintSet&& value) { SetSizeConstraintSet(value); return *this;}

  private:
    SizeConstraintSet m_sizeConstraintSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
