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
  class AWS_SMS_API VmServerAddress
  {
  public:
    VmServerAddress();
    VmServerAddress(Aws::Utils::Json::JsonView jsonValue);
    VmServerAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerId() const{ return m_vmManagerId; }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline bool VmManagerIdHasBeenSet() const { return m_vmManagerIdHasBeenSet; }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline void SetVmManagerId(const Aws::String& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = value; }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline void SetVmManagerId(Aws::String&& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = std::move(value); }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline void SetVmManagerId(const char* value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId.assign(value); }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline VmServerAddress& WithVmManagerId(const Aws::String& value) { SetVmManagerId(value); return *this;}

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline VmServerAddress& WithVmManagerId(Aws::String&& value) { SetVmManagerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline VmServerAddress& WithVmManagerId(const char* value) { SetVmManagerId(value); return *this;}


    /**
     * <p>The identifier of the VM.</p>
     */
    inline const Aws::String& GetVmId() const{ return m_vmId; }

    /**
     * <p>The identifier of the VM.</p>
     */
    inline bool VmIdHasBeenSet() const { return m_vmIdHasBeenSet; }

    /**
     * <p>The identifier of the VM.</p>
     */
    inline void SetVmId(const Aws::String& value) { m_vmIdHasBeenSet = true; m_vmId = value; }

    /**
     * <p>The identifier of the VM.</p>
     */
    inline void SetVmId(Aws::String&& value) { m_vmIdHasBeenSet = true; m_vmId = std::move(value); }

    /**
     * <p>The identifier of the VM.</p>
     */
    inline void SetVmId(const char* value) { m_vmIdHasBeenSet = true; m_vmId.assign(value); }

    /**
     * <p>The identifier of the VM.</p>
     */
    inline VmServerAddress& WithVmId(const Aws::String& value) { SetVmId(value); return *this;}

    /**
     * <p>The identifier of the VM.</p>
     */
    inline VmServerAddress& WithVmId(Aws::String&& value) { SetVmId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VM.</p>
     */
    inline VmServerAddress& WithVmId(const char* value) { SetVmId(value); return *this;}

  private:

    Aws::String m_vmManagerId;
    bool m_vmManagerIdHasBeenSet;

    Aws::String m_vmId;
    bool m_vmIdHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
