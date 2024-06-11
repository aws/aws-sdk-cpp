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
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsRequest();

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
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline ListModelVersionsRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline ListModelVersionsRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline ListModelVersionsRequest& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListModelVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListModelVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListModelVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of machine learning model versions to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the results based on the current status of the model version.</p>
     */
    inline const ModelVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListModelVersionsRequest& WithStatus(const ModelVersionStatus& value) { SetStatus(value); return *this;}
    inline ListModelVersionsRequest& WithStatus(ModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the results based on the way the model version was generated.</p>
     */
    inline const ModelVersionSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const ModelVersionSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(ModelVersionSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline ListModelVersionsRequest& WithSourceType(const ModelVersionSourceType& value) { SetSourceType(value); return *this;}
    inline ListModelVersionsRequest& WithSourceType(ModelVersionSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results to return all the model versions created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtEndTime() const{ return m_createdAtEndTime; }
    inline bool CreatedAtEndTimeHasBeenSet() const { return m_createdAtEndTimeHasBeenSet; }
    inline void SetCreatedAtEndTime(const Aws::Utils::DateTime& value) { m_createdAtEndTimeHasBeenSet = true; m_createdAtEndTime = value; }
    inline void SetCreatedAtEndTime(Aws::Utils::DateTime&& value) { m_createdAtEndTimeHasBeenSet = true; m_createdAtEndTime = std::move(value); }
    inline ListModelVersionsRequest& WithCreatedAtEndTime(const Aws::Utils::DateTime& value) { SetCreatedAtEndTime(value); return *this;}
    inline ListModelVersionsRequest& WithCreatedAtEndTime(Aws::Utils::DateTime&& value) { SetCreatedAtEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results to return all the model versions created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtStartTime() const{ return m_createdAtStartTime; }
    inline bool CreatedAtStartTimeHasBeenSet() const { return m_createdAtStartTimeHasBeenSet; }
    inline void SetCreatedAtStartTime(const Aws::Utils::DateTime& value) { m_createdAtStartTimeHasBeenSet = true; m_createdAtStartTime = value; }
    inline void SetCreatedAtStartTime(Aws::Utils::DateTime&& value) { m_createdAtStartTimeHasBeenSet = true; m_createdAtStartTime = std::move(value); }
    inline ListModelVersionsRequest& WithCreatedAtStartTime(const Aws::Utils::DateTime& value) { SetCreatedAtStartTime(value); return *this;}
    inline ListModelVersionsRequest& WithCreatedAtStartTime(Aws::Utils::DateTime&& value) { SetCreatedAtStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the highest version of the model to return in the list.</p>
     */
    inline long long GetMaxModelVersion() const{ return m_maxModelVersion; }
    inline bool MaxModelVersionHasBeenSet() const { return m_maxModelVersionHasBeenSet; }
    inline void SetMaxModelVersion(long long value) { m_maxModelVersionHasBeenSet = true; m_maxModelVersion = value; }
    inline ListModelVersionsRequest& WithMaxModelVersion(long long value) { SetMaxModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the lowest version of the model to return in the list.</p>
     */
    inline long long GetMinModelVersion() const{ return m_minModelVersion; }
    inline bool MinModelVersionHasBeenSet() const { return m_minModelVersionHasBeenSet; }
    inline void SetMinModelVersion(long long value) { m_minModelVersionHasBeenSet = true; m_minModelVersion = value; }
    inline ListModelVersionsRequest& WithMinModelVersion(long long value) { SetMinModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ModelVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    ModelVersionSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtEndTime;
    bool m_createdAtEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtStartTime;
    bool m_createdAtStartTimeHasBeenSet = false;

    long long m_maxModelVersion;
    bool m_maxModelVersionHasBeenSet = false;

    long long m_minModelVersion;
    bool m_minModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
