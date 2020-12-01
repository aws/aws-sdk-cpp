/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ResourceCollectionFilter.h>
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
  class AWS_DEVOPSGURU_API GetResourceCollectionResult
  {
  public:
    GetResourceCollectionResult();
    GetResourceCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourceCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetResourceCollectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetResourceCollectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetResourceCollectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResourceCollectionFilter& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline void SetResourceCollection(const ResourceCollectionFilter& value) { m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollectionFilter&& value) { m_resourceCollection = std::move(value); }

    
    inline GetResourceCollectionResult& WithResourceCollection(const ResourceCollectionFilter& value) { SetResourceCollection(value); return *this;}

    
    inline GetResourceCollectionResult& WithResourceCollection(ResourceCollectionFilter&& value) { SetResourceCollection(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    ResourceCollectionFilter m_resourceCollection;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
