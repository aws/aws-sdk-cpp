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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Reservation.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListReservationsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ListReservationsResult
  {
  public:
    ListReservationsResult();
    ListReservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListReservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Token to retrieve the next page of results
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Token to retrieve the next page of results
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Token to retrieve the next page of results
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Token to retrieve the next page of results
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Token to retrieve the next page of results
     */
    inline ListReservationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Token to retrieve the next page of results
     */
    inline ListReservationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Token to retrieve the next page of results
     */
    inline ListReservationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * List of reservations
     */
    inline const Aws::Vector<Reservation>& GetReservations() const{ return m_reservations; }

    /**
     * List of reservations
     */
    inline void SetReservations(const Aws::Vector<Reservation>& value) { m_reservations = value; }

    /**
     * List of reservations
     */
    inline void SetReservations(Aws::Vector<Reservation>&& value) { m_reservations = std::move(value); }

    /**
     * List of reservations
     */
    inline ListReservationsResult& WithReservations(const Aws::Vector<Reservation>& value) { SetReservations(value); return *this;}

    /**
     * List of reservations
     */
    inline ListReservationsResult& WithReservations(Aws::Vector<Reservation>&& value) { SetReservations(std::move(value)); return *this;}

    /**
     * List of reservations
     */
    inline ListReservationsResult& AddReservations(const Reservation& value) { m_reservations.push_back(value); return *this; }

    /**
     * List of reservations
     */
    inline ListReservationsResult& AddReservations(Reservation&& value) { m_reservations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Reservation> m_reservations;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
