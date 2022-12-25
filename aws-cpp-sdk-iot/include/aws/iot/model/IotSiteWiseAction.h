/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PutAssetPropertyValueEntry.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to send data from an MQTT message that triggered the rule
   * to IoT SiteWise asset properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/IotSiteWiseAction">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseAction
  {
  public:
    AWS_IOT_API IotSiteWiseAction();
    AWS_IOT_API IotSiteWiseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IotSiteWiseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of asset property value entries.</p>
     */
    inline const Aws::Vector<PutAssetPropertyValueEntry>& GetPutAssetPropertyValueEntries() const{ return m_putAssetPropertyValueEntries; }

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline bool PutAssetPropertyValueEntriesHasBeenSet() const { return m_putAssetPropertyValueEntriesHasBeenSet; }

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline void SetPutAssetPropertyValueEntries(const Aws::Vector<PutAssetPropertyValueEntry>& value) { m_putAssetPropertyValueEntriesHasBeenSet = true; m_putAssetPropertyValueEntries = value; }

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline void SetPutAssetPropertyValueEntries(Aws::Vector<PutAssetPropertyValueEntry>&& value) { m_putAssetPropertyValueEntriesHasBeenSet = true; m_putAssetPropertyValueEntries = std::move(value); }

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline IotSiteWiseAction& WithPutAssetPropertyValueEntries(const Aws::Vector<PutAssetPropertyValueEntry>& value) { SetPutAssetPropertyValueEntries(value); return *this;}

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline IotSiteWiseAction& WithPutAssetPropertyValueEntries(Aws::Vector<PutAssetPropertyValueEntry>&& value) { SetPutAssetPropertyValueEntries(std::move(value)); return *this;}

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline IotSiteWiseAction& AddPutAssetPropertyValueEntries(const PutAssetPropertyValueEntry& value) { m_putAssetPropertyValueEntriesHasBeenSet = true; m_putAssetPropertyValueEntries.push_back(value); return *this; }

    /**
     * <p>A list of asset property value entries.</p>
     */
    inline IotSiteWiseAction& AddPutAssetPropertyValueEntries(PutAssetPropertyValueEntry&& value) { m_putAssetPropertyValueEntriesHasBeenSet = true; m_putAssetPropertyValueEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline IotSiteWiseAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline IotSiteWiseAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline IotSiteWiseAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::Vector<PutAssetPropertyValueEntry> m_putAssetPropertyValueEntries;
    bool m_putAssetPropertyValueEntriesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
