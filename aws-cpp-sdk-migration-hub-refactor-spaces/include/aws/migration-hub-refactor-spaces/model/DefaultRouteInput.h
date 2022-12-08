/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/RouteActivationState.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p> The configuration for the default route type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DefaultRouteInput">AWS
   * API Reference</a></p>
   */
  class DefaultRouteInput
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API DefaultRouteInput();
    AWS_MIGRATIONHUBREFACTORSPACES_API DefaultRouteInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API DefaultRouteInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline const RouteActivationState& GetActivationState() const{ return m_activationState; }

    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }

    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline void SetActivationState(const RouteActivationState& value) { m_activationStateHasBeenSet = true; m_activationState = value; }

    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline void SetActivationState(RouteActivationState&& value) { m_activationStateHasBeenSet = true; m_activationState = std::move(value); }

    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline DefaultRouteInput& WithActivationState(const RouteActivationState& value) { SetActivationState(value); return *this;}

    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline DefaultRouteInput& WithActivationState(RouteActivationState&& value) { SetActivationState(std::move(value)); return *this;}

  private:

    RouteActivationState m_activationState;
    bool m_activationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
