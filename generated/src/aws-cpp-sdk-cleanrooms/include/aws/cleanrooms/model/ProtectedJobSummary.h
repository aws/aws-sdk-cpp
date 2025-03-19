/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/ProtectedJobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedJobReceiverConfiguration.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The protected job summary for the objects listed by the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobSummary">AWS
   * API Reference</a></p>
   */
  class ProtectedJobSummary
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobSummary() = default;
    AWS_CLEANROOMS_API ProtectedJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the protected job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProtectedJobSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the membership that initiated the protected job.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    ProtectedJobSummary& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the membership that initiated the protected job.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    ProtectedJobSummary& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the protected job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ProtectedJobSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the protected job.</p>
     */
    inline ProtectedJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProtectedJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProtectedJobSummary& WithStatus(ProtectedJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The receiver configurations for the protected job.</p>
     */
    inline const Aws::Vector<ProtectedJobReceiverConfiguration>& GetReceiverConfigurations() const { return m_receiverConfigurations; }
    inline bool ReceiverConfigurationsHasBeenSet() const { return m_receiverConfigurationsHasBeenSet; }
    template<typename ReceiverConfigurationsT = Aws::Vector<ProtectedJobReceiverConfiguration>>
    void SetReceiverConfigurations(ReceiverConfigurationsT&& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations = std::forward<ReceiverConfigurationsT>(value); }
    template<typename ReceiverConfigurationsT = Aws::Vector<ProtectedJobReceiverConfiguration>>
    ProtectedJobSummary& WithReceiverConfigurations(ReceiverConfigurationsT&& value) { SetReceiverConfigurations(std::forward<ReceiverConfigurationsT>(value)); return *this;}
    template<typename ReceiverConfigurationsT = ProtectedJobReceiverConfiguration>
    ProtectedJobSummary& AddReceiverConfigurations(ReceiverConfigurationsT&& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations.emplace_back(std::forward<ReceiverConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    ProtectedJobStatus m_status{ProtectedJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ProtectedJobReceiverConfiguration> m_receiverConfigurations;
    bool m_receiverConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
