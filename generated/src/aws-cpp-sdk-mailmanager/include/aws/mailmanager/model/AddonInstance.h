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
   * <p>An Add On instance represents a specific configuration of an Add
   * On.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/AddonInstance">AWS
   * API Reference</a></p>
   */
  class AddonInstance
  {
  public:
    AWS_MAILMANAGER_API AddonInstance() = default;
    AWS_MAILMANAGER_API AddonInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddonInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceId() const { return m_addonInstanceId; }
    inline bool AddonInstanceIdHasBeenSet() const { return m_addonInstanceIdHasBeenSet; }
    template<typename AddonInstanceIdT = Aws::String>
    void SetAddonInstanceId(AddonInstanceIdT&& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = std::forward<AddonInstanceIdT>(value); }
    template<typename AddonInstanceIdT = Aws::String>
    AddonInstance& WithAddonInstanceId(AddonInstanceIdT&& value) { SetAddonInstanceId(std::forward<AddonInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const { return m_addonSubscriptionId; }
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }
    template<typename AddonSubscriptionIdT = Aws::String>
    void SetAddonSubscriptionId(AddonSubscriptionIdT&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::forward<AddonSubscriptionIdT>(value); }
    template<typename AddonSubscriptionIdT = Aws::String>
    AddonInstance& WithAddonSubscriptionId(AddonSubscriptionIdT&& value) { SetAddonSubscriptionId(std::forward<AddonSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    AddonInstance& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceArn() const { return m_addonInstanceArn; }
    inline bool AddonInstanceArnHasBeenSet() const { return m_addonInstanceArnHasBeenSet; }
    template<typename AddonInstanceArnT = Aws::String>
    void SetAddonInstanceArn(AddonInstanceArnT&& value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn = std::forward<AddonInstanceArnT>(value); }
    template<typename AddonInstanceArnT = Aws::String>
    AddonInstance& WithAddonInstanceArn(AddonInstanceArnT&& value) { SetAddonInstanceArn(std::forward<AddonInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    AddonInstance& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonInstanceId;
    bool m_addonInstanceIdHasBeenSet = false;

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonInstanceArn;
    bool m_addonInstanceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
