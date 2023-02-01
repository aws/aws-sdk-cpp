/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/model/SatelliteListItem.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellitesResponse">AWS
   * API Reference</a></p>
   */
  class ListSatellitesResult
  {
  public:
    AWS_GROUNDSTATION_API ListSatellitesResult();
    AWS_GROUNDSTATION_API ListSatellitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListSatellitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline ListSatellitesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline ListSatellitesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * satellites.</p>
     */
    inline ListSatellitesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of satellites.</p>
     */
    inline const Aws::Vector<SatelliteListItem>& GetSatellites() const{ return m_satellites; }

    /**
     * <p>List of satellites.</p>
     */
    inline void SetSatellites(const Aws::Vector<SatelliteListItem>& value) { m_satellites = value; }

    /**
     * <p>List of satellites.</p>
     */
    inline void SetSatellites(Aws::Vector<SatelliteListItem>&& value) { m_satellites = std::move(value); }

    /**
     * <p>List of satellites.</p>
     */
    inline ListSatellitesResult& WithSatellites(const Aws::Vector<SatelliteListItem>& value) { SetSatellites(value); return *this;}

    /**
     * <p>List of satellites.</p>
     */
    inline ListSatellitesResult& WithSatellites(Aws::Vector<SatelliteListItem>&& value) { SetSatellites(std::move(value)); return *this;}

    /**
     * <p>List of satellites.</p>
     */
    inline ListSatellitesResult& AddSatellites(const SatelliteListItem& value) { m_satellites.push_back(value); return *this; }

    /**
     * <p>List of satellites.</p>
     */
    inline ListSatellitesResult& AddSatellites(SatelliteListItem&& value) { m_satellites.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SatelliteListItem> m_satellites;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
