/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{

  /**
   * <p>Specifies the political view for the style.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/MapConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class MapConfigurationUpdate
  {
  public:
    AWS_LOCATIONSERVICE_API MapConfigurationUpdate();
    AWS_LOCATIONSERVICE_API MapConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API MapConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline const Aws::String& GetPoliticalView() const{ return m_politicalView; }

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline bool PoliticalViewHasBeenSet() const { return m_politicalViewHasBeenSet; }

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline void SetPoliticalView(const Aws::String& value) { m_politicalViewHasBeenSet = true; m_politicalView = value; }

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline void SetPoliticalView(Aws::String&& value) { m_politicalViewHasBeenSet = true; m_politicalView = std::move(value); }

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline void SetPoliticalView(const char* value) { m_politicalViewHasBeenSet = true; m_politicalView.assign(value); }

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline MapConfigurationUpdate& WithPoliticalView(const Aws::String& value) { SetPoliticalView(value); return *this;}

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline MapConfigurationUpdate& WithPoliticalView(Aws::String&& value) { SetPoliticalView(std::move(value)); return *this;}

    /**
     * <p>Specifies the political view for the style. Set to an empty string to not use
     * a political view, or, for styles that support specific political views, you can
     * choose a view, such as <code>IND</code> for the Indian view.</p>  <p>Not
     * all map resources or styles support political view styles. See <a
     * href="https://docs.aws.amazon.com/location/latest/developerguide/map-concepts.html#political-views">Political
     * views</a> for more information.</p> 
     */
    inline MapConfigurationUpdate& WithPoliticalView(const char* value) { SetPoliticalView(value); return *this;}

  private:

    Aws::String m_politicalView;
    bool m_politicalViewHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
