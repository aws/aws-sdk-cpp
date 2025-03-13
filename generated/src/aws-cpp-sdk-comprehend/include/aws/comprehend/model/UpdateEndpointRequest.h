/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class UpdateEndpointRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API UpdateEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpoint"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being updated.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    UpdateEndpointRequest& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the new model to use when updating an existing endpoint.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const { return m_desiredModelArn; }
    inline bool DesiredModelArnHasBeenSet() const { return m_desiredModelArnHasBeenSet; }
    template<typename DesiredModelArnT = Aws::String>
    void SetDesiredModelArn(DesiredModelArnT&& value) { m_desiredModelArnHasBeenSet = true; m_desiredModelArn = std::forward<DesiredModelArnT>(value); }
    template<typename DesiredModelArnT = Aws::String>
    UpdateEndpointRequest& WithDesiredModelArn(DesiredModelArnT&& value) { SetDesiredModelArn(std::forward<DesiredModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The desired number of inference units to be used by the model using this
     * endpoint. Each inference unit represents of a throughput of 100 characters per
     * second.</p>
     */
    inline int GetDesiredInferenceUnits() const { return m_desiredInferenceUnits; }
    inline bool DesiredInferenceUnitsHasBeenSet() const { return m_desiredInferenceUnitsHasBeenSet; }
    inline void SetDesiredInferenceUnits(int value) { m_desiredInferenceUnitsHasBeenSet = true; m_desiredInferenceUnits = value; }
    inline UpdateEndpointRequest& WithDesiredInferenceUnits(int value) { SetDesiredInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data access role ARN to use in case the new model is encrypted with a
     * customer CMK.</p>
     */
    inline const Aws::String& GetDesiredDataAccessRoleArn() const { return m_desiredDataAccessRoleArn; }
    inline bool DesiredDataAccessRoleArnHasBeenSet() const { return m_desiredDataAccessRoleArnHasBeenSet; }
    template<typename DesiredDataAccessRoleArnT = Aws::String>
    void SetDesiredDataAccessRoleArn(DesiredDataAccessRoleArnT&& value) { m_desiredDataAccessRoleArnHasBeenSet = true; m_desiredDataAccessRoleArn = std::forward<DesiredDataAccessRoleArnT>(value); }
    template<typename DesiredDataAccessRoleArnT = Aws::String>
    UpdateEndpointRequest& WithDesiredDataAccessRoleArn(DesiredDataAccessRoleArnT&& value) { SetDesiredDataAccessRoleArn(std::forward<DesiredDataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel</p>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    UpdateEndpointRequest& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_desiredModelArn;
    bool m_desiredModelArnHasBeenSet = false;

    int m_desiredInferenceUnits{0};
    bool m_desiredInferenceUnitsHasBeenSet = false;

    Aws::String m_desiredDataAccessRoleArn;
    bool m_desiredDataAccessRoleArnHasBeenSet = false;

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
