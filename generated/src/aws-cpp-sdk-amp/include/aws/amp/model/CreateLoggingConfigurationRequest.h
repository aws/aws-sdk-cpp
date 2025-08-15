/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateLoggingConfiguration</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateLoggingConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class CreateLoggingConfigurationRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateLoggingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoggingConfiguration"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace to create the logging configuration for.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateLoggingConfigurationRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudWatch log group to which the vended log data will be
     * published. This log group must exist prior to calling this operation.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    CreateLoggingConfigurationRequest& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateLoggingConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
