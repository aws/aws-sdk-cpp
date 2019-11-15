/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Destination.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API ListPublishingDestinationsResult
  {
  public:
    ListPublishingDestinationsResult();
    ListPublishingDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPublishingDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }

    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }

    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline ListPublishingDestinationsResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline ListPublishingDestinationsResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline ListPublishingDestinationsResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p>A <code>Destinations</code> obect that includes information about each
     * publishing destination returned.</p>
     */
    inline ListPublishingDestinationsResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline ListPublishingDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline ListPublishingDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results returned in the repsonse. Set the value
     * of this parameter to null for the first request to a list action. For subsequent
     * calls, use the <code>NextToken</code> value returned from the previous request
     * to continue listing results after the first page.</p>
     */
    inline ListPublishingDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Destination> m_destinations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
