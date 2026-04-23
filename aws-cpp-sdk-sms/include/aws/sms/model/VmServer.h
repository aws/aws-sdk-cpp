/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/VmServerAddress.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/VmManagerType.h>
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
   * <p>Represents a VM server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/VmServer">AWS API
   * Reference</a></p>
   */
  class AWS_SMS_API VmServer
  {
  public:
    VmServer();
    VmServer(Aws::Utils::Json::JsonView jsonValue);
    VmServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the VM server location.</p>
     */
    inline const VmServerAddress& GetVmServerAddress() const{ return m_vmServerAddress; }

    /**
     * <p>Information about the VM server location.</p>
     */
    inline bool VmServerAddressHasBeenSet() const { return m_vmServerAddressHasBeenSet; }

    /**
     * <p>Information about the VM server location.</p>
     */
    inline void SetVmServerAddress(const VmServerAddress& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = value; }

    /**
     * <p>Information about the VM server location.</p>
     */
    inline void SetVmServerAddress(VmServerAddress&& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = std::move(value); }

    /**
     * <p>Information about the VM server location.</p>
     */
    inline VmServer& WithVmServerAddress(const VmServerAddress& value) { SetVmServerAddress(value); return *this;}

    /**
     * <p>Information about the VM server location.</p>
     */
    inline VmServer& WithVmServerAddress(VmServerAddress&& value) { SetVmServerAddress(std::move(value)); return *this;}


    /**
     * <p>The name of the VM.</p>
     */
    inline const Aws::String& GetVmName() const{ return m_vmName; }

    /**
     * <p>The name of the VM.</p>
     */
    inline bool VmNameHasBeenSet() const { return m_vmNameHasBeenSet; }

    /**
     * <p>The name of the VM.</p>
     */
    inline void SetVmName(const Aws::String& value) { m_vmNameHasBeenSet = true; m_vmName = value; }

    /**
     * <p>The name of the VM.</p>
     */
    inline void SetVmName(Aws::String&& value) { m_vmNameHasBeenSet = true; m_vmName = std::move(value); }

    /**
     * <p>The name of the VM.</p>
     */
    inline void SetVmName(const char* value) { m_vmNameHasBeenSet = true; m_vmName.assign(value); }

    /**
     * <p>The name of the VM.</p>
     */
    inline VmServer& WithVmName(const Aws::String& value) { SetVmName(value); return *this;}

    /**
     * <p>The name of the VM.</p>
     */
    inline VmServer& WithVmName(Aws::String&& value) { SetVmName(std::move(value)); return *this;}

    /**
     * <p>The name of the VM.</p>
     */
    inline VmServer& WithVmName(const char* value) { SetVmName(value); return *this;}


    /**
     * <p>The name of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerName() const{ return m_vmManagerName; }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline bool VmManagerNameHasBeenSet() const { return m_vmManagerNameHasBeenSet; }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline void SetVmManagerName(const Aws::String& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = value; }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline void SetVmManagerName(Aws::String&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::move(value); }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline void SetVmManagerName(const char* value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName.assign(value); }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline VmServer& WithVmManagerName(const Aws::String& value) { SetVmManagerName(value); return *this;}

    /**
     * <p>The name of the VM manager.</p>
     */
    inline VmServer& WithVmManagerName(Aws::String&& value) { SetVmManagerName(std::move(value)); return *this;}

    /**
     * <p>The name of the VM manager.</p>
     */
    inline VmServer& WithVmManagerName(const char* value) { SetVmManagerName(value); return *this;}


    /**
     * <p>The type of VM management product.</p>
     */
    inline const VmManagerType& GetVmManagerType() const{ return m_vmManagerType; }

    /**
     * <p>The type of VM management product.</p>
     */
    inline bool VmManagerTypeHasBeenSet() const { return m_vmManagerTypeHasBeenSet; }

    /**
     * <p>The type of VM management product.</p>
     */
    inline void SetVmManagerType(const VmManagerType& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }

    /**
     * <p>The type of VM management product.</p>
     */
    inline void SetVmManagerType(VmManagerType&& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = std::move(value); }

    /**
     * <p>The type of VM management product.</p>
     */
    inline VmServer& WithVmManagerType(const VmManagerType& value) { SetVmManagerType(value); return *this;}

    /**
     * <p>The type of VM management product.</p>
     */
    inline VmServer& WithVmManagerType(VmManagerType&& value) { SetVmManagerType(std::move(value)); return *this;}


    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline const Aws::String& GetVmPath() const{ return m_vmPath; }

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline bool VmPathHasBeenSet() const { return m_vmPathHasBeenSet; }

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline void SetVmPath(const Aws::String& value) { m_vmPathHasBeenSet = true; m_vmPath = value; }

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline void SetVmPath(Aws::String&& value) { m_vmPathHasBeenSet = true; m_vmPath = std::move(value); }

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline void SetVmPath(const char* value) { m_vmPathHasBeenSet = true; m_vmPath.assign(value); }

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline VmServer& WithVmPath(const Aws::String& value) { SetVmPath(value); return *this;}

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline VmServer& WithVmPath(Aws::String&& value) { SetVmPath(std::move(value)); return *this;}

    /**
     * <p>The VM folder path in the vCenter Server virtual machine inventory tree.</p>
     */
    inline VmServer& WithVmPath(const char* value) { SetVmPath(value); return *this;}

  private:

    VmServerAddress m_vmServerAddress;
    bool m_vmServerAddressHasBeenSet;

    Aws::String m_vmName;
    bool m_vmNameHasBeenSet;

    Aws::String m_vmManagerName;
    bool m_vmManagerNameHasBeenSet;

    VmManagerType m_vmManagerType;
    bool m_vmManagerTypeHasBeenSet;

    Aws::String m_vmPath;
    bool m_vmPathHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
