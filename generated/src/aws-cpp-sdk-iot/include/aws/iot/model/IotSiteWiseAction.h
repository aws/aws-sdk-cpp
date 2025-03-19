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
    AWS_IOT_API IotSiteWiseAction() = default;
    AWS_IOT_API IotSiteWiseAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IotSiteWiseAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of asset property value entries.</p>
     */
    inline const Aws::Vector<PutAssetPropertyValueEntry>& GetPutAssetPropertyValueEntries() const { return m_putAssetPropertyValueEntries; }
    inline bool PutAssetPropertyValueEntriesHasBeenSet() const { return m_putAssetPropertyValueEntriesHasBeenSet; }
    template<typename PutAssetPropertyValueEntriesT = Aws::Vector<PutAssetPropertyValueEntry>>
    void SetPutAssetPropertyValueEntries(PutAssetPropertyValueEntriesT&& value) { m_putAssetPropertyValueEntriesHasBeenSet = true; m_putAssetPropertyValueEntries = std::forward<PutAssetPropertyValueEntriesT>(value); }
    template<typename PutAssetPropertyValueEntriesT = Aws::Vector<PutAssetPropertyValueEntry>>
    IotSiteWiseAction& WithPutAssetPropertyValueEntries(PutAssetPropertyValueEntriesT&& value) { SetPutAssetPropertyValueEntries(std::forward<PutAssetPropertyValueEntriesT>(value)); return *this;}
    template<typename PutAssetPropertyValueEntriesT = PutAssetPropertyValueEntry>
    IotSiteWiseAction& AddPutAssetPropertyValueEntries(PutAssetPropertyValueEntriesT&& value) { m_putAssetPropertyValueEntriesHasBeenSet = true; m_putAssetPropertyValueEntries.emplace_back(std::forward<PutAssetPropertyValueEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants IoT permission to send an asset property
     * value to IoT SiteWise. (<code>"Action":
     * "iotsitewise:BatchPutAssetPropertyValue"</code>). The trust policy can restrict
     * access to specific asset hierarchy paths.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IotSiteWiseAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PutAssetPropertyValueEntry> m_putAssetPropertyValueEntries;
    bool m_putAssetPropertyValueEntriesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
