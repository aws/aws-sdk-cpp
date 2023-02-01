/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>The progress values reported by the <code>AssessmentProgress</code> response
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskAssessmentRunProgress">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskAssessmentRunProgress
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRunProgress();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRunProgress(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentRunProgress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of individual assessments that are specified to run.</p>
     */
    inline int GetIndividualAssessmentCount() const{ return m_individualAssessmentCount; }

    /**
     * <p>The number of individual assessments that are specified to run.</p>
     */
    inline bool IndividualAssessmentCountHasBeenSet() const { return m_individualAssessmentCountHasBeenSet; }

    /**
     * <p>The number of individual assessments that are specified to run.</p>
     */
    inline void SetIndividualAssessmentCount(int value) { m_individualAssessmentCountHasBeenSet = true; m_individualAssessmentCount = value; }

    /**
     * <p>The number of individual assessments that are specified to run.</p>
     */
    inline ReplicationTaskAssessmentRunProgress& WithIndividualAssessmentCount(int value) { SetIndividualAssessmentCount(value); return *this;}


    /**
     * <p>The number of individual assessments that have completed, successfully or
     * not.</p>
     */
    inline int GetIndividualAssessmentCompletedCount() const{ return m_individualAssessmentCompletedCount; }

    /**
     * <p>The number of individual assessments that have completed, successfully or
     * not.</p>
     */
    inline bool IndividualAssessmentCompletedCountHasBeenSet() const { return m_individualAssessmentCompletedCountHasBeenSet; }

    /**
     * <p>The number of individual assessments that have completed, successfully or
     * not.</p>
     */
    inline void SetIndividualAssessmentCompletedCount(int value) { m_individualAssessmentCompletedCountHasBeenSet = true; m_individualAssessmentCompletedCount = value; }

    /**
     * <p>The number of individual assessments that have completed, successfully or
     * not.</p>
     */
    inline ReplicationTaskAssessmentRunProgress& WithIndividualAssessmentCompletedCount(int value) { SetIndividualAssessmentCompletedCount(value); return *this;}

  private:

    int m_individualAssessmentCount;
    bool m_individualAssessmentCountHasBeenSet = false;

    int m_individualAssessmentCompletedCount;
    bool m_individualAssessmentCompletedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
