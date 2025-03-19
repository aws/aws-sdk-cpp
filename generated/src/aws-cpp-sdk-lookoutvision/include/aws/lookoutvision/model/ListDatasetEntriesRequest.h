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
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesRequest() = default;

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
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    ListDatasetEntriesRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset that you want to list. Specify <code>train</code> to
     * list the training dataset. Specify <code>test</code> to list the test dataset.
     * If you have a single dataset project, specify <code>train</code>.</p>
     */
    inline const Aws::String& GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    template<typename DatasetTypeT = Aws::String>
    void SetDatasetType(DatasetTypeT&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::forward<DatasetTypeT>(value); }
    template<typename DatasetTypeT = Aws::String>
    ListDatasetEntriesRequest& WithDatasetType(DatasetTypeT&& value) { SetDatasetType(std::forward<DatasetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to include labeled entries, otherwise specify
     * <code>false</code>. If you don't specify a value, Lookout for Vision returns all
     * entries.</p>
     */
    inline bool GetLabeled() const { return m_labeled; }
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
    inline const Aws::String& GetAnomalyClass() const { return m_anomalyClass; }
    inline bool AnomalyClassHasBeenSet() const { return m_anomalyClassHasBeenSet; }
    template<typename AnomalyClassT = Aws::String>
    void SetAnomalyClass(AnomalyClassT&& value) { m_anomalyClassHasBeenSet = true; m_anomalyClass = std::forward<AnomalyClassT>(value); }
    template<typename AnomalyClassT = Aws::String>
    ListDatasetEntriesRequest& WithAnomalyClass(AnomalyClassT&& value) { SetAnomalyClass(std::forward<AnomalyClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only includes entries before the specified date in the response. For example,
     * <code>2020-06-23T00:00:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeCreationDate() const { return m_beforeCreationDate; }
    inline bool BeforeCreationDateHasBeenSet() const { return m_beforeCreationDateHasBeenSet; }
    template<typename BeforeCreationDateT = Aws::Utils::DateTime>
    void SetBeforeCreationDate(BeforeCreationDateT&& value) { m_beforeCreationDateHasBeenSet = true; m_beforeCreationDate = std::forward<BeforeCreationDateT>(value); }
    template<typename BeforeCreationDateT = Aws::Utils::DateTime>
    ListDatasetEntriesRequest& WithBeforeCreationDate(BeforeCreationDateT&& value) { SetBeforeCreationDate(std::forward<BeforeCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only includes entries after the specified date in the response. For example,
     * <code>2020-06-23T00:00:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterCreationDate() const { return m_afterCreationDate; }
    inline bool AfterCreationDateHasBeenSet() const { return m_afterCreationDateHasBeenSet; }
    template<typename AfterCreationDateT = Aws::Utils::DateTime>
    void SetAfterCreationDate(AfterCreationDateT&& value) { m_afterCreationDateHasBeenSet = true; m_afterCreationDate = std::forward<AfterCreationDateT>(value); }
    template<typename AfterCreationDateT = Aws::Utils::DateTime>
    ListDatasetEntriesRequest& WithAfterCreationDate(AfterCreationDateT&& value) { SetAfterCreationDate(std::forward<AfterCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of dataset
     * entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetEntriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::String& GetSourceRefContains() const { return m_sourceRefContains; }
    inline bool SourceRefContainsHasBeenSet() const { return m_sourceRefContainsHasBeenSet; }
    template<typename SourceRefContainsT = Aws::String>
    void SetSourceRefContains(SourceRefContainsT&& value) { m_sourceRefContainsHasBeenSet = true; m_sourceRefContains = std::forward<SourceRefContainsT>(value); }
    template<typename SourceRefContainsT = Aws::String>
    ListDatasetEntriesRequest& WithSourceRefContains(SourceRefContainsT&& value) { SetSourceRefContains(std::forward<SourceRefContainsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    bool m_labeled{false};
    bool m_labeledHasBeenSet = false;

    Aws::String m_anomalyClass;
    bool m_anomalyClassHasBeenSet = false;

    Aws::Utils::DateTime m_beforeCreationDate{};
    bool m_beforeCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_afterCreationDate{};
    bool m_afterCreationDateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_sourceRefContains;
    bool m_sourceRefContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
