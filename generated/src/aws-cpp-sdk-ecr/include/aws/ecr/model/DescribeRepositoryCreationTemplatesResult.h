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
    AWS_ECR_API DescribeRepositoryCreationTemplatesResult() = default;
    AWS_ECR_API DescribeRepositoryCreationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeRepositoryCreationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    DescribeRepositoryCreationTemplatesResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the repository creation templates.</p>
     */
    inline const Aws::Vector<RepositoryCreationTemplate>& GetRepositoryCreationTemplates() const { return m_repositoryCreationTemplates; }
    template<typename RepositoryCreationTemplatesT = Aws::Vector<RepositoryCreationTemplate>>
    void SetRepositoryCreationTemplates(RepositoryCreationTemplatesT&& value) { m_repositoryCreationTemplatesHasBeenSet = true; m_repositoryCreationTemplates = std::forward<RepositoryCreationTemplatesT>(value); }
    template<typename RepositoryCreationTemplatesT = Aws::Vector<RepositoryCreationTemplate>>
    DescribeRepositoryCreationTemplatesResult& WithRepositoryCreationTemplates(RepositoryCreationTemplatesT&& value) { SetRepositoryCreationTemplates(std::forward<RepositoryCreationTemplatesT>(value)); return *this;}
    template<typename RepositoryCreationTemplatesT = RepositoryCreationTemplate>
    DescribeRepositoryCreationTemplatesResult& AddRepositoryCreationTemplates(RepositoryCreationTemplatesT&& value) { m_repositoryCreationTemplatesHasBeenSet = true; m_repositoryCreationTemplates.emplace_back(std::forward<RepositoryCreationTemplatesT>(value)); return *this; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRepositoryCreationTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRepositoryCreationTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::Vector<RepositoryCreationTemplate> m_repositoryCreationTemplates;
    bool m_repositoryCreationTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
