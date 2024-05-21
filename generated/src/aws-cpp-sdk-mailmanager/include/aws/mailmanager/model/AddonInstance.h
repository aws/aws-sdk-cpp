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


    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceArn() const{ return m_addonInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline bool AddonInstanceArnHasBeenSet() const { return m_addonInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline void SetAddonInstanceArn(const Aws::String& value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline void SetAddonInstanceArn(Aws::String&& value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline void SetAddonInstanceArn(const char* value) { m_addonInstanceArnHasBeenSet = true; m_addonInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline AddonInstance& WithAddonInstanceArn(const Aws::String& value) { SetAddonInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline AddonInstance& WithAddonInstanceArn(Aws::String&& value) { SetAddonInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Add On instance.</p>
     */
    inline AddonInstance& WithAddonInstanceArn(const char* value) { SetAddonInstanceArn(value); return *this;}


    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline const Aws::String& GetAddonInstanceId() const{ return m_addonInstanceId; }

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline bool AddonInstanceIdHasBeenSet() const { return m_addonInstanceIdHasBeenSet; }

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline void SetAddonInstanceId(const Aws::String& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = value; }

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline void SetAddonInstanceId(Aws::String&& value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId = std::move(value); }

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline void SetAddonInstanceId(const char* value) { m_addonInstanceIdHasBeenSet = true; m_addonInstanceId.assign(value); }

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline AddonInstance& WithAddonInstanceId(const Aws::String& value) { SetAddonInstanceId(value); return *this;}

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline AddonInstance& WithAddonInstanceId(Aws::String&& value) { SetAddonInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the Add On instance.</p>
     */
    inline AddonInstance& WithAddonInstanceId(const char* value) { SetAddonInstanceId(value); return *this;}


    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline AddonInstance& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline AddonInstance& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the Add On for the instance.</p>
     */
    inline AddonInstance& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline const Aws::String& GetAddonSubscriptionId() const{ return m_addonSubscriptionId; }

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline bool AddonSubscriptionIdHasBeenSet() const { return m_addonSubscriptionIdHasBeenSet; }

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline void SetAddonSubscriptionId(const Aws::String& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = value; }

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline void SetAddonSubscriptionId(Aws::String&& value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId = std::move(value); }

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline void SetAddonSubscriptionId(const char* value) { m_addonSubscriptionIdHasBeenSet = true; m_addonSubscriptionId.assign(value); }

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline AddonInstance& WithAddonSubscriptionId(const Aws::String& value) { SetAddonSubscriptionId(value); return *this;}

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline AddonInstance& WithAddonSubscriptionId(Aws::String&& value) { SetAddonSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The subscription ID for the instance.</p>
     */
    inline AddonInstance& WithAddonSubscriptionId(const char* value) { SetAddonSubscriptionId(value); return *this;}


    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline AddonInstance& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the Add On instance was created.</p>
     */
    inline AddonInstance& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

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
