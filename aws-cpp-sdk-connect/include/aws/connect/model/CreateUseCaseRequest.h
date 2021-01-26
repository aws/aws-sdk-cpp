/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UseCaseType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API CreateUseCaseRequest : public ConnectRequest
  {
  public:
    CreateUseCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUseCase"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateUseCaseRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateUseCaseRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateUseCaseRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const{ return m_integrationAssociationId; }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationId(const Aws::String& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = value; }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationId(Aws::String&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::move(value); }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline void SetIntegrationAssociationId(const char* value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId.assign(value); }

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline CreateUseCaseRequest& WithIntegrationAssociationId(const Aws::String& value) { SetIntegrationAssociationId(value); return *this;}

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline CreateUseCaseRequest& WithIntegrationAssociationId(Aws::String&& value) { SetIntegrationAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the AppIntegration association.</p>
     */
    inline CreateUseCaseRequest& WithIntegrationAssociationId(const char* value) { SetIntegrationAssociationId(value); return *this;}


    /**
     * <p>The type of use case to associate to the AppIntegration association. Each
     * AppIntegration association can have only one of each use case type.</p>
     */
    inline const UseCaseType& GetUseCaseType() const{ return m_useCaseType; }

    /**
     * <p>The type of use case to associate to the AppIntegration association. Each
     * AppIntegration association can have only one of each use case type.</p>
     */
    inline bool UseCaseTypeHasBeenSet() const { return m_useCaseTypeHasBeenSet; }

    /**
     * <p>The type of use case to associate to the AppIntegration association. Each
     * AppIntegration association can have only one of each use case type.</p>
     */
    inline void SetUseCaseType(const UseCaseType& value) { m_useCaseTypeHasBeenSet = true; m_useCaseType = value; }

    /**
     * <p>The type of use case to associate to the AppIntegration association. Each
     * AppIntegration association can have only one of each use case type.</p>
     */
    inline void SetUseCaseType(UseCaseType&& value) { m_useCaseTypeHasBeenSet = true; m_useCaseType = std::move(value); }

    /**
     * <p>The type of use case to associate to the AppIntegration association. Each
     * AppIntegration association can have only one of each use case type.</p>
     */
    inline CreateUseCaseRequest& WithUseCaseType(const UseCaseType& value) { SetUseCaseType(value); return *this;}

    /**
     * <p>The type of use case to associate to the AppIntegration association. Each
     * AppIntegration association can have only one of each use case type.</p>
     */
    inline CreateUseCaseRequest& WithUseCaseType(UseCaseType&& value) { SetUseCaseType(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet;

    UseCaseType m_useCaseType;
    bool m_useCaseTypeHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
