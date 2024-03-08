/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/ComponentSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListComponentsResult
  {
  public:
    AWS_IOTTWINMAKER_API ListComponentsResult();
    AWS_IOTTWINMAKER_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponentSummaries() const{ return m_componentSummaries; }

    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline void SetComponentSummaries(const Aws::Vector<ComponentSummary>& value) { m_componentSummaries = value; }

    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline void SetComponentSummaries(Aws::Vector<ComponentSummary>&& value) { m_componentSummaries = std::move(value); }

    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline ListComponentsResult& WithComponentSummaries(const Aws::Vector<ComponentSummary>& value) { SetComponentSummaries(value); return *this;}

    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline ListComponentsResult& WithComponentSummaries(Aws::Vector<ComponentSummary>&& value) { SetComponentSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline ListComponentsResult& AddComponentSummaries(const ComponentSummary& value) { m_componentSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the components.</p>
     */
    inline ListComponentsResult& AddComponentSummaries(ComponentSummary&& value) { m_componentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of component results.</p>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ComponentSummary> m_componentSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
