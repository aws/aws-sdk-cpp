/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API DeregisterJobDefinitionRequest : public BatchRequest
  {
  public:
    DeregisterJobDefinitionRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }

    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline DeregisterJobDefinitionRequest& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline DeregisterJobDefinitionRequest& WithJobDefinition(Aws::String&& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The name and revision (<code>name:revision</code>) or full Amazon Resource
     * Name (ARN) of the job definition to deregister. </p>
     */
    inline DeregisterJobDefinitionRequest& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}

  private:
    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
