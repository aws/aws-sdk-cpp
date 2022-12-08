/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{
  class ListFargateProfilesResult
  {
  public:
    AWS_EKS_API ListFargateProfilesResult();
    AWS_EKS_API ListFargateProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListFargateProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFargateProfileNames() const{ return m_fargateProfileNames; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline void SetFargateProfileNames(const Aws::Vector<Aws::String>& value) { m_fargateProfileNames = value; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline void SetFargateProfileNames(Aws::Vector<Aws::String>&& value) { m_fargateProfileNames = std::move(value); }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& WithFargateProfileNames(const Aws::Vector<Aws::String>& value) { SetFargateProfileNames(value); return *this;}

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& WithFargateProfileNames(Aws::Vector<Aws::String>&& value) { SetFargateProfileNames(std::move(value)); return *this;}

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& AddFargateProfileNames(const Aws::String& value) { m_fargateProfileNames.push_back(value); return *this; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& AddFargateProfileNames(Aws::String&& value) { m_fargateProfileNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& AddFargateProfileNames(const char* value) { m_fargateProfileNames.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListFargateProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListFargateProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFargateProfiles</code> request. When the results of a
     * <code>ListFargateProfiles</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListFargateProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_fargateProfileNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
