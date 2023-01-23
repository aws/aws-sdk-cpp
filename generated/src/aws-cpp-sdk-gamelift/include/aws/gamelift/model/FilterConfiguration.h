/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A list of fleet locations where a game session queue can place new game
   * sessions. You can use a filter to temporarily turn off placements for specific
   * locations. For queues that have multi-location fleets, you can use a filter
   * configuration allow placement with some, but not all of these
   * locations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FilterConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterConfiguration
  {
  public:
    AWS_GAMELIFT_API FilterConfiguration();
    AWS_GAMELIFT_API FilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedLocations() const{ return m_allowedLocations; }

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline bool AllowedLocationsHasBeenSet() const { return m_allowedLocationsHasBeenSet; }

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline void SetAllowedLocations(const Aws::Vector<Aws::String>& value) { m_allowedLocationsHasBeenSet = true; m_allowedLocations = value; }

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline void SetAllowedLocations(Aws::Vector<Aws::String>&& value) { m_allowedLocationsHasBeenSet = true; m_allowedLocations = std::move(value); }

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline FilterConfiguration& WithAllowedLocations(const Aws::Vector<Aws::String>& value) { SetAllowedLocations(value); return *this;}

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline FilterConfiguration& WithAllowedLocations(Aws::Vector<Aws::String>&& value) { SetAllowedLocations(std::move(value)); return *this;}

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline FilterConfiguration& AddAllowedLocations(const Aws::String& value) { m_allowedLocationsHasBeenSet = true; m_allowedLocations.push_back(value); return *this; }

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline FilterConfiguration& AddAllowedLocations(Aws::String&& value) { m_allowedLocationsHasBeenSet = true; m_allowedLocations.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of locations to allow game session placement in, in the form of
     * Amazon Web Services Region codes such as <code>us-west-2</code>. </p>
     */
    inline FilterConfiguration& AddAllowedLocations(const char* value) { m_allowedLocationsHasBeenSet = true; m_allowedLocations.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowedLocations;
    bool m_allowedLocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
