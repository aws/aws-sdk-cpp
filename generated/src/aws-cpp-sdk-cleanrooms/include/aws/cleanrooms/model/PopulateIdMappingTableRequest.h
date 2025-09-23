/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/JobType.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class PopulateIdMappingTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API PopulateIdMappingTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PopulateIdMappingTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the ID mapping table that you want to populate.</p>
     */
    inline const Aws::String& GetIdMappingTableIdentifier() const { return m_idMappingTableIdentifier; }
    inline bool IdMappingTableIdentifierHasBeenSet() const { return m_idMappingTableIdentifierHasBeenSet; }
    template<typename IdMappingTableIdentifierT = Aws::String>
    void SetIdMappingTableIdentifier(IdMappingTableIdentifierT&& value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier = std::forward<IdMappingTableIdentifierT>(value); }
    template<typename IdMappingTableIdentifierT = Aws::String>
    PopulateIdMappingTableRequest& WithIdMappingTableIdentifier(IdMappingTableIdentifierT&& value) { SetIdMappingTableIdentifier(std::forward<IdMappingTableIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID mapping table
     * that you want to populate.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    PopulateIdMappingTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type of the rule-based ID mapping job. Valid values include:</p> <p>
     * <code>INCREMENTAL</code>: Processes only new or changed data since the last job
     * run. This is the default job type if the ID mapping workflow was created in
     * Entity Resolution with <code>incrementalRunConfig</code> specified.</p> <p>
     * <code>BATCH</code>: Processes all data from the input source, regardless of
     * previous job runs. This is the default job type if the ID mapping workflow was
     * created in Entity Resolution but <code>incrementalRunConfig</code> wasn't
     * specified.</p> <p> <code>DELETE_ONLY</code>: Processes only deletion requests
     * from <code>BatchDeleteUniqueId</code>, which is set in Entity Resolution.</p>
     * <p>For more information about <code>incrementalRunConfig</code> and
     * <code>BatchDeleteUniqueId</code>, see the <a
     * href="https://docs.aws.amazon.com/entityresolution/latest/apireference/Welcome.html">Entity
     * Resolution API Reference</a>.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline PopulateIdMappingTableRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}
  private:

    Aws::String m_idMappingTableIdentifier;
    bool m_idMappingTableIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
