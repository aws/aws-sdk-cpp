/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/ProtectedQueryStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ReceiverConfiguration.h>
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
   * <p>The protected query summary for the objects listed by the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQuerySummary">AWS
   * API Reference</a></p>
   */
  class ProtectedQuerySummary
  {
  public:
    AWS_CLEANROOMS_API ProtectedQuerySummary() = default;
    AWS_CLEANROOMS_API ProtectedQuerySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProtectedQuerySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    ProtectedQuerySummary& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    ProtectedQuerySummary& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the protected query was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ProtectedQuerySummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the protected query.</p>
     */
    inline ProtectedQueryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProtectedQueryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProtectedQuerySummary& WithStatus(ProtectedQueryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The receiver configuration.</p>
     */
    inline const Aws::Vector<ReceiverConfiguration>& GetReceiverConfigurations() const { return m_receiverConfigurations; }
    inline bool ReceiverConfigurationsHasBeenSet() const { return m_receiverConfigurationsHasBeenSet; }
    template<typename ReceiverConfigurationsT = Aws::Vector<ReceiverConfiguration>>
    void SetReceiverConfigurations(ReceiverConfigurationsT&& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations = std::forward<ReceiverConfigurationsT>(value); }
    template<typename ReceiverConfigurationsT = Aws::Vector<ReceiverConfiguration>>
    ProtectedQuerySummary& WithReceiverConfigurations(ReceiverConfigurationsT&& value) { SetReceiverConfigurations(std::forward<ReceiverConfigurationsT>(value)); return *this;}
    template<typename ReceiverConfigurationsT = ReceiverConfiguration>
    ProtectedQuerySummary& AddReceiverConfigurations(ReceiverConfigurationsT&& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations.emplace_back(std::forward<ReceiverConfigurationsT>(value)); return *this; }
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

    ProtectedQueryStatus m_status{ProtectedQueryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ReceiverConfiguration> m_receiverConfigurations;
    bool m_receiverConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
