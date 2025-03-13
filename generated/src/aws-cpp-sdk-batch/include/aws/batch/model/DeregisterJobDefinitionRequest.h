/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class DeregisterJobDefinitionRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DeregisterJobDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterJobDefinition"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister.</p>
     */
    inline const Aws::String& GetJobDefinition() const { return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    template<typename JobDefinitionT = Aws::String>
    void SetJobDefinition(JobDefinitionT&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::forward<JobDefinitionT>(value); }
    template<typename JobDefinitionT = Aws::String>
    DeregisterJobDefinitionRequest& WithJobDefinition(JobDefinitionT&& value) { SetJobDefinition(std::forward<JobDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
