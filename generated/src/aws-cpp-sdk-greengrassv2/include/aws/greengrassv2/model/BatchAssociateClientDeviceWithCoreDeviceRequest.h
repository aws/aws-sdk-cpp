/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/AssociateClientDeviceWithCoreDeviceEntry.h>
#include <utility>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class BatchAssociateClientDeviceWithCoreDeviceRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateClientDeviceWithCoreDevice"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of client devices to associate.</p>
     */
    inline const Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>>
    BatchAssociateClientDeviceWithCoreDeviceRequest& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = AssociateClientDeviceWithCoreDeviceEntry>
    BatchAssociateClientDeviceWithCoreDeviceRequest& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const { return m_coreDeviceThingName; }
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }
    template<typename CoreDeviceThingNameT = Aws::String>
    void SetCoreDeviceThingName(CoreDeviceThingNameT&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::forward<CoreDeviceThingNameT>(value); }
    template<typename CoreDeviceThingNameT = Aws::String>
    BatchAssociateClientDeviceWithCoreDeviceRequest& WithCoreDeviceThingName(CoreDeviceThingNameT&& value) { SetCoreDeviceThingName(std::forward<CoreDeviceThingNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
