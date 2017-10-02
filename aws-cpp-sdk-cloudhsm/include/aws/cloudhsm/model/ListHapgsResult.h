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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudHSM
{
namespace Model
{
  class AWS_CLOUDHSM_API ListHapgsResult
  {
  public:
    ListHapgsResult();
    ListHapgsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListHapgsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHapgList() const{ return m_hapgList; }

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline void SetHapgList(const Aws::Vector<Aws::String>& value) { m_hapgList = value; }

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline void SetHapgList(Aws::Vector<Aws::String>&& value) { m_hapgList = std::move(value); }

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline ListHapgsResult& WithHapgList(const Aws::Vector<Aws::String>& value) { SetHapgList(value); return *this;}

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline ListHapgsResult& WithHapgList(Aws::Vector<Aws::String>&& value) { SetHapgList(std::move(value)); return *this;}

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline ListHapgsResult& AddHapgList(const Aws::String& value) { m_hapgList.push_back(value); return *this; }

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline ListHapgsResult& AddHapgList(Aws::String&& value) { m_hapgList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of high-availability partition groups.</p>
     */
    inline ListHapgsResult& AddHapgList(const char* value) { m_hapgList.push_back(value); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline ListHapgsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline ListHapgsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value to
     * <code>ListHapgs</code> to retrieve the next set of items.</p>
     */
    inline ListHapgsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_hapgList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
