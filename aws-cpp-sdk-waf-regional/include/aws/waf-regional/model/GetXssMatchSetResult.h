/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/XssMatchSet.h>
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
  /**
   * <p>The response to a <a>GetXssMatchSet</a> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetXssMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class GetXssMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetXssMatchSetResult();
    AWS_WAFREGIONAL_API GetXssMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetXssMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace WAFRegional
} // namespace Aws
