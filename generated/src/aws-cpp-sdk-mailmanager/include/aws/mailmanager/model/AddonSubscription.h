/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A subscription for an Add On representing the acceptance of its terms of use
   * and additional pricing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/AddonSubscription">AWS
   * API Reference</a></p>
   */
  class AddonSubscription
  {
  public:
    AWS_MAILMANAGER_API AddonSubscription();
    AWS_MAILMANAGER_API AddonSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddonSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Add On.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline AddonSubscription& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline AddonSubscription& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline AddonSubscription& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Add On subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionArn() const{ return m_addonSubscriptionArn; }
    inline bool AddonSubscriptionArnHasBeenSet() const { return m_addonSubscriptionArnHasBeenSet; }
    inline void SetAddonSubscriptionArn(const Aws::String& value) { m_addonSubscriptionArnHasBeenSet = true; m_addonSubscriptionArn = value; }
    inline void SetAddonSubscriptionArn(Aws::String&& value) { m_addonSubscriptionArnHasBeenSet = true; m_addonSubscriptionArn = std::move(value); }
    inline void SetAddonSubscriptionArn(const char* value) { m_addonSubscriptionArnHasBeenSet = true; m_addonSubscriptionArn.assign(value); }
    inline AddonSubscription& WithAddonSubscriptionArn(const Aws::String& value) { SetAddonSubscriptionArn(value); return *this;}
    inline AddonSubscription& WithAddonSubscriptionArn(Aws::String&& value) { SetAddonSubscriptionArn(std::move(value)); return *this;}
    inline AddonSubscription& WithAddonSubscriptionArn(const char* value) { SetAddonSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the Add On subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const{ return m_addonSubscriptionId; }
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }
    inline void SetAddonSubscriptionId(const Aws::String& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = value; }
    inline void SetAddonSubscriptionId(Aws::String&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::move(value); }
    inline void SetAddonSubscriptionId(const char* value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId.assign(value); }
    inline AddonSubscription& WithAddonSubscriptionId(const Aws::String& value) { SetAddonSubscriptionId(value); return *this;}
    inline AddonSubscription& WithAddonSubscriptionId(Aws::String&& value) { SetAddonSubscriptionId(std::move(value)); return *this;}
    inline AddonSubscription& WithAddonSubscriptionId(const char* value) { SetAddonSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AddonSubscription& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AddonSubscription& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonSubscriptionArn;
    bool m_addonSubscriptionArnHasBeenSet = false;

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
