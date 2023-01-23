/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/ProtectedQueryStatus.h>
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
    AWS_CLEANROOMS_API ProtectedQuerySummary();
    AWS_CLEANROOMS_API ProtectedQuerySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline ProtectedQuerySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline ProtectedQuerySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the protected query.</p>
     */
    inline ProtectedQuerySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline ProtectedQuerySummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline ProtectedQuerySummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the membership that initiated the protected query.</p>
     */
    inline ProtectedQuerySummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline ProtectedQuerySummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline ProtectedQuerySummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the membership that initiated the protected query.</p>
     */
    inline ProtectedQuerySummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}


    /**
     * <p>The time the protected query was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the protected query was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the protected query was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the protected query was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the protected query was created.</p>
     */
    inline ProtectedQuerySummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the protected query was created.</p>
     */
    inline ProtectedQuerySummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the protected query. Value values are `SUBMITTED`, `STARTED`,
     * `CANCELLED`, `CANCELLING`, `FAILED`, `SUCCESS`, `TIMED_OUT`.</p>
     */
    inline const ProtectedQueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the protected query. Value values are `SUBMITTED`, `STARTED`,
     * `CANCELLED`, `CANCELLING`, `FAILED`, `SUCCESS`, `TIMED_OUT`.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the protected query. Value values are `SUBMITTED`, `STARTED`,
     * `CANCELLED`, `CANCELLING`, `FAILED`, `SUCCESS`, `TIMED_OUT`.</p>
     */
    inline void SetStatus(const ProtectedQueryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the protected query. Value values are `SUBMITTED`, `STARTED`,
     * `CANCELLED`, `CANCELLING`, `FAILED`, `SUCCESS`, `TIMED_OUT`.</p>
     */
    inline void SetStatus(ProtectedQueryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the protected query. Value values are `SUBMITTED`, `STARTED`,
     * `CANCELLED`, `CANCELLING`, `FAILED`, `SUCCESS`, `TIMED_OUT`.</p>
     */
    inline ProtectedQuerySummary& WithStatus(const ProtectedQueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the protected query. Value values are `SUBMITTED`, `STARTED`,
     * `CANCELLED`, `CANCELLING`, `FAILED`, `SUCCESS`, `TIMED_OUT`.</p>
     */
    inline ProtectedQuerySummary& WithStatus(ProtectedQueryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    ProtectedQueryStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
