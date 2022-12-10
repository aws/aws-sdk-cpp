/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a VM server location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/VmServerAddress">AWS
   * API Reference</a></p>
   */
  class VmServerAddress
  {
  public:
    AWS_SMS_API VmServerAddress();
    AWS_SMS_API VmServerAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API VmServerAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerId() const{ return m_vmManagerId; }

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline bool VmManagerIdHasBeenSet() const { return m_vmManagerIdHasBeenSet; }

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline void SetVmManagerId(const Aws::String& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = value; }

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline void SetVmManagerId(Aws::String&& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = std::move(value); }

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline void SetVmManagerId(const char* value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId.assign(value); }

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline VmServerAddress& WithVmManagerId(const Aws::String& value) { SetVmManagerId(value); return *this;}

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline VmServerAddress& WithVmManagerId(Aws::String&& value) { SetVmManagerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VM manager.</p>
     */
    inline VmServerAddress& WithVmManagerId(const char* value) { SetVmManagerId(value); return *this;}


    /**
     * <p>The ID of the VM.</p>
     */
    inline const Aws::String& GetVmId() const{ return m_vmId; }

    /**
     * <p>The ID of the VM.</p>
     */
    inline bool VmIdHasBeenSet() const { return m_vmIdHasBeenSet; }

    /**
     * <p>The ID of the VM.</p>
     */
    inline void SetVmId(const Aws::String& value) { m_vmIdHasBeenSet = true; m_vmId = value; }

    /**
     * <p>The ID of the VM.</p>
     */
    inline void SetVmId(Aws::String&& value) { m_vmIdHasBeenSet = true; m_vmId = std::move(value); }

    /**
     * <p>The ID of the VM.</p>
     */
    inline void SetVmId(const char* value) { m_vmIdHasBeenSet = true; m_vmId.assign(value); }

    /**
     * <p>The ID of the VM.</p>
     */
    inline VmServerAddress& WithVmId(const Aws::String& value) { SetVmId(value); return *this;}

    /**
     * <p>The ID of the VM.</p>
     */
    inline VmServerAddress& WithVmId(Aws::String&& value) { SetVmId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VM.</p>
     */
    inline VmServerAddress& WithVmId(const char* value) { SetVmId(value); return *this;}

  private:

    Aws::String m_vmManagerId;
    bool m_vmManagerIdHasBeenSet = false;

    Aws::String m_vmId;
    bool m_vmIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
