/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class ListCrossAccountAuthorizationsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrossAccountAuthorizations() const{ return m_crossAccountAuthorizations; }

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline void SetCrossAccountAuthorizations(const Aws::Vector<Aws::String>& value) { m_crossAccountAuthorizations = value; }

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline void SetCrossAccountAuthorizations(Aws::Vector<Aws::String>&& value) { m_crossAccountAuthorizations = std::move(value); }

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline ListCrossAccountAuthorizationsResult& WithCrossAccountAuthorizations(const Aws::Vector<Aws::String>& value) { SetCrossAccountAuthorizations(value); return *this;}

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline ListCrossAccountAuthorizationsResult& WithCrossAccountAuthorizations(Aws::Vector<Aws::String>&& value) { SetCrossAccountAuthorizations(std::move(value)); return *this;}

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(const Aws::String& value) { m_crossAccountAuthorizations.push_back(value); return *this; }

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(Aws::String&& value) { m_crossAccountAuthorizations.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(const char* value) { m_crossAccountAuthorizations.push_back(value); return *this; }


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListCrossAccountAuthorizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListCrossAccountAuthorizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListCrossAccountAuthorizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_crossAccountAuthorizations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
