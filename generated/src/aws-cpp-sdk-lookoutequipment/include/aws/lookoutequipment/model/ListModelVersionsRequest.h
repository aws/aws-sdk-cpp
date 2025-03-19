/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/ModelVersionStatus.h>
#include <aws/lookoutequipment/model/ModelVersionSourceType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListModelVersionsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelVersions"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Then name of the machine learning model for which the model versions are to
     * be listed.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ListModelVersionsRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of machine learning model versions to list.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the results based on the current status of the model version.</p>
     */
    inline ModelVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListModelVersionsRequest& WithStatus(ModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the results based on the way the model version was generated.</p>
     */
    inline ModelVersionSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(ModelVersionSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline ListModelVersionsRequest& WithSourceType(ModelVersionSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results to return all the model versions created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtEndTime() const { return m_createdAtEndTime; }
    inline bool CreatedAtEndTimeHasBeenSet() const { return m_createdAtEndTimeHasBeenSet; }
    template<typename CreatedAtEndTimeT = Aws::Utils::DateTime>
    void SetCreatedAtEndTime(CreatedAtEndTimeT&& value) { m_createdAtEndTimeHasBeenSet = true; m_createdAtEndTime = std::forward<CreatedAtEndTimeT>(value); }
    template<typename CreatedAtEndTimeT = Aws::Utils::DateTime>
    ListModelVersionsRequest& WithCreatedAtEndTime(CreatedAtEndTimeT&& value) { SetCreatedAtEndTime(std::forward<CreatedAtEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results to return all the model versions created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtStartTime() const { return m_createdAtStartTime; }
    inline bool CreatedAtStartTimeHasBeenSet() const { return m_createdAtStartTimeHasBeenSet; }
    template<typename CreatedAtStartTimeT = Aws::Utils::DateTime>
    void SetCreatedAtStartTime(CreatedAtStartTimeT&& value) { m_createdAtStartTimeHasBeenSet = true; m_createdAtStartTime = std::forward<CreatedAtStartTimeT>(value); }
    template<typename CreatedAtStartTimeT = Aws::Utils::DateTime>
    ListModelVersionsRequest& WithCreatedAtStartTime(CreatedAtStartTimeT&& value) { SetCreatedAtStartTime(std::forward<CreatedAtStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the highest version of the model to return in the list.</p>
     */
    inline long long GetMaxModelVersion() const { return m_maxModelVersion; }
    inline bool MaxModelVersionHasBeenSet() const { return m_maxModelVersionHasBeenSet; }
    inline void SetMaxModelVersion(long long value) { m_maxModelVersionHasBeenSet = true; m_maxModelVersion = value; }
    inline ListModelVersionsRequest& WithMaxModelVersion(long long value) { SetMaxModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the lowest version of the model to return in the list.</p>
     */
    inline long long GetMinModelVersion() const { return m_minModelVersion; }
    inline bool MinModelVersionHasBeenSet() const { return m_minModelVersionHasBeenSet; }
    inline void SetMinModelVersion(long long value) { m_minModelVersionHasBeenSet = true; m_minModelVersion = value; }
    inline ListModelVersionsRequest& WithMinModelVersion(long long value) { SetMinModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ModelVersionStatus m_status{ModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ModelVersionSourceType m_sourceType{ModelVersionSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtEndTime{};
    bool m_createdAtEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtStartTime{};
    bool m_createdAtStartTimeHasBeenSet = false;

    long long m_maxModelVersion{0};
    bool m_maxModelVersionHasBeenSet = false;

    long long m_minModelVersion{0};
    bool m_minModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
