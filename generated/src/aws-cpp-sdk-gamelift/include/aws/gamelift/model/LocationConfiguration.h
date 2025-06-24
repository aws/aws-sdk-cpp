/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
   * <p>A remote location where a multi-location fleet can deploy game servers for
   * game hosting. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationConfiguration">AWS
   * API Reference</a></p>
   */
  class LocationConfiguration
  {
  public:
    AWS_GAMELIFT_API LocationConfiguration() = default;
    AWS_GAMELIFT_API LocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Web Services Region code, such as <code>us-west-2</code>. For a
     * list of supported Regions and Local Zones, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-regions.html">
     * Amazon GameLift Servers service locations</a> for managed hosting.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    LocationConfiguration& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
