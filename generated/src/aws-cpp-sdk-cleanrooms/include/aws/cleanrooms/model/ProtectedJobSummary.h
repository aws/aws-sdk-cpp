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
    AWS_CLEANROOMS_API ProtectedJobSummary();
    AWS_CLEANROOMS_API ProtectedJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the protected job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProtectedJobSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProtectedJobSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProtectedJobSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the membership that initiated the protected job.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline ProtectedJobSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline ProtectedJobSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline ProtectedJobSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the membership that initiated the protected job.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline ProtectedJobSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline ProtectedJobSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline ProtectedJobSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the protected job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ProtectedJobSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ProtectedJobSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the protected job.</p>
     */
    inline const ProtectedJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProtectedJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProtectedJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProtectedJobSummary& WithStatus(const ProtectedJobStatus& value) { SetStatus(value); return *this;}
    inline ProtectedJobSummary& WithStatus(ProtectedJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The receiver configurations for the protected job.</p>
     */
    inline const Aws::Vector<ProtectedJobReceiverConfiguration>& GetReceiverConfigurations() const{ return m_receiverConfigurations; }
    inline bool ReceiverConfigurationsHasBeenSet() const { return m_receiverConfigurationsHasBeenSet; }
    inline void SetReceiverConfigurations(const Aws::Vector<ProtectedJobReceiverConfiguration>& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations = value; }
    inline void SetReceiverConfigurations(Aws::Vector<ProtectedJobReceiverConfiguration>&& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations = std::move(value); }
    inline ProtectedJobSummary& WithReceiverConfigurations(const Aws::Vector<ProtectedJobReceiverConfiguration>& value) { SetReceiverConfigurations(value); return *this;}
    inline ProtectedJobSummary& WithReceiverConfigurations(Aws::Vector<ProtectedJobReceiverConfiguration>&& value) { SetReceiverConfigurations(std::move(value)); return *this;}
    inline ProtectedJobSummary& AddReceiverConfigurations(const ProtectedJobReceiverConfiguration& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations.push_back(value); return *this; }
    inline ProtectedJobSummary& AddReceiverConfigurations(ProtectedJobReceiverConfiguration&& value) { m_receiverConfigurationsHasBeenSet = true; m_receiverConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    ProtectedJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<ProtectedJobReceiverConfiguration> m_receiverConfigurations;
    bool m_receiverConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
