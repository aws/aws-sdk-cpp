/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class PutNotificationChannelRequest : public FMSRequest
  {
  public:
    AWS_FMS_API PutNotificationChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutNotificationChannel"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic that collects notifications
     * from Firewall Manager.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    PutNotificationChannelRequest& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that allows Amazon SNS to
     * record Firewall Manager activity. </p>
     */
    inline const Aws::String& GetSnsRoleName() const { return m_snsRoleName; }
    inline bool SnsRoleNameHasBeenSet() const { return m_snsRoleNameHasBeenSet; }
    template<typename SnsRoleNameT = Aws::String>
    void SetSnsRoleName(SnsRoleNameT&& value) { m_snsRoleNameHasBeenSet = true; m_snsRoleName = std::forward<SnsRoleNameT>(value); }
    template<typename SnsRoleNameT = Aws::String>
    PutNotificationChannelRequest& WithSnsRoleName(SnsRoleNameT&& value) { SetSnsRoleName(std::forward<SnsRoleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_snsRoleName;
    bool m_snsRoleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
