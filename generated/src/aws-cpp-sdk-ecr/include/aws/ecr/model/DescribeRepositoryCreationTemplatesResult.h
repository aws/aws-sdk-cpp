/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/RepositoryCreationTemplate.h>
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
namespace ECR
{
namespace Model
{
  class DescribeRepositoryCreationTemplatesResult
  {
  public:
    AWS_ECR_API DescribeRepositoryCreationTemplatesResult();
    AWS_ECR_API DescribeRepositoryCreationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeRepositoryCreationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline DescribeRepositoryCreationTemplatesResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the repository creation templates.</p>
     */
    inline const Aws::Vector<RepositoryCreationTemplate>& GetRepositoryCreationTemplates() const{ return m_repositoryCreationTemplates; }
    inline void SetRepositoryCreationTemplates(const Aws::Vector<RepositoryCreationTemplate>& value) { m_repositoryCreationTemplates = value; }
    inline void SetRepositoryCreationTemplates(Aws::Vector<RepositoryCreationTemplate>&& value) { m_repositoryCreationTemplates = std::move(value); }
    inline DescribeRepositoryCreationTemplatesResult& WithRepositoryCreationTemplates(const Aws::Vector<RepositoryCreationTemplate>& value) { SetRepositoryCreationTemplates(value); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithRepositoryCreationTemplates(Aws::Vector<RepositoryCreationTemplate>&& value) { SetRepositoryCreationTemplates(std::move(value)); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& AddRepositoryCreationTemplates(const RepositoryCreationTemplate& value) { m_repositoryCreationTemplates.push_back(value); return *this; }
    inline DescribeRepositoryCreationTemplatesResult& AddRepositoryCreationTemplates(RepositoryCreationTemplate&& value) { m_repositoryCreationTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositoryCreationTemplates</code> request. When the results of a
     * <code>DescribeRepositoryCreationTemplates</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeRepositoryCreationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRepositoryCreationTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRepositoryCreationTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::Vector<RepositoryCreationTemplate> m_repositoryCreationTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
