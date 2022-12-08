/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/IdentityProviderSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class ListIdentityProvidersResult
  {
  public:
    AWS_WORKSPACESWEB_API ListIdentityProvidersResult();
    AWS_WORKSPACESWEB_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identity providers.</p>
     */
    inline const Aws::Vector<IdentityProviderSummary>& GetIdentityProviders() const{ return m_identityProviders; }

    /**
     * <p>The identity providers.</p>
     */
    inline void SetIdentityProviders(const Aws::Vector<IdentityProviderSummary>& value) { m_identityProviders = value; }

    /**
     * <p>The identity providers.</p>
     */
    inline void SetIdentityProviders(Aws::Vector<IdentityProviderSummary>&& value) { m_identityProviders = std::move(value); }

    /**
     * <p>The identity providers.</p>
     */
    inline ListIdentityProvidersResult& WithIdentityProviders(const Aws::Vector<IdentityProviderSummary>& value) { SetIdentityProviders(value); return *this;}

    /**
     * <p>The identity providers.</p>
     */
    inline ListIdentityProvidersResult& WithIdentityProviders(Aws::Vector<IdentityProviderSummary>&& value) { SetIdentityProviders(std::move(value)); return *this;}

    /**
     * <p>The identity providers.</p>
     */
    inline ListIdentityProvidersResult& AddIdentityProviders(const IdentityProviderSummary& value) { m_identityProviders.push_back(value); return *this; }

    /**
     * <p>The identity providers.</p>
     */
    inline ListIdentityProvidersResult& AddIdentityProviders(IdentityProviderSummary&& value) { m_identityProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListIdentityProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IdentityProviderSummary> m_identityProviders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
