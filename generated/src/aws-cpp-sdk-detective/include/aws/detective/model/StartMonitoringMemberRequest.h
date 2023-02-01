/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class StartMonitoringMemberRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API StartMonitoringMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMonitoringMember"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline StartMonitoringMemberRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline StartMonitoringMemberRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline StartMonitoringMemberRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline StartMonitoringMemberRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline StartMonitoringMemberRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the member account to try to enable.</p> <p>The account
     * must be an invited member account with a status of
     * <code>ACCEPTED_BUT_DISABLED</code>. </p>
     */
    inline StartMonitoringMemberRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
