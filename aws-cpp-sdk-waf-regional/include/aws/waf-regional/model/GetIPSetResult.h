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
#include <aws/waf-regional/model/IPSet.h>
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
  class AWS_WAFREGIONAL_API GetIPSetResult
  {
  public:
    GetIPSetResult();
    GetIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline const IPSet& GetIPSet() const{ return m_iPSet; }

    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline void SetIPSet(const IPSet& value) { m_iPSet = value; }

    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline void SetIPSet(IPSet&& value) { m_iPSet = std::move(value); }

    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline GetIPSetResult& WithIPSet(const IPSet& value) { SetIPSet(value); return *this;}

    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline GetIPSetResult& WithIPSet(IPSet&& value) { SetIPSet(std::move(value)); return *this;}

  private:

    IPSet m_iPSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
