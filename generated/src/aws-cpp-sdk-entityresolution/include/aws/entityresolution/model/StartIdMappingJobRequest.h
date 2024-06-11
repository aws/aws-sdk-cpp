﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdMappingJobOutputSource.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class StartIdMappingJobRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API StartIdMappingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartIdMappingJob"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects.</p>
     */
    inline const Aws::Vector<IdMappingJobOutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }
    inline bool OutputSourceConfigHasBeenSet() const { return m_outputSourceConfigHasBeenSet; }
    inline void SetOutputSourceConfig(const Aws::Vector<IdMappingJobOutputSource>& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = value; }
    inline void SetOutputSourceConfig(Aws::Vector<IdMappingJobOutputSource>&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = std::move(value); }
    inline StartIdMappingJobRequest& WithOutputSourceConfig(const Aws::Vector<IdMappingJobOutputSource>& value) { SetOutputSourceConfig(value); return *this;}
    inline StartIdMappingJobRequest& WithOutputSourceConfig(Aws::Vector<IdMappingJobOutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}
    inline StartIdMappingJobRequest& AddOutputSourceConfig(const IdMappingJobOutputSource& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.push_back(value); return *this; }
    inline StartIdMappingJobRequest& AddOutputSourceConfig(IdMappingJobOutputSource&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the ID mapping job to be retrieved.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }
    inline StartIdMappingJobRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline StartIdMappingJobRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline StartIdMappingJobRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}
  private:

    Aws::Vector<IdMappingJobOutputSource> m_outputSourceConfig;
    bool m_outputSourceConfigHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
