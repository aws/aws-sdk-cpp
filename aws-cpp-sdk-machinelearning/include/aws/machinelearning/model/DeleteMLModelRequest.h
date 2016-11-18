﻿/*
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API DeleteMLModelRequest : public MachineLearningRequest
  {
  public:
    DeleteMLModelRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline DeleteMLModelRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline DeleteMLModelRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline DeleteMLModelRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

  private:
    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
