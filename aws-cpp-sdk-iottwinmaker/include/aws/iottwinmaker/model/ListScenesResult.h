/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SceneSummary.h>
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
  class ListScenesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListScenesResult();
    AWS_IOTTWINMAKER_API ListScenesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListScenesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline const Aws::Vector<SceneSummary>& GetSceneSummaries() const{ return m_sceneSummaries; }

    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline void SetSceneSummaries(const Aws::Vector<SceneSummary>& value) { m_sceneSummaries = value; }

    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline void SetSceneSummaries(Aws::Vector<SceneSummary>&& value) { m_sceneSummaries = std::move(value); }

    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline ListScenesResult& WithSceneSummaries(const Aws::Vector<SceneSummary>& value) { SetSceneSummaries(value); return *this;}

    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline ListScenesResult& WithSceneSummaries(Aws::Vector<SceneSummary>&& value) { SetSceneSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline ListScenesResult& AddSceneSummaries(const SceneSummary& value) { m_sceneSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the scenes.</p>
     */
    inline ListScenesResult& AddSceneSummaries(SceneSummary&& value) { m_sceneSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListScenesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListScenesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListScenesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SceneSummary> m_sceneSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
