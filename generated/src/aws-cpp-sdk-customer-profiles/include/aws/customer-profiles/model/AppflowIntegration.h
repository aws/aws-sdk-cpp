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
    AWS_CUSTOMERPROFILES_API AppflowIntegration();
    AWS_CUSTOMERPROFILES_API AppflowIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FlowDefinition& GetFlowDefinition() const{ return m_flowDefinition; }

    
    inline bool FlowDefinitionHasBeenSet() const { return m_flowDefinitionHasBeenSet; }

    
    inline void SetFlowDefinition(const FlowDefinition& value) { m_flowDefinitionHasBeenSet = true; m_flowDefinition = value; }

    
    inline void SetFlowDefinition(FlowDefinition&& value) { m_flowDefinitionHasBeenSet = true; m_flowDefinition = std::move(value); }

    
    inline AppflowIntegration& WithFlowDefinition(const FlowDefinition& value) { SetFlowDefinition(value); return *this;}

    
    inline AppflowIntegration& WithFlowDefinition(FlowDefinition&& value) { SetFlowDefinition(std::move(value)); return *this;}


    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline const Aws::Vector<Batch>& GetBatches() const{ return m_batches; }

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline bool BatchesHasBeenSet() const { return m_batchesHasBeenSet; }

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline void SetBatches(const Aws::Vector<Batch>& value) { m_batchesHasBeenSet = true; m_batches = value; }

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline void SetBatches(Aws::Vector<Batch>&& value) { m_batchesHasBeenSet = true; m_batches = std::move(value); }

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline AppflowIntegration& WithBatches(const Aws::Vector<Batch>& value) { SetBatches(value); return *this;}

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline AppflowIntegration& WithBatches(Aws::Vector<Batch>&& value) { SetBatches(std::move(value)); return *this;}

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline AppflowIntegration& AddBatches(const Batch& value) { m_batchesHasBeenSet = true; m_batches.push_back(value); return *this; }

    /**
     * <p>Batches in workflow of type <code>APPFLOW_INTEGRATION</code>.</p>
     */
    inline AppflowIntegration& AddBatches(Batch&& value) { m_batchesHasBeenSet = true; m_batches.push_back(std::move(value)); return *this; }

  private:

    FlowDefinition m_flowDefinition;
    bool m_flowDefinitionHasBeenSet = false;

    Aws::Vector<Batch> m_batches;
    bool m_batchesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
