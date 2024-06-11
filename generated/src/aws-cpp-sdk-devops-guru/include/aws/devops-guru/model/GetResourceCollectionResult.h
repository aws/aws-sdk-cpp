﻿/**
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
    AWS_DEVOPSGURU_API GetResourceCollectionResult();
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
    inline const ResourceCollectionFilter& GetResourceCollection() const{ return m_resourceCollection; }
    inline void SetResourceCollection(const ResourceCollectionFilter& value) { m_resourceCollection = value; }
    inline void SetResourceCollection(ResourceCollectionFilter&& value) { m_resourceCollection = std::move(value); }
    inline GetResourceCollectionResult& WithResourceCollection(const ResourceCollectionFilter& value) { SetResourceCollection(value); return *this;}
    inline GetResourceCollectionResult& WithResourceCollection(ResourceCollectionFilter&& value) { SetResourceCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetResourceCollectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetResourceCollectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetResourceCollectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResourceCollectionFilter m_resourceCollection;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
