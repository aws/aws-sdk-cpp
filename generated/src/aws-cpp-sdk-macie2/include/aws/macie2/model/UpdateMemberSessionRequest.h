/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/MacieStatus.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateMemberSessionRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateMemberSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMemberSession"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateMemberSessionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateMemberSessionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateMemberSessionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies the new status for the account. Valid values are: ENABLED, resume
     * all Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline const MacieStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the new status for the account. Valid values are: ENABLED, resume
     * all Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the new status for the account. Valid values are: ENABLED, resume
     * all Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline void SetStatus(const MacieStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the new status for the account. Valid values are: ENABLED, resume
     * all Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline void SetStatus(MacieStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the new status for the account. Valid values are: ENABLED, resume
     * all Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline UpdateMemberSessionRequest& WithStatus(const MacieStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the new status for the account. Valid values are: ENABLED, resume
     * all Amazon Macie activities for the account; and, PAUSED, suspend all Macie
     * activities for the account.</p>
     */
    inline UpdateMemberSessionRequest& WithStatus(MacieStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MacieStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
