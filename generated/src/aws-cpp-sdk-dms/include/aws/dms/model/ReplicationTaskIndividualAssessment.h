/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

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
   * <p>Provides information that describes an individual assessment from a
   * premigration assessment run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskIndividualAssessment">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskIndividualAssessment
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskIndividualAssessment() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskIndividualAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskIndividualAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of this individual assessment.</p>
     */
    inline const Aws::String& GetReplicationTaskIndividualAssessmentArn() const { return m_replicationTaskIndividualAssessmentArn; }
    inline bool ReplicationTaskIndividualAssessmentArnHasBeenSet() const { return m_replicationTaskIndividualAssessmentArnHasBeenSet; }
    template<typename ReplicationTaskIndividualAssessmentArnT = Aws::String>
    void SetReplicationTaskIndividualAssessmentArn(ReplicationTaskIndividualAssessmentArnT&& value) { m_replicationTaskIndividualAssessmentArnHasBeenSet = true; m_replicationTaskIndividualAssessmentArn = std::forward<ReplicationTaskIndividualAssessmentArnT>(value); }
    template<typename ReplicationTaskIndividualAssessmentArnT = Aws::String>
    ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentArn(ReplicationTaskIndividualAssessmentArnT&& value) { SetReplicationTaskIndividualAssessmentArn(std::forward<ReplicationTaskIndividualAssessmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the premigration assessment run that is created to run this individual
     * assessment.</p>
     */
    inline const Aws::String& GetReplicationTaskAssessmentRunArn() const { return m_replicationTaskAssessmentRunArn; }
    inline bool ReplicationTaskAssessmentRunArnHasBeenSet() const { return m_replicationTaskAssessmentRunArnHasBeenSet; }
    template<typename ReplicationTaskAssessmentRunArnT = Aws::String>
    void SetReplicationTaskAssessmentRunArn(ReplicationTaskAssessmentRunArnT&& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = std::forward<ReplicationTaskAssessmentRunArnT>(value); }
    template<typename ReplicationTaskAssessmentRunArnT = Aws::String>
    ReplicationTaskIndividualAssessment& WithReplicationTaskAssessmentRunArn(ReplicationTaskAssessmentRunArnT&& value) { SetReplicationTaskAssessmentRunArn(std::forward<ReplicationTaskAssessmentRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of this individual assessment.</p>
     */
    inline const Aws::String& GetIndividualAssessmentName() const { return m_individualAssessmentName; }
    inline bool IndividualAssessmentNameHasBeenSet() const { return m_individualAssessmentNameHasBeenSet; }
    template<typename IndividualAssessmentNameT = Aws::String>
    void SetIndividualAssessmentName(IndividualAssessmentNameT&& value) { m_individualAssessmentNameHasBeenSet = true; m_individualAssessmentName = std::forward<IndividualAssessmentNameT>(value); }
    template<typename IndividualAssessmentNameT = Aws::String>
    ReplicationTaskIndividualAssessment& WithIndividualAssessmentName(IndividualAssessmentNameT&& value) { SetIndividualAssessmentName(std::forward<IndividualAssessmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Individual assessment status.</p> <p>This status can have one of the
     * following values:</p> <ul> <li> <p> <code>"cancelled"</code> </p> </li> <li> <p>
     * <code>"error"</code> </p> </li> <li> <p> <code>"failed"</code> </p> </li> <li>
     * <p> <code>"passed"</code> </p> </li> <li> <p> <code>"pending"</code> </p> </li>
     * <li> <p> <code>"skipped"</code> </p> </li> <li> <p> <code>"running"</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ReplicationTaskIndividualAssessment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when this individual assessment was started as part of running the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskIndividualAssessmentStartDate() const { return m_replicationTaskIndividualAssessmentStartDate; }
    inline bool ReplicationTaskIndividualAssessmentStartDateHasBeenSet() const { return m_replicationTaskIndividualAssessmentStartDateHasBeenSet; }
    template<typename ReplicationTaskIndividualAssessmentStartDateT = Aws::Utils::DateTime>
    void SetReplicationTaskIndividualAssessmentStartDate(ReplicationTaskIndividualAssessmentStartDateT&& value) { m_replicationTaskIndividualAssessmentStartDateHasBeenSet = true; m_replicationTaskIndividualAssessmentStartDate = std::forward<ReplicationTaskIndividualAssessmentStartDateT>(value); }
    template<typename ReplicationTaskIndividualAssessmentStartDateT = Aws::Utils::DateTime>
    ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentStartDate(ReplicationTaskIndividualAssessmentStartDateT&& value) { SetReplicationTaskIndividualAssessmentStartDate(std::forward<ReplicationTaskIndividualAssessmentStartDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskIndividualAssessmentArn;
    bool m_replicationTaskIndividualAssessmentArnHasBeenSet = false;

    Aws::String m_replicationTaskAssessmentRunArn;
    bool m_replicationTaskAssessmentRunArnHasBeenSet = false;

    Aws::String m_individualAssessmentName;
    bool m_individualAssessmentNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskIndividualAssessmentStartDate{};
    bool m_replicationTaskIndividualAssessmentStartDateHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
