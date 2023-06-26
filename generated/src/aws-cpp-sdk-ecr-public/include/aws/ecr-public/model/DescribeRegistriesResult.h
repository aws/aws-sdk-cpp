/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/Registry.h>
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
namespace ECRPublic
{
namespace Model
{
  class DescribeRegistriesResult
  {
  public:
    AWS_ECRPUBLIC_API DescribeRegistriesResult();
    AWS_ECRPUBLIC_API DescribeRegistriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DescribeRegistriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline const Aws::Vector<Registry>& GetRegistries() const{ return m_registries; }

    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline void SetRegistries(const Aws::Vector<Registry>& value) { m_registries = value; }

    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline void SetRegistries(Aws::Vector<Registry>&& value) { m_registries = std::move(value); }

    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline DescribeRegistriesResult& WithRegistries(const Aws::Vector<Registry>& value) { SetRegistries(value); return *this;}

    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline DescribeRegistriesResult& WithRegistries(Aws::Vector<Registry>&& value) { SetRegistries(std::move(value)); return *this;}

    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline DescribeRegistriesResult& AddRegistries(const Registry& value) { m_registries.push_back(value); return *this; }

    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline DescribeRegistriesResult& AddRegistries(Registry&& value) { m_registries.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline DescribeRegistriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline DescribeRegistriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline DescribeRegistriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRegistriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRegistriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRegistriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Registry> m_registries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
