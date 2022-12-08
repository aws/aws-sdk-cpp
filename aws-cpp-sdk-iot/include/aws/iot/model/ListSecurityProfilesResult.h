/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SecurityProfileIdentifier.h>
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
  class ListSecurityProfilesResult
  {
  public:
    AWS_IOT_API ListSecurityProfilesResult();
    AWS_IOT_API ListSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline const Aws::Vector<SecurityProfileIdentifier>& GetSecurityProfileIdentifiers() const{ return m_securityProfileIdentifiers; }

    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline void SetSecurityProfileIdentifiers(const Aws::Vector<SecurityProfileIdentifier>& value) { m_securityProfileIdentifiers = value; }

    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline void SetSecurityProfileIdentifiers(Aws::Vector<SecurityProfileIdentifier>&& value) { m_securityProfileIdentifiers = std::move(value); }

    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline ListSecurityProfilesResult& WithSecurityProfileIdentifiers(const Aws::Vector<SecurityProfileIdentifier>& value) { SetSecurityProfileIdentifiers(value); return *this;}

    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline ListSecurityProfilesResult& WithSecurityProfileIdentifiers(Aws::Vector<SecurityProfileIdentifier>&& value) { SetSecurityProfileIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline ListSecurityProfilesResult& AddSecurityProfileIdentifiers(const SecurityProfileIdentifier& value) { m_securityProfileIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of security profile identifiers (names and ARNs).</p>
     */
    inline ListSecurityProfilesResult& AddSecurityProfileIdentifiers(SecurityProfileIdentifier&& value) { m_securityProfileIdentifiers.push_back(std::move(value)); return *this; }


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
    inline ListSecurityProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListSecurityProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListSecurityProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SecurityProfileIdentifier> m_securityProfileIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
