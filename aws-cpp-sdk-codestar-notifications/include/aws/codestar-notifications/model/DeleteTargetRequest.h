/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/CodeStarNotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

  /**
   */
  class DeleteTargetRequest : public CodeStarNotificationsRequest
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API DeleteTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTarget"; }

    AWS_CODESTARNOTIFICATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline const Aws::String& GetTargetAddress() const{ return m_targetAddress; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline bool TargetAddressHasBeenSet() const { return m_targetAddressHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline void SetTargetAddress(const Aws::String& value) { m_targetAddressHasBeenSet = true; m_targetAddress = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline void SetTargetAddress(Aws::String&& value) { m_targetAddressHasBeenSet = true; m_targetAddress = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline void SetTargetAddress(const char* value) { m_targetAddressHasBeenSet = true; m_targetAddress.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline DeleteTargetRequest& WithTargetAddress(const Aws::String& value) { SetTargetAddress(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline DeleteTargetRequest& WithTargetAddress(Aws::String&& value) { SetTargetAddress(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Chatbot topic or Chatbot client to
     * delete.</p>
     */
    inline DeleteTargetRequest& WithTargetAddress(const char* value) { SetTargetAddress(value); return *this;}


    /**
     * <p>A Boolean value that can be used to delete all associations with this Chatbot
     * topic. The default value is FALSE. If set to TRUE, all associations between that
     * target and every notification rule in your Amazon Web Services account are
     * deleted.</p>
     */
    inline bool GetForceUnsubscribeAll() const{ return m_forceUnsubscribeAll; }

    /**
     * <p>A Boolean value that can be used to delete all associations with this Chatbot
     * topic. The default value is FALSE. If set to TRUE, all associations between that
     * target and every notification rule in your Amazon Web Services account are
     * deleted.</p>
     */
    inline bool ForceUnsubscribeAllHasBeenSet() const { return m_forceUnsubscribeAllHasBeenSet; }

    /**
     * <p>A Boolean value that can be used to delete all associations with this Chatbot
     * topic. The default value is FALSE. If set to TRUE, all associations between that
     * target and every notification rule in your Amazon Web Services account are
     * deleted.</p>
     */
    inline void SetForceUnsubscribeAll(bool value) { m_forceUnsubscribeAllHasBeenSet = true; m_forceUnsubscribeAll = value; }

    /**
     * <p>A Boolean value that can be used to delete all associations with this Chatbot
     * topic. The default value is FALSE. If set to TRUE, all associations between that
     * target and every notification rule in your Amazon Web Services account are
     * deleted.</p>
     */
    inline DeleteTargetRequest& WithForceUnsubscribeAll(bool value) { SetForceUnsubscribeAll(value); return *this;}

  private:

    Aws::String m_targetAddress;
    bool m_targetAddressHasBeenSet = false;

    bool m_forceUnsubscribeAll;
    bool m_forceUnsubscribeAllHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
