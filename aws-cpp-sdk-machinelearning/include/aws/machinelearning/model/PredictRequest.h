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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API PredictRequest : public MachineLearningRequest
  {
  public:
    PredictRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline PredictRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline PredictRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline PredictRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::String>& GetRecord() const{ return m_record; }

    
    inline void SetRecord(const Aws::Map<Aws::String, Aws::String>& value) { m_recordHasBeenSet = true; m_record = value; }

    
    inline void SetRecord(Aws::Map<Aws::String, Aws::String>&& value) { m_recordHasBeenSet = true; m_record = value; }

    
    inline PredictRequest& WithRecord(const Aws::Map<Aws::String, Aws::String>& value) { SetRecord(value); return *this;}

    
    inline PredictRequest& WithRecord(Aws::Map<Aws::String, Aws::String>&& value) { SetRecord(value); return *this;}

    
    inline PredictRequest& AddRecord(const Aws::String& key, const Aws::String& value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline PredictRequest& AddRecord(Aws::String&& key, const Aws::String& value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline PredictRequest& AddRecord(const Aws::String& key, Aws::String&& value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline PredictRequest& AddRecord(Aws::String&& key, Aws::String&& value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline PredictRequest& AddRecord(const char* key, Aws::String&& value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline PredictRequest& AddRecord(Aws::String&& key, const char* value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline PredictRequest& AddRecord(const char* key, const char* value) { m_recordHasBeenSet = true; m_record[key] = value; return *this; }

    
    inline const Aws::String& GetPredictEndpoint() const{ return m_predictEndpoint; }

    
    inline void SetPredictEndpoint(const Aws::String& value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint = value; }

    
    inline void SetPredictEndpoint(Aws::String&& value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint = value; }

    
    inline void SetPredictEndpoint(const char* value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint.assign(value); }

    
    inline PredictRequest& WithPredictEndpoint(const Aws::String& value) { SetPredictEndpoint(value); return *this;}

    
    inline PredictRequest& WithPredictEndpoint(Aws::String&& value) { SetPredictEndpoint(value); return *this;}

    
    inline PredictRequest& WithPredictEndpoint(const char* value) { SetPredictEndpoint(value); return *this;}

  private:
    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_record;
    bool m_recordHasBeenSet;
    Aws::String m_predictEndpoint;
    bool m_predictEndpointHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
