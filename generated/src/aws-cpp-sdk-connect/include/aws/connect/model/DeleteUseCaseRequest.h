/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DeleteUseCaseRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteUseCaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUseCase"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DeleteUseCaseRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const { return m_integrationAssociationId; }
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }
    template<typename IntegrationAssociationIdT = Aws::String>
    void SetIntegrationAssociationId(IntegrationAssociationIdT&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::forward<IntegrationAssociationIdT>(value); }
    template<typename IntegrationAssociationIdT = Aws::String>
    DeleteUseCaseRequest& WithIntegrationAssociationId(IntegrationAssociationIdT&& value) { SetIntegrationAssociationId(std::forward<IntegrationAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the use case.</p>
     */
    inline const Aws::String& GetUseCaseId() const { return m_useCaseId; }
    inline bool UseCaseIdHasBeenSet() const { return m_useCaseIdHasBeenSet; }
    template<typename UseCaseIdT = Aws::String>
    void SetUseCaseId(UseCaseIdT&& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = std::forward<UseCaseIdT>(value); }
    template<typename UseCaseIdT = Aws::String>
    DeleteUseCaseRequest& WithUseCaseId(UseCaseIdT&& value) { SetUseCaseId(std::forward<UseCaseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;

    Aws::String m_useCaseId;
    bool m_useCaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
