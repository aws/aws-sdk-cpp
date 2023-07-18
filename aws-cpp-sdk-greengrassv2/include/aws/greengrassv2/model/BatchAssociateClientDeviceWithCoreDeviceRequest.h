﻿/**
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
  class AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceRequest : public GreengrassV2Request
  {
  public:
    BatchAssociateClientDeviceWithCoreDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateClientDeviceWithCoreDevice"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of client devices to associate.</p>
     */
    inline const Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline void SetEntries(const Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline void SetEntries(Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& WithEntries(const Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& WithEntries(Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& AddEntries(const AssociateClientDeviceWithCoreDeviceEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The list of client devices to associate.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& AddEntries(AssociateClientDeviceWithCoreDeviceEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline const Aws::String& GetCoreDeviceThingName() const{ return m_coreDeviceThingName; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline bool CoreDeviceThingNameHasBeenSet() const { return m_coreDeviceThingNameHasBeenSet; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const Aws::String& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = value; }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(Aws::String&& value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName = std::move(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline void SetCoreDeviceThingName(const char* value) { m_coreDeviceThingNameHasBeenSet = true; m_coreDeviceThingName.assign(value); }

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& WithCoreDeviceThingName(const Aws::String& value) { SetCoreDeviceThingName(value); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& WithCoreDeviceThingName(Aws::String&& value) { SetCoreDeviceThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the core device. This is also the name of the IoT thing.</p>
     */
    inline BatchAssociateClientDeviceWithCoreDeviceRequest& WithCoreDeviceThingName(const char* value) { SetCoreDeviceThingName(value); return *this;}

  private:

    Aws::Vector<AssociateClientDeviceWithCoreDeviceEntry> m_entries;
    bool m_entriesHasBeenSet;

    Aws::String m_coreDeviceThingName;
    bool m_coreDeviceThingNameHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
