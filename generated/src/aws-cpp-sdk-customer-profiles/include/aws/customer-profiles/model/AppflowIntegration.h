/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/FlowDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/Batch.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Details for workflow of type <code>APPFLOW_INTEGRATION</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AppflowIntegration">AWS
   * API Reference</a></p>
   */
  class AppflowIntegration
  {
  public:
    AWS_CUSTOMERPROFILES_API AppflowIntegration() = default;
    AWS_CUSTOMERPROFILES_API AppflowIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FlowDefinition& GetFlowDefinition() const { return m_flowDefinition; }
    inline bool FlowDefinitionHasBeenSet() const { return m_flowDefinitionHasBeenSet; }
    template<typename FlowDefinitionT = FlowDefinition>
    void SetFlowDefinition(FlowDefinitionT&& value) { m_flowDefinitionHasBeenSet = true; m_flowDefinition = std::forward<FlowDefinitionT>(value); }
    template<typename FlowDefinitionT = FlowDefinition>
    AppflowIntegration& WithFlowDefinition(FlowDefinitionT&& value) { SetFlowDefinition(std::forward<FlowDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline const Aws::Vector<Batch>& GetBatches() const { return m_batches; }
    inline bool BatchesHasBeenSet() const { return m_batchesHasBeenSet; }
    template<typename BatchesT = Aws::Vector<Batch>>
    void SetBatches(BatchesT&& value) { m_batchesHasBeenSet = true; m_batches = std::forward<BatchesT>(value); }
    template<typename BatchesT = Aws::Vector<Batch>>
    AppflowIntegration& WithBatches(BatchesT&& value) { SetBatches(std::forward<BatchesT>(value)); return *this;}
    template<typename BatchesT = Batch>
    AppflowIntegration& AddBatches(BatchesT&& value) { m_batchesHasBeenSet = true; m_batches.emplace_back(std::forward<BatchesT>(value)); return *this; }
    ///@}
  private:

    FlowDefinition m_flowDefinition;
    bool m_flowDefinitionHasBeenSet = false;

    Aws::Vector<Batch> m_batches;
    bool m_batchesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
