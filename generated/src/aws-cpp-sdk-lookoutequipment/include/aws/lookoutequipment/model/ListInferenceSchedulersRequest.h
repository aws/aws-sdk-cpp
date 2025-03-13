/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/InferenceSchedulerStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListInferenceSchedulersRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceSchedulersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceSchedulers"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference schedulers. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceSchedulersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the maximum number of inference schedulers to list. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceSchedulersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning of the name of the inference schedulers to be listed. </p>
     */
    inline const Aws::String& GetInferenceSchedulerNameBeginsWith() const { return m_inferenceSchedulerNameBeginsWith; }
    inline bool InferenceSchedulerNameBeginsWithHasBeenSet() const { return m_inferenceSchedulerNameBeginsWithHasBeenSet; }
    template<typename InferenceSchedulerNameBeginsWithT = Aws::String>
    void SetInferenceSchedulerNameBeginsWith(InferenceSchedulerNameBeginsWithT&& value) { m_inferenceSchedulerNameBeginsWithHasBeenSet = true; m_inferenceSchedulerNameBeginsWith = std::forward<InferenceSchedulerNameBeginsWithT>(value); }
    template<typename InferenceSchedulerNameBeginsWithT = Aws::String>
    ListInferenceSchedulersRequest& WithInferenceSchedulerNameBeginsWith(InferenceSchedulerNameBeginsWithT&& value) { SetInferenceSchedulerNameBeginsWith(std::forward<InferenceSchedulerNameBeginsWithT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the machine learning model used by the inference scheduler to be
     * listed. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ListInferenceSchedulersRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current status of the inference schedulers.</p>
     */
    inline InferenceSchedulerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InferenceSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListInferenceSchedulersRequest& WithStatus(InferenceSchedulerStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_inferenceSchedulerNameBeginsWith;
    bool m_inferenceSchedulerNameBeginsWithHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InferenceSchedulerStatus m_status{InferenceSchedulerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
