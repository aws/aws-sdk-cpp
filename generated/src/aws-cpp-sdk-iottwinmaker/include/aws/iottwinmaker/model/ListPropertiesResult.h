/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/PropertySummary.h>
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
  class ListPropertiesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListPropertiesResult();
    AWS_IOTTWINMAKER_API ListPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline const Aws::Vector<PropertySummary>& GetPropertySummaries() const{ return m_propertySummaries; }

    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline void SetPropertySummaries(const Aws::Vector<PropertySummary>& value) { m_propertySummaries = value; }

    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline void SetPropertySummaries(Aws::Vector<PropertySummary>&& value) { m_propertySummaries = std::move(value); }

    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline ListPropertiesResult& WithPropertySummaries(const Aws::Vector<PropertySummary>& value) { SetPropertySummaries(value); return *this;}

    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline ListPropertiesResult& WithPropertySummaries(Aws::Vector<PropertySummary>&& value) { SetPropertySummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline ListPropertiesResult& AddPropertySummaries(const PropertySummary& value) { m_propertySummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the properties.</p>
     */
    inline ListPropertiesResult& AddPropertySummaries(PropertySummary&& value) { m_propertySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline ListPropertiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline ListPropertiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of property results.</p>
     */
    inline ListPropertiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PropertySummary> m_propertySummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
