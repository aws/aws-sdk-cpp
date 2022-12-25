/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/migration-hub-refactor-spaces/model/RouteActivationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class UpdateRouteRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API UpdateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoute"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p> If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is updated. </p>
     */
    inline const RouteActivationState& GetActivationState() const{ return m_activationState; }

    /**
     * <p> If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is updated. </p>
     */
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }

    /**
     * <p> If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is updated. </p>
     */
    inline void SetActivationState(const RouteActivationState& value) { m_activationStateHasBeenSet = true; m_activationState = value; }

    /**
     * <p> If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is updated. </p>
     */
    inline void SetActivationState(RouteActivationState&& value) { m_activationStateHasBeenSet = true; m_activationState = std::move(value); }

    /**
     * <p> If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is updated. </p>
     */
    inline UpdateRouteRequest& WithActivationState(const RouteActivationState& value) { SetActivationState(value); return *this;}

    /**
     * <p> If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is updated. </p>
     */
    inline UpdateRouteRequest& WithActivationState(RouteActivationState&& value) { SetActivationState(std::move(value)); return *this;}


    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline UpdateRouteRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline UpdateRouteRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p> The ID of the application within which the route is being updated. </p>
     */
    inline UpdateRouteRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}


    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline UpdateRouteRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline UpdateRouteRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p> The ID of the environment in which the route is being updated. </p>
     */
    inline UpdateRouteRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline const Aws::String& GetRouteIdentifier() const{ return m_routeIdentifier; }

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline bool RouteIdentifierHasBeenSet() const { return m_routeIdentifierHasBeenSet; }

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline void SetRouteIdentifier(const Aws::String& value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier = value; }

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline void SetRouteIdentifier(Aws::String&& value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier = std::move(value); }

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline void SetRouteIdentifier(const char* value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier.assign(value); }

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline UpdateRouteRequest& WithRouteIdentifier(const Aws::String& value) { SetRouteIdentifier(value); return *this;}

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline UpdateRouteRequest& WithRouteIdentifier(Aws::String&& value) { SetRouteIdentifier(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the route to update. </p>
     */
    inline UpdateRouteRequest& WithRouteIdentifier(const char* value) { SetRouteIdentifier(value); return *this;}

  private:

    RouteActivationState m_activationState;
    bool m_activationStateHasBeenSet = false;

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_routeIdentifier;
    bool m_routeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
