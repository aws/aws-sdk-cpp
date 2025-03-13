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
    AWS_MACHINELEARNING_API PredictRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Predict"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    PredictRequest& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetRecord() const { return m_record; }
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
    template<typename RecordT = Aws::Map<Aws::String, Aws::String>>
    void SetRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record = std::forward<RecordT>(value); }
    template<typename RecordT = Aws::Map<Aws::String, Aws::String>>
    PredictRequest& WithRecord(RecordT&& value) { SetRecord(std::forward<RecordT>(value)); return *this;}
    template<typename RecordKeyT = Aws::String, typename RecordValueT = Aws::String>
    PredictRequest& AddRecord(RecordKeyT&& key, RecordValueT&& value) {
      m_recordHasBeenSet = true; m_record.emplace(std::forward<RecordKeyT>(key), std::forward<RecordValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetPredictEndpoint() const { return m_predictEndpoint; }
    inline bool PredictEndpointHasBeenSet() const { return m_predictEndpointHasBeenSet; }
    template<typename PredictEndpointT = Aws::String>
    void SetPredictEndpoint(PredictEndpointT&& value) { m_predictEndpointHasBeenSet = true; m_predictEndpoint = std::forward<PredictEndpointT>(value); }
    template<typename PredictEndpointT = Aws::String>
    PredictRequest& WithPredictEndpoint(PredictEndpointT&& value) { SetPredictEndpoint(std::forward<PredictEndpointT>(value)); return *this;}
    ///@}
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
