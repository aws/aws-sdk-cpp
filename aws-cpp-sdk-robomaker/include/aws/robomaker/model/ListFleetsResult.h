/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/Fleet.h>
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
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API ListFleetsResult
  {
  public:
    ListFleetsResult();
    ListFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline const Aws::Vector<Fleet>& GetFleetDetails() const{ return m_fleetDetails; }

    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline void SetFleetDetails(const Aws::Vector<Fleet>& value) { m_fleetDetails = value; }

    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline void SetFleetDetails(Aws::Vector<Fleet>&& value) { m_fleetDetails = std::move(value); }

    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline ListFleetsResult& WithFleetDetails(const Aws::Vector<Fleet>& value) { SetFleetDetails(value); return *this;}

    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline ListFleetsResult& WithFleetDetails(Aws::Vector<Fleet>&& value) { SetFleetDetails(std::move(value)); return *this;}

    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline ListFleetsResult& AddFleetDetails(const Fleet& value) { m_fleetDetails.push_back(value); return *this; }

    /**
     * <p>A list of fleet details meeting the request criteria.</p>
     */
    inline ListFleetsResult& AddFleetDetails(Fleet&& value) { m_fleetDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline ListFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline ListFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListFleets</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline ListFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Fleet> m_fleetDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
