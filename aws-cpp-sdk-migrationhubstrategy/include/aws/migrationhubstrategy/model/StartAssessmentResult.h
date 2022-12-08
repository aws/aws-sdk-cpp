/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartAssessmentResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartAssessmentResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The ID of the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentId = value; }

    /**
     * <p> The ID of the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentId = std::move(value); }

    /**
     * <p> The ID of the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentId.assign(value); }

    /**
     * <p> The ID of the assessment. </p>
     */
    inline StartAssessmentResult& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The ID of the assessment. </p>
     */
    inline StartAssessmentResult& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The ID of the assessment. </p>
     */
    inline StartAssessmentResult& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}

  private:

    Aws::String m_assessmentId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
