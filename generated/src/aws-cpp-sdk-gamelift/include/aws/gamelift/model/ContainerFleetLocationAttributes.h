/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ContainerFleetLocationStatus.h>
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
   * <p>Details about a location in a multi-location container fleet. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerFleetLocationAttributes">AWS
   * API Reference</a></p>
   */
  class ContainerFleetLocationAttributes
  {
  public:
    AWS_GAMELIFT_API ContainerFleetLocationAttributes();
    AWS_GAMELIFT_API ContainerFleetLocationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerFleetLocationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A location identifier.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline ContainerFleetLocationAttributes& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline ContainerFleetLocationAttributes& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline ContainerFleetLocationAttributes& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of fleet activity in the location. </p> <ul> <li> <p>
     * <code>PENDING</code> -- A new container fleet has been requested.</p> </li> <li>
     * <p> <code>CREATING</code> -- A new container fleet resource is being created.
     * </p> </li> <li> <p> <code>CREATED</code> -- A new container fleet resource has
     * been created. No fleet instances have been deployed.</p> </li> <li> <p>
     * <code>ACTIVATING</code> -- New container fleet instances are being deployed.</p>
     * </li> <li> <p> <code>ACTIVE</code> -- The container fleet has been deployed and
     * is ready to host game sessions.</p> </li> <li> <p> <code>UPDATING</code> --
     * Updates to the container fleet is being updated. A deployment is in
     * progress.</p> </li> </ul>
     */
    inline const ContainerFleetLocationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ContainerFleetLocationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ContainerFleetLocationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ContainerFleetLocationAttributes& WithStatus(const ContainerFleetLocationStatus& value) { SetStatus(value); return *this;}
    inline ContainerFleetLocationAttributes& WithStatus(ContainerFleetLocationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    ContainerFleetLocationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
