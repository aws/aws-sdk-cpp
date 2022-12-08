/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentMetadataItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{
  class ListAssessmentsResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentsResult();
    AWS_AUDITMANAGER_API ListAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline const Aws::Vector<AssessmentMetadataItem>& GetAssessmentMetadata() const{ return m_assessmentMetadata; }

    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline void SetAssessmentMetadata(const Aws::Vector<AssessmentMetadataItem>& value) { m_assessmentMetadata = value; }

    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline void SetAssessmentMetadata(Aws::Vector<AssessmentMetadataItem>&& value) { m_assessmentMetadata = std::move(value); }

    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline ListAssessmentsResult& WithAssessmentMetadata(const Aws::Vector<AssessmentMetadataItem>& value) { SetAssessmentMetadata(value); return *this;}

    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline ListAssessmentsResult& WithAssessmentMetadata(Aws::Vector<AssessmentMetadataItem>&& value) { SetAssessmentMetadata(std::move(value)); return *this;}

    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline ListAssessmentsResult& AddAssessmentMetadata(const AssessmentMetadataItem& value) { m_assessmentMetadata.push_back(value); return *this; }

    /**
     * <p> The metadata that's associated with the assessment. </p>
     */
    inline ListAssessmentsResult& AddAssessmentMetadata(AssessmentMetadataItem&& value) { m_assessmentMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssessmentMetadataItem> m_assessmentMetadata;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
