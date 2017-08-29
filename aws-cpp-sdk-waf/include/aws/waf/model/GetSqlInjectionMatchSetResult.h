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
#include <aws/waf/model/SqlInjectionMatchSet.h>
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
namespace WAF
{
namespace Model
{
  /**
   * <p>The response to a <a>GetSqlInjectionMatchSet</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetSqlInjectionMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API GetSqlInjectionMatchSetResult
  {
  public:
    GetSqlInjectionMatchSetResult();
    GetSqlInjectionMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSqlInjectionMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline const SqlInjectionMatchSet& GetSqlInjectionMatchSet() const{ return m_sqlInjectionMatchSet; }

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline void SetSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { m_sqlInjectionMatchSet = value; }

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline void SetSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { m_sqlInjectionMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline GetSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { SetSqlInjectionMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline GetSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { SetSqlInjectionMatchSet(std::move(value)); return *this;}

  private:

    SqlInjectionMatchSet m_sqlInjectionMatchSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
