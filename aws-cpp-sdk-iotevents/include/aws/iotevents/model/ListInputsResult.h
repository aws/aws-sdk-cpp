/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/InputSummary.h>
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
namespace IoTEvents
{
namespace Model
{
  class ListInputsResult
  {
  public:
    AWS_IOTEVENTS_API ListInputsResult();
    AWS_IOTEVENTS_API ListInputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListInputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the inputs.</p>
     */
    inline const Aws::Vector<InputSummary>& GetInputSummaries() const{ return m_inputSummaries; }

    /**
     * <p>Summary information about the inputs.</p>
     */
    inline void SetInputSummaries(const Aws::Vector<InputSummary>& value) { m_inputSummaries = value; }

    /**
     * <p>Summary information about the inputs.</p>
     */
    inline void SetInputSummaries(Aws::Vector<InputSummary>&& value) { m_inputSummaries = std::move(value); }

    /**
     * <p>Summary information about the inputs.</p>
     */
    inline ListInputsResult& WithInputSummaries(const Aws::Vector<InputSummary>& value) { SetInputSummaries(value); return *this;}

    /**
     * <p>Summary information about the inputs.</p>
     */
    inline ListInputsResult& WithInputSummaries(Aws::Vector<InputSummary>&& value) { SetInputSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information about the inputs.</p>
     */
    inline ListInputsResult& AddInputSummaries(const InputSummary& value) { m_inputSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information about the inputs.</p>
     */
    inline ListInputsResult& AddInputSummaries(InputSummary&& value) { m_inputSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListInputsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListInputsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline ListInputsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InputSummary> m_inputSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
