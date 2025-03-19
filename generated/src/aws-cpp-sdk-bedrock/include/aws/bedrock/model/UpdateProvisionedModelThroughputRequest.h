/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class UpdateProvisionedModelThroughputRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API UpdateProvisionedModelThroughputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedModelThroughput"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or name of the Provisioned Throughput to
     * update.</p>
     */
    inline const Aws::String& GetProvisionedModelId() const { return m_provisionedModelId; }
    inline bool ProvisionedModelIdHasBeenSet() const { return m_provisionedModelIdHasBeenSet; }
    template<typename ProvisionedModelIdT = Aws::String>
    void SetProvisionedModelId(ProvisionedModelIdT&& value) { m_provisionedModelIdHasBeenSet = true; m_provisionedModelId = std::forward<ProvisionedModelIdT>(value); }
    template<typename ProvisionedModelIdT = Aws::String>
    UpdateProvisionedModelThroughputRequest& WithProvisionedModelId(ProvisionedModelIdT&& value) { SetProvisionedModelId(std::forward<ProvisionedModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for this Provisioned Throughput.</p>
     */
    inline const Aws::String& GetDesiredProvisionedModelName() const { return m_desiredProvisionedModelName; }
    inline bool DesiredProvisionedModelNameHasBeenSet() const { return m_desiredProvisionedModelNameHasBeenSet; }
    template<typename DesiredProvisionedModelNameT = Aws::String>
    void SetDesiredProvisionedModelName(DesiredProvisionedModelNameT&& value) { m_desiredProvisionedModelNameHasBeenSet = true; m_desiredProvisionedModelName = std::forward<DesiredProvisionedModelNameT>(value); }
    template<typename DesiredProvisionedModelNameT = Aws::String>
    UpdateProvisionedModelThroughputRequest& WithDesiredProvisionedModelName(DesiredProvisionedModelNameT&& value) { SetDesiredProvisionedModelName(std::forward<DesiredProvisionedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new model to associate with this
     * Provisioned Throughput. You can't specify this field if this Provisioned
     * Throughput is associated with a base model.</p> <p>If this Provisioned
     * Throughput is associated with a custom model, you can specify one of the
     * following options:</p> <ul> <li> <p>The base model from which the custom model
     * was customized.</p> </li> <li> <p>Another custom model that was customized from
     * the same base model as the custom model.</p> </li> </ul>
     */
    inline const Aws::String& GetDesiredModelId() const { return m_desiredModelId; }
    inline bool DesiredModelIdHasBeenSet() const { return m_desiredModelIdHasBeenSet; }
    template<typename DesiredModelIdT = Aws::String>
    void SetDesiredModelId(DesiredModelIdT&& value) { m_desiredModelIdHasBeenSet = true; m_desiredModelId = std::forward<DesiredModelIdT>(value); }
    template<typename DesiredModelIdT = Aws::String>
    UpdateProvisionedModelThroughputRequest& WithDesiredModelId(DesiredModelIdT&& value) { SetDesiredModelId(std::forward<DesiredModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_provisionedModelId;
    bool m_provisionedModelIdHasBeenSet = false;

    Aws::String m_desiredProvisionedModelName;
    bool m_desiredProvisionedModelNameHasBeenSet = false;

    Aws::String m_desiredModelId;
    bool m_desiredModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
