/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListRetrainingSchedulersRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRetrainingSchedulers"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify this field to only list retraining schedulers whose machine learning
     * models begin with the value you specify. </p>
     */
    inline const Aws::String& GetModelNameBeginsWith() const { return m_modelNameBeginsWith; }
    inline bool ModelNameBeginsWithHasBeenSet() const { return m_modelNameBeginsWithHasBeenSet; }
    template<typename ModelNameBeginsWithT = Aws::String>
    void SetModelNameBeginsWith(ModelNameBeginsWithT&& value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith = std::forward<ModelNameBeginsWithT>(value); }
    template<typename ModelNameBeginsWithT = Aws::String>
    ListRetrainingSchedulersRequest& WithModelNameBeginsWith(ModelNameBeginsWithT&& value) { SetModelNameBeginsWith(std::forward<ModelNameBeginsWithT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this field to only list retraining schedulers whose status matches
     * the value you specify. </p>
     */
    inline RetrainingSchedulerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RetrainingSchedulerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListRetrainingSchedulersRequest& WithStatus(RetrainingSchedulerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the number of results exceeds the maximum, a pagination token is returned.
     * Use the token in the request to show the next page of retraining schedulers.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRetrainingSchedulersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of retraining schedulers to list. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRetrainingSchedulersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_modelNameBeginsWith;
    bool m_modelNameBeginsWithHasBeenSet = false;

    RetrainingSchedulerStatus m_status{RetrainingSchedulerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
