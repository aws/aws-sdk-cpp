/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class PredictRequest : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API PredictRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Predict"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

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
    inline PredictRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline PredictRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetRecord() const{ return m_record; }

    
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }

    
    inline void SetRecord(const Aws::Map<Aws::String, Aws::String>& value) { m_recordHasBeenSet = true; m_record = value; }

    
    inline void SetRecord(Aws::Map<Aws::String, Aws::String>&& value) { m_recordHasBeenSet = true; m_record = std::move(value); }

    
    inline PredictRequest& WithRecord(const Aws::Map<Aws::String, Aws::String>& value) { SetRecord(value); return *this;}

    
    inline PredictRequest& WithRecord(Aws::Map<Aws::String, Aws::String>&& value) { SetRecord(std::move(value)); return *this;}

    
    inline PredictRequest& AddRecord(const Aws::String& key, const Aws::String& value) { m_recordHasBeenSet = true; m_record.emplace(key, value); return *this; }

    
    inline PredictRequest& AddRecord(Aws::String&& key, const Aws::String& value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), value); return *this; }

    
    inline PredictRequest& AddRecord(const Aws::String& key, Aws::String&& value) { m_recordHasBeenSet = true; m_record.emplace(key, std::move(value)); return *this; }

    
    inline PredictRequest& AddRecord(Aws::String&& key, Aws::String&& value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), std::move(value)); return *this; }

    
    inline PredictRequest& AddRecord(const char* key, Aws::String&& value) { m_recordHasBeenSet = true; m_record.emplace(key, std::move(value)); return *this; }

    
    inline PredictRequest& AddRecord(Aws::String&& key, const char* value) { m_recordHasBeenSet = true; m_record.emplace(std::move(key), value); return *this; }

    
    inline PredictRequest& AddRecord(const char* key, const char* value) { m_recordHasBeenSet = true; m_record.emplace(key, value); return *this; }


    
    inline const Aws::String& GetPredictEndpoint() const{ return m_predictEndpoint; }

    
    inline bool PredictEndpointHasBeenSet() const { return m_predictEndpointHasBeenSet; }

    
    inline void SetPredictEndpoint(const Aws::String& value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint = value; }

    
    inline void SetPredictEndpoint(Aws::String&& value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint = std::move(value); }

    
    inline void SetPredictEndpoint(const char* value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint.assign(value); }

    
    inline PredictRequest& WithPredictEndpoint(const Aws::String& value) { SetPredictEndpoint(value); return *this;}

    
    inline PredictRequest& WithPredictEndpoint(Aws::String&& value) { SetPredictEndpoint(std::move(value)); return *this;}

    
    inline PredictRequest& WithPredictEndpoint(const char* value) { SetPredictEndpoint(value); return *this;}

  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_record;
    bool m_recordHasBeenSet = false;

    Aws::String m_predictEndpoint;
    bool m_predictEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
