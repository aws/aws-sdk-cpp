/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/DataCollectionDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AssessmentTarget.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetAssessmentResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of criteria for assessment.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const{ return m_assessmentTargets; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline void SetAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { m_assessmentTargets = value; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline void SetAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { m_assessmentTargets = std::move(value); }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline GetAssessmentResult& WithAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { SetAssessmentTargets(value); return *this;}

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline GetAssessmentResult& WithAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { SetAssessmentTargets(std::move(value)); return *this;}

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline GetAssessmentResult& AddAssessmentTargets(const AssessmentTarget& value) { m_assessmentTargets.push_back(value); return *this; }

    /**
     * <p>List of criteria for assessment.</p>
     */
    inline GetAssessmentResult& AddAssessmentTargets(AssessmentTarget&& value) { m_assessmentTargets.push_back(std::move(value)); return *this; }


    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline const DataCollectionDetails& GetDataCollectionDetails() const{ return m_dataCollectionDetails; }

    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline void SetDataCollectionDetails(const DataCollectionDetails& value) { m_dataCollectionDetails = value; }

    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline void SetDataCollectionDetails(DataCollectionDetails&& value) { m_dataCollectionDetails = std::move(value); }

    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline GetAssessmentResult& WithDataCollectionDetails(const DataCollectionDetails& value) { SetDataCollectionDetails(value); return *this;}

    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline GetAssessmentResult& WithDataCollectionDetails(DataCollectionDetails&& value) { SetDataCollectionDetails(std::move(value)); return *this;}


    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline GetAssessmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline GetAssessmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline GetAssessmentResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;

    DataCollectionDetails m_dataCollectionDetails;

    Aws::String m_id;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
