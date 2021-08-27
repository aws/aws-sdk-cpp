/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/Place.h>
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
   * <p>Specifies a single point of interest, or Place as a result of a search query
   * obtained from a dataset configured in the Place index Resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/SearchForPositionResult">AWS
   * API Reference</a></p>
   */
  class AWS_LOCATIONSERVICE_API SearchForPositionResult
  {
  public:
    SearchForPositionResult();
    SearchForPositionResult(Aws::Utils::Json::JsonView jsonValue);
    SearchForPositionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details about the relevant point of interest.</p>
     */
    inline const Place& GetPlace() const{ return m_place; }

    /**
     * <p>Contains details about the relevant point of interest.</p>
     */
    inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }

    /**
     * <p>Contains details about the relevant point of interest.</p>
     */
    inline void SetPlace(const Place& value) { m_placeHasBeenSet = true; m_place = value; }

    /**
     * <p>Contains details about the relevant point of interest.</p>
     */
    inline void SetPlace(Place&& value) { m_placeHasBeenSet = true; m_place = std::move(value); }

    /**
     * <p>Contains details about the relevant point of interest.</p>
     */
    inline SearchForPositionResult& WithPlace(const Place& value) { SetPlace(value); return *this;}

    /**
     * <p>Contains details about the relevant point of interest.</p>
     */
    inline SearchForPositionResult& WithPlace(Place&& value) { SetPlace(std::move(value)); return *this;}

  private:

    Place m_place;
    bool m_placeHasBeenSet;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
