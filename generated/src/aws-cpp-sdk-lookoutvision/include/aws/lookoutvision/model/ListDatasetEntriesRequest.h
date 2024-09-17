/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class ListDatasetEntriesRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetEntries"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the project that contains the dataset that you want to list.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline ListDatasetEntriesRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline ListDatasetEntriesRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline ListDatasetEntriesRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset that you want to list. Specify <code>train</code> to
     * list the training dataset. Specify <code>test</code> to list the test dataset.
     * If you have a single dataset project, specify <code>train</code>.</p>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }
    inline ListDatasetEntriesRequest& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}
    inline ListDatasetEntriesRequest& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}
    inline ListDatasetEntriesRequest& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to include labeled entries, otherwise specify
     * <code>false</code>. If you don't specify a value, Lookout for Vision returns all
     * entries.</p>
     */
    inline bool GetLabeled() const{ return m_labeled; }
    inline bool LabeledHasBeenSet() const { return m_labeledHasBeenSet; }
    inline void SetLabeled(bool value) { m_labeledHasBeenSet = true; m_labeled = value; }
    inline ListDatasetEntriesRequest& WithLabeled(bool value) { SetLabeled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>normal</code> to include only normal images. Specify
     * <code>anomaly</code> to only include anomalous entries. If you don't specify a
     * value, Amazon Lookout for Vision returns normal and anomalous images.</p>
     */
    inline const Aws::String& GetAnomalyClass() const{ return m_anomalyClass; }
    inline bool AnomalyClassHasBeenSet() const { return m_anomalyClassHasBeenSet; }
    inline void SetAnomalyClass(const Aws::String& value) { m_anomalyClassHasBeenSet = true; m_anomalyClass = value; }
    inline void SetAnomalyClass(Aws::String&& value) { m_anomalyClassHasBeenSet = true; m_anomalyClass = std::move(value); }
    inline void SetAnomalyClass(const char* value) { m_anomalyClassHasBeenSet = true; m_anomalyClass.assign(value); }
    inline ListDatasetEntriesRequest& WithAnomalyClass(const Aws::String& value) { SetAnomalyClass(value); return *this;}
    inline ListDatasetEntriesRequest& WithAnomalyClass(Aws::String&& value) { SetAnomalyClass(std::move(value)); return *this;}
    inline ListDatasetEntriesRequest& WithAnomalyClass(const char* value) { SetAnomalyClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only includes entries before the specified date in the response. For example,
     * <code>2020-06-23T00:00:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeCreationDate() const{ return m_beforeCreationDate; }
    inline bool BeforeCreationDateHasBeenSet() const { return m_beforeCreationDateHasBeenSet; }
    inline void SetBeforeCreationDate(const Aws::Utils::DateTime& value) { m_beforeCreationDateHasBeenSet = true; m_beforeCreationDate = value; }
    inline void SetBeforeCreationDate(Aws::Utils::DateTime&& value) { m_beforeCreationDateHasBeenSet = true; m_beforeCreationDate = std::move(value); }
    inline ListDatasetEntriesRequest& WithBeforeCreationDate(const Aws::Utils::DateTime& value) { SetBeforeCreationDate(value); return *this;}
    inline ListDatasetEntriesRequest& WithBeforeCreationDate(Aws::Utils::DateTime&& value) { SetBeforeCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only includes entries after the specified date in the response. For example,
     * <code>2020-06-23T00:00:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterCreationDate() const{ return m_afterCreationDate; }
    inline bool AfterCreationDateHasBeenSet() const { return m_afterCreationDateHasBeenSet; }
    inline void SetAfterCreationDate(const Aws::Utils::DateTime& value) { m_afterCreationDateHasBeenSet = true; m_afterCreationDate = value; }
    inline void SetAfterCreationDate(Aws::Utils::DateTime&& value) { m_afterCreationDateHasBeenSet = true; m_afterCreationDate = std::move(value); }
    inline ListDatasetEntriesRequest& WithAfterCreationDate(const Aws::Utils::DateTime& value) { SetAfterCreationDate(value); return *this;}
    inline ListDatasetEntriesRequest& WithAfterCreationDate(Aws::Utils::DateTime&& value) { SetAfterCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of dataset
     * entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDatasetEntriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetEntriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetEntriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDatasetEntriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Perform a "contains" search on the values of the <code>source-ref</code> key
     * within the dataset. For example a value of "IMG_17" returns all JSON Lines where
     * the <code>source-ref</code> key value matches <i>*IMG_17*</i>.</p>
     */
    inline const Aws::String& GetSourceRefContains() const{ return m_sourceRefContains; }
    inline bool SourceRefContainsHasBeenSet() const { return m_sourceRefContainsHasBeenSet; }
    inline void SetSourceRefContains(const Aws::String& value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains = value; }
    inline void SetSourceRefContains(Aws::String&& value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains = std::move(value); }
    inline void SetSourceRefContains(const char* value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains.assign(value); }
    inline ListDatasetEntriesRequest& WithSourceRefContains(const Aws::String& value) { SetSourceRefContains(value); return *this;}
    inline ListDatasetEntriesRequest& WithSourceRefContains(Aws::String&& value) { SetSourceRefContains(std::move(value)); return *this;}
    inline ListDatasetEntriesRequest& WithSourceRefContains(const char* value) { SetSourceRefContains(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    bool m_labeled;
    bool m_labeledHasBeenSet = false;

    Aws::String m_anomalyClass;
    bool m_anomalyClassHasBeenSet = false;

    Aws::Utils::DateTime m_beforeCreationDate;
    bool m_beforeCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_afterCreationDate;
    bool m_afterCreationDateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_sourceRefContains;
    bool m_sourceRefContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
