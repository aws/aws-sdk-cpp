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
    AWS_CLEANROOMS_API StartProtectedJobRequest();

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
    inline const ProtectedJobType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ProtectedJobType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ProtectedJobType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline StartProtectedJobRequest& WithType(const ProtectedJobType& value) { SetType(value); return *this;}
    inline StartProtectedJobRequest& WithType(ProtectedJobType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the membership to run this job against. Currently
     * accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline StartProtectedJobRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline StartProtectedJobRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline StartProtectedJobRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The job parameters.</p>
     */
    inline const ProtectedJobParameters& GetJobParameters() const{ return m_jobParameters; }
    inline bool JobParametersHasBeenSet() const { return m_jobParametersHasBeenSet; }
    inline void SetJobParameters(const ProtectedJobParameters& value) { m_jobParametersHasBeenSet = true; m_jobParameters = value; }
    inline void SetJobParameters(ProtectedJobParameters&& value) { m_jobParametersHasBeenSet = true; m_jobParameters = std::move(value); }
    inline StartProtectedJobRequest& WithJobParameters(const ProtectedJobParameters& value) { SetJobParameters(value); return *this;}
    inline StartProtectedJobRequest& WithJobParameters(ProtectedJobParameters&& value) { SetJobParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details needed to write the job results.</p>
     */
    inline const ProtectedJobResultConfigurationInput& GetResultConfiguration() const{ return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    inline void SetResultConfiguration(const ProtectedJobResultConfigurationInput& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }
    inline void SetResultConfiguration(ProtectedJobResultConfigurationInput&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }
    inline StartProtectedJobRequest& WithResultConfiguration(const ProtectedJobResultConfigurationInput& value) { SetResultConfiguration(value); return *this;}
    inline StartProtectedJobRequest& WithResultConfiguration(ProtectedJobResultConfigurationInput&& value) { SetResultConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedJobType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    ProtectedJobParameters m_jobParameters;
    bool m_jobParametersHasBeenSet = false;

    ProtectedJobResultConfigurationInput m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
