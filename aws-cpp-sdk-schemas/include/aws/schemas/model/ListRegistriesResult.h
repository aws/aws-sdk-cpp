/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/RegistrySummary.h>
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
namespace Schemas
{
namespace Model
{
  class ListRegistriesResult
  {
  public:
    AWS_SCHEMAS_API ListRegistriesResult();
    AWS_SCHEMAS_API ListRegistriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListRegistriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListRegistriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListRegistriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListRegistriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of registry summaries.</p>
     */
    inline const Aws::Vector<RegistrySummary>& GetRegistries() const{ return m_registries; }

    /**
     * <p>An array of registry summaries.</p>
     */
    inline void SetRegistries(const Aws::Vector<RegistrySummary>& value) { m_registries = value; }

    /**
     * <p>An array of registry summaries.</p>
     */
    inline void SetRegistries(Aws::Vector<RegistrySummary>&& value) { m_registries = std::move(value); }

    /**
     * <p>An array of registry summaries.</p>
     */
    inline ListRegistriesResult& WithRegistries(const Aws::Vector<RegistrySummary>& value) { SetRegistries(value); return *this;}

    /**
     * <p>An array of registry summaries.</p>
     */
    inline ListRegistriesResult& WithRegistries(Aws::Vector<RegistrySummary>&& value) { SetRegistries(std::move(value)); return *this;}

    /**
     * <p>An array of registry summaries.</p>
     */
    inline ListRegistriesResult& AddRegistries(const RegistrySummary& value) { m_registries.push_back(value); return *this; }

    /**
     * <p>An array of registry summaries.</p>
     */
    inline ListRegistriesResult& AddRegistries(RegistrySummary&& value) { m_registries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RegistrySummary> m_registries;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
