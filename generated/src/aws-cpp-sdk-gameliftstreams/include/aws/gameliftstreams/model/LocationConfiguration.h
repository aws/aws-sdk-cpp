/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
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
namespace GameLiftStreams
{
namespace Model
{

  /**
   * <p>Configuration settings that define a stream group's stream capacity for a
   * location. When configuring a location for the first time, you must specify a
   * numeric value for at least one of the two capacity types. To update the capacity
   * for an existing stream group, call <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_UpdateStreamGroup.html">UpdateStreamGroup</a>.
   * To add a new location and specify its capacity, call <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_AddStreamGroupLocations.html">AddStreamGroupLocations</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/LocationConfiguration">AWS
   * API Reference</a></p>
   */
  class LocationConfiguration
  {
  public:
    AWS_GAMELIFTSTREAMS_API LocationConfiguration() = default;
    AWS_GAMELIFTSTREAMS_API LocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API LocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A location's name. For example, <code>us-east-1</code>. For a complete list
     * of locations that Amazon GameLift Streams supports, refer to <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
     * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
     * Guide</i>. </p>
     */
    inline const Aws::String& GetLocationName() const { return m_locationName; }
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
    template<typename LocationNameT = Aws::String>
    void SetLocationName(LocationNameT&& value) { m_locationNameHasBeenSet = true; m_locationName = std::forward<LocationNameT>(value); }
    template<typename LocationNameT = Aws::String>
    LocationConfiguration& WithLocationName(LocationNameT&& value) { SetLocationName(std::forward<LocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming capacity that is allocated and ready to handle stream requests
     * without delay. You pay for this capacity whether it's in use or not. Best for
     * quickest time from streaming request to streaming session. Default is 1 when
     * creating a stream group or adding a location.</p>
     */
    inline int GetAlwaysOnCapacity() const { return m_alwaysOnCapacity; }
    inline bool AlwaysOnCapacityHasBeenSet() const { return m_alwaysOnCapacityHasBeenSet; }
    inline void SetAlwaysOnCapacity(int value) { m_alwaysOnCapacityHasBeenSet = true; m_alwaysOnCapacity = value; }
    inline LocationConfiguration& WithAlwaysOnCapacity(int value) { SetAlwaysOnCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming capacity that Amazon GameLift Streams can allocate in response
     * to stream requests, and then de-allocate when the session has terminated. This
     * offers a cost control measure at the expense of a greater startup time
     * (typically under 5 minutes). Default is 0 when creating a stream group or adding
     * a location.</p>
     */
    inline int GetOnDemandCapacity() const { return m_onDemandCapacity; }
    inline bool OnDemandCapacityHasBeenSet() const { return m_onDemandCapacityHasBeenSet; }
    inline void SetOnDemandCapacity(int value) { m_onDemandCapacityHasBeenSet = true; m_onDemandCapacity = value; }
    inline LocationConfiguration& WithOnDemandCapacity(int value) { SetOnDemandCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;

    int m_alwaysOnCapacity{0};
    bool m_alwaysOnCapacityHasBeenSet = false;

    int m_onDemandCapacity{0};
    bool m_onDemandCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
