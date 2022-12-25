/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationInitiationStep.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Data replication initiation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDataReplicationInitiation">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDataReplicationInitiation
  {
  public:
    AWS_DRS_API RecoveryInstanceDataReplicationInitiation();
    AWS_DRS_API RecoveryInstanceDataReplicationInitiation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationInitiation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline const Aws::String& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline void SetStartDateTime(const Aws::String& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline void SetStartDateTime(Aws::String&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline void SetStartDateTime(const char* value) { m_startDateTimeHasBeenSet = true; m_startDateTime.assign(value); }

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& WithStartDateTime(const Aws::String& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& WithStartDateTime(Aws::String&& value) { SetStartDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& WithStartDateTime(const char* value) { SetStartDateTime(value); return *this;}


    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline const Aws::Vector<RecoveryInstanceDataReplicationInitiationStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline void SetSteps(const Aws::Vector<RecoveryInstanceDataReplicationInitiationStep>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline void SetSteps(Aws::Vector<RecoveryInstanceDataReplicationInitiationStep>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& WithSteps(const Aws::Vector<RecoveryInstanceDataReplicationInitiationStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& WithSteps(Aws::Vector<RecoveryInstanceDataReplicationInitiationStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& AddSteps(const RecoveryInstanceDataReplicationInitiationStep& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>The steps of the current attempt to initiate data replication.</p>
     */
    inline RecoveryInstanceDataReplicationInitiation& AddSteps(RecoveryInstanceDataReplicationInitiationStep&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Vector<RecoveryInstanceDataReplicationInitiationStep> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
