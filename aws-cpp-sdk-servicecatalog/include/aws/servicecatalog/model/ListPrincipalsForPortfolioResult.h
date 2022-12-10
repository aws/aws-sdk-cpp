/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Principal.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListPrincipalsForPortfolioResult
  {
  public:
    AWS_SERVICECATALOG_API ListPrincipalsForPortfolioResult();
    AWS_SERVICECATALOG_API ListPrincipalsForPortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListPrincipalsForPortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Principal>& value) { m_principals = value; }

    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline void SetPrincipals(Aws::Vector<Principal>&& value) { m_principals = std::move(value); }

    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline ListPrincipalsForPortfolioResult& WithPrincipals(const Aws::Vector<Principal>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline ListPrincipalsForPortfolioResult& WithPrincipals(Aws::Vector<Principal>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline ListPrincipalsForPortfolioResult& AddPrincipals(const Principal& value) { m_principals.push_back(value); return *this; }

    /**
     * <p>The <code>PrincipalARN</code>s and corresponding <code>PrincipalType</code>s
     * associated with the portfolio.</p>
     */
    inline ListPrincipalsForPortfolioResult& AddPrincipals(Principal&& value) { m_principals.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListPrincipalsForPortfolioResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListPrincipalsForPortfolioResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListPrincipalsForPortfolioResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Principal> m_principals;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
