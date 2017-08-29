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
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{

  /**
   * Object representing a VM server<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/VmServer">AWS API
   * Reference</a></p>
   */
  class AWS_SMS_API VmServer
  {
  public:
    VmServer();
    VmServer(const Aws::Utils::Json::JsonValue& jsonValue);
    VmServer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const VmServerAddress& GetVmServerAddress() const{ return m_vmServerAddress; }

    
    inline void SetVmServerAddress(const VmServerAddress& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = value; }

    
    inline void SetVmServerAddress(VmServerAddress&& value) { m_vmServerAddressHasBeenSet = true; m_vmServerAddress = std::move(value); }

    
    inline VmServer& WithVmServerAddress(const VmServerAddress& value) { SetVmServerAddress(value); return *this;}

    
    inline VmServer& WithVmServerAddress(VmServerAddress&& value) { SetVmServerAddress(std::move(value)); return *this;}


    
    inline const Aws::String& GetVmName() const{ return m_vmName; }

    
    inline void SetVmName(const Aws::String& value) { m_vmNameHasBeenSet = true; m_vmName = value; }

    
    inline void SetVmName(Aws::String&& value) { m_vmNameHasBeenSet = true; m_vmName = std::move(value); }

    
    inline void SetVmName(const char* value) { m_vmNameHasBeenSet = true; m_vmName.assign(value); }

    
    inline VmServer& WithVmName(const Aws::String& value) { SetVmName(value); return *this;}

    
    inline VmServer& WithVmName(Aws::String&& value) { SetVmName(std::move(value)); return *this;}

    
    inline VmServer& WithVmName(const char* value) { SetVmName(value); return *this;}


    
    inline const Aws::String& GetVmManagerName() const{ return m_vmManagerName; }

    
    inline void SetVmManagerName(const Aws::String& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = value; }

    
    inline void SetVmManagerName(Aws::String&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::move(value); }

    
    inline void SetVmManagerName(const char* value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName.assign(value); }

    
    inline VmServer& WithVmManagerName(const Aws::String& value) { SetVmManagerName(value); return *this;}

    
    inline VmServer& WithVmManagerName(Aws::String&& value) { SetVmManagerName(std::move(value)); return *this;}

    
    inline VmServer& WithVmManagerName(const char* value) { SetVmManagerName(value); return *this;}


    
    inline const VmManagerType& GetVmManagerType() const{ return m_vmManagerType; }

    
    inline void SetVmManagerType(const VmManagerType& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }

    
    inline void SetVmManagerType(VmManagerType&& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = std::move(value); }

    
    inline VmServer& WithVmManagerType(const VmManagerType& value) { SetVmManagerType(value); return *this;}

    
    inline VmServer& WithVmManagerType(VmManagerType&& value) { SetVmManagerType(std::move(value)); return *this;}


    
    inline const Aws::String& GetVmPath() const{ return m_vmPath; }

    
    inline void SetVmPath(const Aws::String& value) { m_vmPathHasBeenSet = true; m_vmPath = value; }

    
    inline void SetVmPath(Aws::String&& value) { m_vmPathHasBeenSet = true; m_vmPath = std::move(value); }

    
    inline void SetVmPath(const char* value) { m_vmPathHasBeenSet = true; m_vmPath.assign(value); }

    
    inline VmServer& WithVmPath(const Aws::String& value) { SetVmPath(value); return *this;}

    
    inline VmServer& WithVmPath(Aws::String&& value) { SetVmPath(std::move(value)); return *this;}

    
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
