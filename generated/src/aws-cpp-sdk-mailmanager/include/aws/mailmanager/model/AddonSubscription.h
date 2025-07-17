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
    AWS_MAILMANAGER_API AddonSubscription() = default;
    AWS_MAILMANAGER_API AddonSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddonSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the Add On subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const { return m_addonSubscriptionId; }
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }
    template<typename AddonSubscriptionIdT = Aws::String>
    void SetAddonSubscriptionId(AddonSubscriptionIdT&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::forward<AddonSubscriptionIdT>(value); }
    template<typename AddonSubscriptionIdT = Aws::String>
    AddonSubscription& WithAddonSubscriptionId(AddonSubscriptionIdT&& value) { SetAddonSubscriptionId(std::forward<AddonSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Add On.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    AddonSubscription& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Add On subscription.</p>
     */
    inline const Aws::String& GetAddonSubscriptionArn() const { return m_addonSubscriptionArn; }
    inline bool AddonSubscriptionArnHasBeenSet() const { return m_addonSubscriptionArnHasBeenSet; }
    template<typename AddonSubscriptionArnT = Aws::String>
    void SetAddonSubscriptionArn(AddonSubscriptionArnT&& value) { m_addonSubscriptionArnHasBeenSet = true; m_addonSubscriptionArn = std::forward<AddonSubscriptionArnT>(value); }
    template<typename AddonSubscriptionArnT = Aws::String>
    AddonSubscription& WithAddonSubscriptionArn(AddonSubscriptionArnT&& value) { SetAddonSubscriptionArn(std::forward<AddonSubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    AddonSubscription& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonSubscriptionArn;
    bool m_addonSubscriptionArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
