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
#include <aws/waf/model/XssMatchSet.h>
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
   * <p>The response to a <a>GetXssMatchSet</a> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetXssMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_WAF_API GetXssMatchSetResult
  {
  public:
    GetXssMatchSetResult();
    GetXssMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetXssMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>XssMatchSet</a> that you specified in the
     * <code>GetXssMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>XssMatchSet</a>: Contains <code>Name</code>,
     * <code>XssMatchSetId</code>, and an array of <code>XssMatchTuple</code>
     * objects</p> </li> <li> <p> <a>XssMatchTuple</a>: Each <code>XssMatchTuple</code>
     * object contains <code>FieldToMatch</code> and <code>TextTransformation</code>
     * </p> </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline const XssMatchSet& GetXssMatchSet() const{ return m_xssMatchSet; }

    /**
     * <p>Information about the <a>XssMatchSet</a> that you specified in the
     * <code>GetXssMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>XssMatchSet</a>: Contains <code>Name</code>,
     * <code>XssMatchSetId</code>, and an array of <code>XssMatchTuple</code>
     * objects</p> </li> <li> <p> <a>XssMatchTuple</a>: Each <code>XssMatchTuple</code>
     * object contains <code>FieldToMatch</code> and <code>TextTransformation</code>
     * </p> </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline void SetXssMatchSet(const XssMatchSet& value) { m_xssMatchSet = value; }

    /**
     * <p>Information about the <a>XssMatchSet</a> that you specified in the
     * <code>GetXssMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>XssMatchSet</a>: Contains <code>Name</code>,
     * <code>XssMatchSetId</code>, and an array of <code>XssMatchTuple</code>
     * objects</p> </li> <li> <p> <a>XssMatchTuple</a>: Each <code>XssMatchTuple</code>
     * object contains <code>FieldToMatch</code> and <code>TextTransformation</code>
     * </p> </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline void SetXssMatchSet(XssMatchSet&& value) { m_xssMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>XssMatchSet</a> that you specified in the
     * <code>GetXssMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>XssMatchSet</a>: Contains <code>Name</code>,
     * <code>XssMatchSetId</code>, and an array of <code>XssMatchTuple</code>
     * objects</p> </li> <li> <p> <a>XssMatchTuple</a>: Each <code>XssMatchTuple</code>
     * object contains <code>FieldToMatch</code> and <code>TextTransformation</code>
     * </p> </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline GetXssMatchSetResult& WithXssMatchSet(const XssMatchSet& value) { SetXssMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>XssMatchSet</a> that you specified in the
     * <code>GetXssMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>XssMatchSet</a>: Contains <code>Name</code>,
     * <code>XssMatchSetId</code>, and an array of <code>XssMatchTuple</code>
     * objects</p> </li> <li> <p> <a>XssMatchTuple</a>: Each <code>XssMatchTuple</code>
     * object contains <code>FieldToMatch</code> and <code>TextTransformation</code>
     * </p> </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline GetXssMatchSetResult& WithXssMatchSet(XssMatchSet&& value) { SetXssMatchSet(std::move(value)); return *this;}

  private:

    XssMatchSet m_xssMatchSet;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
