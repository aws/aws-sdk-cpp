/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/model/ProtectedJobType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ProtectedJobParameters.h>
#include <aws/cleanrooms/model/ProtectedJobResultConfigurationInput.h>
#include <aws/cleanrooms/model/ProtectedJobComputeConfiguration.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class StartProtectedJobRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API StartProtectedJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartProtectedJob"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The type of protected job to start.</p>
     */
    inline ProtectedJobType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ProtectedJobType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartProtectedJobRequest& WithType(ProtectedJobType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the membership to run this job against. Currently
     * accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    StartProtectedJobRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The job parameters.</p>
     */
    inline const ProtectedJobParameters& GetJobParameters() const { return m_jobParameters; }
    inline bool JobParametersHasBeenSet() const { return m_jobParametersHasBeenSet; }
    template<typename JobParametersT = ProtectedJobParameters>
    void SetJobParameters(JobParametersT&& value) { m_jobParametersHasBeenSet = true; m_jobParameters = std::forward<JobParametersT>(value); }
    template<typename JobParametersT = ProtectedJobParameters>
    StartProtectedJobRequest& WithJobParameters(JobParametersT&& value) { SetJobParameters(std::forward<JobParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details needed to write the job results.</p>
     */
    inline const ProtectedJobResultConfigurationInput& GetResultConfiguration() const { return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    template<typename ResultConfigurationT = ProtectedJobResultConfigurationInput>
    void SetResultConfiguration(ResultConfigurationT&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::forward<ResultConfigurationT>(value); }
    template<typename ResultConfigurationT = ProtectedJobResultConfigurationInput>
    StartProtectedJobRequest& WithResultConfiguration(ResultConfigurationT&& value) { SetResultConfiguration(std::forward<ResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration for the protected job.</p>
     */
    inline const ProtectedJobComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    template<typename ComputeConfigurationT = ProtectedJobComputeConfiguration>
    void SetComputeConfiguration(ComputeConfigurationT&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::forward<ComputeConfigurationT>(value); }
    template<typename ComputeConfigurationT = ProtectedJobComputeConfiguration>
    StartProtectedJobRequest& WithComputeConfiguration(ComputeConfigurationT&& value) { SetComputeConfiguration(std::forward<ComputeConfigurationT>(value)); return *this;}
    ///@}
  private:

    ProtectedJobType m_type{ProtectedJobType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    ProtectedJobParameters m_jobParameters;
    bool m_jobParametersHasBeenSet = false;

    ProtectedJobResultConfigurationInput m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ProtectedJobComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
