/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ResourceCollectionFilter.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class GetResourceCollectionResult
  {
  public:
    AWS_DEVOPSGURU_API GetResourceCollectionResult() = default;
    AWS_DEVOPSGURU_API GetResourceCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API GetResourceCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The requested list of Amazon Web Services resource collections. The two
     * types of Amazon Web Services resource collections supported are Amazon Web
     * Services CloudFormation stacks and Amazon Web Services resources that contain
     * the same Amazon Web Services tag. DevOps Guru can be configured to analyze the
     * Amazon Web Services resources that are defined in the stacks or that are tagged
     * using the same tag <i>key</i>. You can specify up to 500 Amazon Web Services
     * CloudFormation stacks. </p>
     */
    inline const ResourceCollectionFilter& GetResourceCollection() const { return m_resourceCollection; }
    template<typename ResourceCollectionT = ResourceCollectionFilter>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollectionFilter>
    GetResourceCollectionResult& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceCollectionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceCollectionFilter m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
