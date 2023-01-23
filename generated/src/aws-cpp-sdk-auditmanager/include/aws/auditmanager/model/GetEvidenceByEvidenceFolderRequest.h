/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetEvidenceByEvidenceFolderRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceByEvidenceFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEvidenceByEvidenceFolder"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The identifier for the control set. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the control set. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const{ return m_evidenceFolderId; }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(const Aws::String& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = value; }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(Aws::String&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::move(value); }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(const char* value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId.assign(value); }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithEvidenceFolderId(const Aws::String& value) { SetEvidenceFolderId(value); return *this;}

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithEvidenceFolderId(Aws::String&& value) { SetEvidenceFolderId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithEvidenceFolderId(const char* value) { SetEvidenceFolderId(value); return *this;}


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline GetEvidenceByEvidenceFolderRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_evidenceFolderId;
    bool m_evidenceFolderIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
