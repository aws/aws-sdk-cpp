/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionAlias.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API DescribeConnectionAliasesResult
  {
  public:
    DescribeConnectionAliasesResult();
    DescribeConnectionAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConnectionAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline const Aws::Vector<ConnectionAlias>& GetConnectionAliases() const{ return m_connectionAliases; }

    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline void SetConnectionAliases(const Aws::Vector<ConnectionAlias>& value) { m_connectionAliases = value; }

    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline void SetConnectionAliases(Aws::Vector<ConnectionAlias>&& value) { m_connectionAliases = std::move(value); }

    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline DescribeConnectionAliasesResult& WithConnectionAliases(const Aws::Vector<ConnectionAlias>& value) { SetConnectionAliases(value); return *this;}

    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline DescribeConnectionAliasesResult& WithConnectionAliases(Aws::Vector<ConnectionAlias>&& value) { SetConnectionAliases(std::move(value)); return *this;}

    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline DescribeConnectionAliasesResult& AddConnectionAliases(const ConnectionAlias& value) { m_connectionAliases.push_back(value); return *this; }

    /**
     * <p>Information about the specified connection aliases.</p>
     */
    inline DescribeConnectionAliasesResult& AddConnectionAliases(ConnectionAlias&& value) { m_connectionAliases.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeConnectionAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeConnectionAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeConnectionAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectionAlias> m_connectionAliases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
