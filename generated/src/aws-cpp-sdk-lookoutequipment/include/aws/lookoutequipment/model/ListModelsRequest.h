/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListModelsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListModelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModels"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * machine learning models. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the maximum number of machine learning models to list. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the machine learning model. </p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListModelsRequest& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning of the name of the machine learning models being listed. </p>
     */
    inline const Aws::String& GetModelNameBeginsWith() const { return m_modelNameBeginsWith; }
    inline bool ModelNameBeginsWithHasBeenSet() const { return m_modelNameBeginsWithHasBeenSet; }
    template<typename ModelNameBeginsWithT = Aws::String>
    void SetModelNameBeginsWith(ModelNameBeginsWithT&& value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith = std::forward<ModelNameBeginsWithT>(value); }
    template<typename ModelNameBeginsWithT = Aws::String>
    ListModelsRequest& WithModelNameBeginsWith(ModelNameBeginsWithT&& value) { SetModelNameBeginsWith(std::forward<ModelNameBeginsWithT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning of the name of the dataset of the machine learning models to be
     * listed. </p>
     */
    inline const Aws::String& GetDatasetNameBeginsWith() const { return m_datasetNameBeginsWith; }
    inline bool DatasetNameBeginsWithHasBeenSet() const { return m_datasetNameBeginsWithHasBeenSet; }
    template<typename DatasetNameBeginsWithT = Aws::String>
    void SetDatasetNameBeginsWith(DatasetNameBeginsWithT&& value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith = std::forward<DatasetNameBeginsWithT>(value); }
    template<typename DatasetNameBeginsWithT = Aws::String>
    ListModelsRequest& WithDatasetNameBeginsWith(DatasetNameBeginsWithT&& value) { SetDatasetNameBeginsWith(std::forward<DatasetNameBeginsWithT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_modelNameBeginsWith;
    bool m_modelNameBeginsWithHasBeenSet = false;

    Aws::String m_datasetNameBeginsWith;
    bool m_datasetNameBeginsWithHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
