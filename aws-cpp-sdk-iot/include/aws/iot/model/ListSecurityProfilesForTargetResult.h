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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SecurityProfileTargetMapping.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListSecurityProfilesForTargetResult
  {
  public:
    ListSecurityProfilesForTargetResult();
    ListSecurityProfilesForTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSecurityProfilesForTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline const Aws::Vector<SecurityProfileTargetMapping>& GetSecurityProfileTargetMappings() const{ return m_securityProfileTargetMappings; }

    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline void SetSecurityProfileTargetMappings(const Aws::Vector<SecurityProfileTargetMapping>& value) { m_securityProfileTargetMappings = value; }

    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline void SetSecurityProfileTargetMappings(Aws::Vector<SecurityProfileTargetMapping>&& value) { m_securityProfileTargetMappings = std::move(value); }

    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline ListSecurityProfilesForTargetResult& WithSecurityProfileTargetMappings(const Aws::Vector<SecurityProfileTargetMapping>& value) { SetSecurityProfileTargetMappings(value); return *this;}

    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline ListSecurityProfilesForTargetResult& WithSecurityProfileTargetMappings(Aws::Vector<SecurityProfileTargetMapping>&& value) { SetSecurityProfileTargetMappings(std::move(value)); return *this;}

    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline ListSecurityProfilesForTargetResult& AddSecurityProfileTargetMappings(const SecurityProfileTargetMapping& value) { m_securityProfileTargetMappings.push_back(value); return *this; }

    /**
     * <p>A list of security profiles and their associated targets.</p>
     */
    inline ListSecurityProfilesForTargetResult& AddSecurityProfileTargetMappings(SecurityProfileTargetMapping&& value) { m_securityProfileTargetMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListSecurityProfilesForTargetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListSecurityProfilesForTargetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListSecurityProfilesForTargetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SecurityProfileTargetMapping> m_securityProfileTargetMappings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
