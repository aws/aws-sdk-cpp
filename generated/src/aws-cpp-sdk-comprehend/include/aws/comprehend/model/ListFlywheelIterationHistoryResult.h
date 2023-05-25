/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/FlywheelIterationProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListFlywheelIterationHistoryResult
  {
  public:
    AWS_COMPREHEND_API ListFlywheelIterationHistoryResult();
    AWS_COMPREHEND_API ListFlywheelIterationHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListFlywheelIterationHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline const Aws::Vector<FlywheelIterationProperties>& GetFlywheelIterationPropertiesList() const{ return m_flywheelIterationPropertiesList; }

    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline void SetFlywheelIterationPropertiesList(const Aws::Vector<FlywheelIterationProperties>& value) { m_flywheelIterationPropertiesList = value; }

    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline void SetFlywheelIterationPropertiesList(Aws::Vector<FlywheelIterationProperties>&& value) { m_flywheelIterationPropertiesList = std::move(value); }

    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline ListFlywheelIterationHistoryResult& WithFlywheelIterationPropertiesList(const Aws::Vector<FlywheelIterationProperties>& value) { SetFlywheelIterationPropertiesList(value); return *this;}

    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline ListFlywheelIterationHistoryResult& WithFlywheelIterationPropertiesList(Aws::Vector<FlywheelIterationProperties>&& value) { SetFlywheelIterationPropertiesList(std::move(value)); return *this;}

    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline ListFlywheelIterationHistoryResult& AddFlywheelIterationPropertiesList(const FlywheelIterationProperties& value) { m_flywheelIterationPropertiesList.push_back(value); return *this; }

    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline ListFlywheelIterationHistoryResult& AddFlywheelIterationPropertiesList(FlywheelIterationProperties&& value) { m_flywheelIterationPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token</p>
     */
    inline ListFlywheelIterationHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token</p>
     */
    inline ListFlywheelIterationHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token</p>
     */
    inline ListFlywheelIterationHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFlywheelIterationHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFlywheelIterationHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFlywheelIterationHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FlywheelIterationProperties> m_flywheelIterationPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
