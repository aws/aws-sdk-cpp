/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
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
  class GetRouteRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRoute"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application. </p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p>The ID of the application. </p>
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p>The ID of the application. </p>
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p>The ID of the application. </p>
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p>The ID of the application. </p>
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p>The ID of the application. </p>
     */
    inline GetRouteRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p>The ID of the application. </p>
     */
    inline GetRouteRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the application. </p>
     */
    inline GetRouteRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}


    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The ID of the environment.</p>
     */
    inline GetRouteRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline GetRouteRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment.</p>
     */
    inline GetRouteRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The ID of the route.</p>
     */
    inline const Aws::String& GetRouteIdentifier() const{ return m_routeIdentifier; }

    /**
     * <p>The ID of the route.</p>
     */
    inline bool RouteIdentifierHasBeenSet() const { return m_routeIdentifierHasBeenSet; }

    /**
     * <p>The ID of the route.</p>
     */
    inline void SetRouteIdentifier(const Aws::String& value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier = value; }

    /**
     * <p>The ID of the route.</p>
     */
    inline void SetRouteIdentifier(Aws::String&& value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier = std::move(value); }

    /**
     * <p>The ID of the route.</p>
     */
    inline void SetRouteIdentifier(const char* value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier.assign(value); }

    /**
     * <p>The ID of the route.</p>
     */
    inline GetRouteRequest& WithRouteIdentifier(const Aws::String& value) { SetRouteIdentifier(value); return *this;}

    /**
     * <p>The ID of the route.</p>
     */
    inline GetRouteRequest& WithRouteIdentifier(Aws::String&& value) { SetRouteIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the route.</p>
     */
    inline GetRouteRequest& WithRouteIdentifier(const char* value) { SetRouteIdentifier(value); return *this;}

  private:

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
