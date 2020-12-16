/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class AWS_LOCATIONSERVICE_API SearchPlaceIndexForPositionRequest : public LocationServiceRequest
  {
  public:
    SearchPlaceIndexForPositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchPlaceIndexForPosition"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForPositionRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForPositionRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the Place index resource you want to use for the search.</p>
     */
    inline SearchPlaceIndexForPositionRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>An optional paramer. The maximum number of results returned per request. </p>
     * <p>Default value: <code>50</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional paramer. The maximum number of results returned per request. </p>
     * <p>Default value: <code>50</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional paramer. The maximum number of results returned per request. </p>
     * <p>Default value: <code>50</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional paramer. The maximum number of results returned per request. </p>
     * <p>Default value: <code>50</code> </p>
     */
    inline SearchPlaceIndexForPositionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline SearchPlaceIndexForPositionRequest& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline SearchPlaceIndexForPositionRequest& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>Specifies a coordinate for the query defined by a longitude, and
     * latitude.</p> <ul> <li> <p>The first position is the X coordinate, or
     * longitude.</p> </li> <li> <p>The second position is the Y coordinate, or
     * latitude. </p> </li> </ul> <p>For example,
     * <code>position=xLongitude&amp;position=yLatitude</code> .</p>
     */
    inline SearchPlaceIndexForPositionRequest& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
