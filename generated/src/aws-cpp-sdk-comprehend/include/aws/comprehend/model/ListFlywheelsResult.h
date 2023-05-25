/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/FlywheelSummary.h>
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
  class ListFlywheelsResult
  {
  public:
    AWS_COMPREHEND_API ListFlywheelsResult();
    AWS_COMPREHEND_API ListFlywheelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListFlywheelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline const Aws::Vector<FlywheelSummary>& GetFlywheelSummaryList() const{ return m_flywheelSummaryList; }

    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline void SetFlywheelSummaryList(const Aws::Vector<FlywheelSummary>& value) { m_flywheelSummaryList = value; }

    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline void SetFlywheelSummaryList(Aws::Vector<FlywheelSummary>&& value) { m_flywheelSummaryList = std::move(value); }

    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline ListFlywheelsResult& WithFlywheelSummaryList(const Aws::Vector<FlywheelSummary>& value) { SetFlywheelSummaryList(value); return *this;}

    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline ListFlywheelsResult& WithFlywheelSummaryList(Aws::Vector<FlywheelSummary>&& value) { SetFlywheelSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline ListFlywheelsResult& AddFlywheelSummaryList(const FlywheelSummary& value) { m_flywheelSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of flywheel properties retrieved by the service in response to the
     * request. </p>
     */
    inline ListFlywheelsResult& AddFlywheelSummaryList(FlywheelSummary&& value) { m_flywheelSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListFlywheelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListFlywheelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListFlywheelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFlywheelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFlywheelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFlywheelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FlywheelSummary> m_flywheelSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
