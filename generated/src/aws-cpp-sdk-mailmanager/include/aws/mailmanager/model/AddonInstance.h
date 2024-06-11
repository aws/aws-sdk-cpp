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
    AWS_MAILMANAGER_API AddonInstance();
    AWS_MAILMANAGER_API AddonInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddonInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceArn() const{ return m_addonInstanceArn; }
    inline bool AddonInstanceArnHasBeenSet() const { return m_addonInstanceArnHasBeenSet; }
    inline void SetAddonInstanceArn(const Aws::String& value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn = value; }
    inline void SetAddonInstanceArn(Aws::String&& value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn = std::move(value); }
    inline void SetAddonInstanceArn(const char* value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn.assign(value); }
    inline AddonInstance& WithAddonInstanceArn(const Aws::String& value) { SetAddonInstanceArn(value); return *this;}
    inline AddonInstance& WithAddonInstanceArn(Aws::String&& value) { SetAddonInstanceArn(std::move(value)); return *this;}
    inline AddonInstance& WithAddonInstanceArn(const char* value) { SetAddonInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceId() const{ return m_addonInstanceId; }
    inline bool AddonInstanceIdHasBeenSet() const { return m_addonInstanceIdHasBeenSet; }
    inline void SetAddonInstanceId(const Aws::String& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = value; }
    inline void SetAddonInstanceId(Aws::String&& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = std::move(value); }
    inline void SetAddonInstanceId(const char* value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId.assign(value); }
    inline AddonInstance& WithAddonInstanceId(const Aws::String& value) { SetAddonInstanceId(value); return *this;}
    inline AddonInstance& WithAddonInstanceId(Aws::String&& value) { SetAddonInstanceId(std::move(value)); return *this;}
    inline AddonInstance& WithAddonInstanceId(const char* value) { SetAddonInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline AddonInstance& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline AddonInstance& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline AddonInstance& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const{ return m_addonSubscriptionId; }
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }
    inline void SetAddonSubscriptionId(const Aws::String& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = value; }
    inline void SetAddonSubscriptionId(Aws::String&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::move(value); }
    inline void SetAddonSubscriptionId(const char* value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId.assign(value); }
    inline AddonInstance& WithAddonSubscriptionId(const Aws::String& value) { SetAddonSubscriptionId(value); return *this;}
    inline AddonInstance& WithAddonSubscriptionId(Aws::String&& value) { SetAddonSubscriptionId(std::move(value)); return *this;}
    inline AddonInstance& WithAddonSubscriptionId(const char* value) { SetAddonSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AddonInstance& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AddonInstance& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonInstanceArn;
    bool m_addonInstanceArnHasBeenSet = false;

    Aws::String m_addonInstanceId;
    bool m_addonInstanceIdHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonSubscriptionId;
    bool m_addonSubscriptionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
