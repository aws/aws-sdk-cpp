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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Policy.h>

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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListPrincipalPolicies operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPrincipalPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ListPrincipalPoliciesResult
  {
  public:
    ListPrincipalPoliciesResult();
    ListPrincipalPoliciesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPrincipalPoliciesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The policies.</p>
     */
    inline const Aws::Vector<Policy>& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies.</p>
     */
    inline void SetPolicies(const Aws::Vector<Policy>& value) { m_policies = value; }

    /**
     * <p>The policies.</p>
     */
    inline void SetPolicies(Aws::Vector<Policy>&& value) { m_policies = value; }

    /**
     * <p>The policies.</p>
     */
    inline ListPrincipalPoliciesResult& WithPolicies(const Aws::Vector<Policy>& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies.</p>
     */
    inline ListPrincipalPoliciesResult& WithPolicies(Aws::Vector<Policy>&& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies.</p>
     */
    inline ListPrincipalPoliciesResult& AddPolicies(const Policy& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>The policies.</p>
     */
    inline ListPrincipalPoliciesResult& AddPolicies(Policy&& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPrincipalPoliciesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPrincipalPoliciesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPrincipalPoliciesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:
    Aws::Vector<Policy> m_policies;
    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
