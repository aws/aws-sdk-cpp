/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/DestinationType.h>
#include <aws/fms/model/TargetType.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Describes a route in a route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/Route">AWS API
   * Reference</a></p>
   */
  class Route
  {
  public:
    AWS_FMS_API Route();
    AWS_FMS_API Route(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Route& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of destination for the route.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>The type of destination for the route.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>The type of destination for the route.</p>
     */
    inline void SetDestinationType(const DestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>The type of destination for the route.</p>
     */
    inline void SetDestinationType(DestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>The type of destination for the route.</p>
     */
    inline Route& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p>The type of destination for the route.</p>
     */
    inline Route& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    /**
     * <p>The type of target for the route.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of target for the route.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of target for the route.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of target for the route.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of target for the route.</p>
     */
    inline Route& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of target for the route.</p>
     */
    inline Route& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The destination of the route.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination of the route.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination of the route.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination of the route.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination of the route.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The destination of the route.</p>
     */
    inline Route& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination of the route.</p>
     */
    inline Route& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The destination of the route.</p>
     */
    inline Route& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The route's target.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The route's target.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The route's target.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The route's target.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The route's target.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The route's target.</p>
     */
    inline Route& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The route's target.</p>
     */
    inline Route& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The route's target.</p>
     */
    inline Route& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    DestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
