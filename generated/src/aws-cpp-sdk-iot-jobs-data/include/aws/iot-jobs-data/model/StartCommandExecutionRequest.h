/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot-jobs-data/model/CommandParameterValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

  /**
   */
  class StartCommandExecutionRequest : public IoTJobsDataPlaneRequest
  {
  public:
    AWS_IOTJOBSDATAPLANE_API StartCommandExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCommandExecution"; }

    AWS_IOTJOBSDATAPLANE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the device where the command execution is
     * occurring.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline StartCommandExecutionRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline StartCommandExecutionRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline StartCommandExecutionRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. For example,
     * <code>arn:aws:iot:&lt;region&gt;:&lt;accountid&gt;:command/&lt;commandName&gt;</code>
     * </p>
     */
    inline const Aws::String& GetCommandArn() const{ return m_commandArn; }
    inline bool CommandArnHasBeenSet() const { return m_commandArnHasBeenSet; }
    inline void SetCommandArn(const Aws::String& value) { m_commandArnHasBeenSet = true; m_commandArn = value; }
    inline void SetCommandArn(Aws::String&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::move(value); }
    inline void SetCommandArn(const char* value) { m_commandArnHasBeenSet = true; m_commandArn.assign(value); }
    inline StartCommandExecutionRequest& WithCommandArn(const Aws::String& value) { SetCommandArn(value); return *this;}
    inline StartCommandExecutionRequest& WithCommandArn(Aws::String&& value) { SetCommandArn(std::move(value)); return *this;}
    inline StartCommandExecutionRequest& WithCommandArn(const char* value) { SetCommandArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters that are required by the
     * <code>StartCommandExecution</code> API when performing the command on a
     * device.</p>
     */
    inline const Aws::Map<Aws::String, CommandParameterValue>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, CommandParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, CommandParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline StartCommandExecutionRequest& WithParameters(const Aws::Map<Aws::String, CommandParameterValue>& value) { SetParameters(value); return *this;}
    inline StartCommandExecutionRequest& WithParameters(Aws::Map<Aws::String, CommandParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline StartCommandExecutionRequest& AddParameters(const Aws::String& key, const CommandParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline StartCommandExecutionRequest& AddParameters(Aws::String&& key, const CommandParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline StartCommandExecutionRequest& AddParameters(const Aws::String& key, CommandParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline StartCommandExecutionRequest& AddParameters(Aws::String&& key, CommandParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline StartCommandExecutionRequest& AddParameters(const char* key, CommandParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline StartCommandExecutionRequest& AddParameters(const char* key, const CommandParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time in second the device has to finish the command
     * execution. A timer is started as soon as the command execution is created. If
     * the command execution status is not set to another terminal state before the
     * timer expires, it will automatically update to <code>TIMED_OUT</code>.</p>
     */
    inline long long GetExecutionTimeoutSeconds() const{ return m_executionTimeoutSeconds; }
    inline bool ExecutionTimeoutSecondsHasBeenSet() const { return m_executionTimeoutSecondsHasBeenSet; }
    inline void SetExecutionTimeoutSeconds(long long value) { m_executionTimeoutSecondsHasBeenSet = true; m_executionTimeoutSeconds = value; }
    inline StartCommandExecutionRequest& WithExecutionTimeoutSeconds(long long value) { SetExecutionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token is used to implement idempotency. It ensures that the
     * request completes no more than one time. If you retry a request with the same
     * token and the same parameters, the request will complete successfully. However,
     * if you retry the request using the same token but different parameters, an HTTP
     * 409 conflict occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartCommandExecutionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartCommandExecutionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartCommandExecutionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;

    Aws::Map<Aws::String, CommandParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    long long m_executionTimeoutSeconds;
    bool m_executionTimeoutSecondsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
