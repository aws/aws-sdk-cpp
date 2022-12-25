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
  class DeleteServiceRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteService"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline DeleteServiceRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline DeleteServiceRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p>Deletes a Refactor Spaces service.</p>  <p>The
     * <code>RefactorSpacesSecurityGroup</code> security group must be removed from all
     * Amazon Web Services resources in the virtual private cloud (VPC) prior to
     * deleting a service with a URL endpoint in a VPC.</p> 
     */
    inline DeleteServiceRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}


    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline DeleteServiceRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline DeleteServiceRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment that the service is in.</p>
     */
    inline DeleteServiceRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The ID of the service to delete.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline DeleteServiceRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline DeleteServiceRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the service to delete.</p>
     */
    inline DeleteServiceRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}

  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
