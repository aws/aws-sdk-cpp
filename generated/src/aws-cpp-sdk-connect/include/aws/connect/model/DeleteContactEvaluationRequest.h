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
  class DeleteContactEvaluationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteContactEvaluationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContactEvaluation"; }

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
    DeleteContactEvaluationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the contact evaluation.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    DeleteContactEvaluationRequest& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
