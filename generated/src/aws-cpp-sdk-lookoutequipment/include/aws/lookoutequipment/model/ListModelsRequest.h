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
    AWS_LOOKOUTEQUIPMENT_API ListModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModels"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline ListModelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline ListModelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of ML
     * models. </p>
     */
    inline ListModelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Specifies the maximum number of ML models to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Specifies the maximum number of ML models to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Specifies the maximum number of ML models to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Specifies the maximum number of ML models to list. </p>
     */
    inline ListModelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The status of the ML model. </p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ML model. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the ML model. </p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ML model. </p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the ML model. </p>
     */
    inline ListModelsRequest& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ML model. </p>
     */
    inline ListModelsRequest& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline const Aws::String& GetModelNameBeginsWith() const{ return m_modelNameBeginsWith; }

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline bool ModelNameBeginsWithHasBeenSet() const { return m_modelNameBeginsWithHasBeenSet; }

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline void SetModelNameBeginsWith(const Aws::String& value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith = value; }

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline void SetModelNameBeginsWith(Aws::String&& value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith = std::move(value); }

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline void SetModelNameBeginsWith(const char* value) { m_modelNameBeginsWithHasBeenSet = true; m_modelNameBeginsWith.assign(value); }

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline ListModelsRequest& WithModelNameBeginsWith(const Aws::String& value) { SetModelNameBeginsWith(value); return *this;}

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline ListModelsRequest& WithModelNameBeginsWith(Aws::String&& value) { SetModelNameBeginsWith(std::move(value)); return *this;}

    /**
     * <p>The beginning of the name of the ML models being listed. </p>
     */
    inline ListModelsRequest& WithModelNameBeginsWith(const char* value) { SetModelNameBeginsWith(value); return *this;}


    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline const Aws::String& GetDatasetNameBeginsWith() const{ return m_datasetNameBeginsWith; }

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline bool DatasetNameBeginsWithHasBeenSet() const { return m_datasetNameBeginsWithHasBeenSet; }

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline void SetDatasetNameBeginsWith(const Aws::String& value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith = value; }

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline void SetDatasetNameBeginsWith(Aws::String&& value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith = std::move(value); }

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline void SetDatasetNameBeginsWith(const char* value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith.assign(value); }

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline ListModelsRequest& WithDatasetNameBeginsWith(const Aws::String& value) { SetDatasetNameBeginsWith(value); return *this;}

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline ListModelsRequest& WithDatasetNameBeginsWith(Aws::String&& value) { SetDatasetNameBeginsWith(std::move(value)); return *this;}

    /**
     * <p>The beginning of the name of the dataset of the ML models to be listed. </p>
     */
    inline ListModelsRequest& WithDatasetNameBeginsWith(const char* value) { SetDatasetNameBeginsWith(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_modelNameBeginsWith;
    bool m_modelNameBeginsWithHasBeenSet = false;

    Aws::String m_datasetNameBeginsWith;
    bool m_datasetNameBeginsWithHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
