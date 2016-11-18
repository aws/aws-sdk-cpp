/*
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
   * <p>The output from the ListPolicyPrincipals operation.</p>
   */
  class AWS_IOT_API ListPolicyPrincipalsResult
  {
  public:
    ListPolicyPrincipalsResult();
    ListPolicyPrincipalsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPolicyPrincipalsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principals = value; }

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principals = value; }

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline ListPolicyPrincipalsResult& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline ListPolicyPrincipalsResult& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline ListPolicyPrincipalsResult& AddPrincipals(const Aws::String& value) { m_principals.push_back(value); return *this; }

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline ListPolicyPrincipalsResult& AddPrincipals(Aws::String&& value) { m_principals.push_back(value); return *this; }

    /**
     * <p>The descriptions of the principals.</p>
     */
    inline ListPolicyPrincipalsResult& AddPrincipals(const char* value) { m_principals.push_back(value); return *this; }

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
    inline ListPolicyPrincipalsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPolicyPrincipalsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListPolicyPrincipalsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_principals;
    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
