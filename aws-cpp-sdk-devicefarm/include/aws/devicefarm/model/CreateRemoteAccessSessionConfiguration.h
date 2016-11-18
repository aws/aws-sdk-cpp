/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/BillingMethod.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Creates the configuration settings for a remote access session, including the
   * device model and type.</p>
   */
  class AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration
  {
  public:
    CreateRemoteAccessSessionConfiguration();
    CreateRemoteAccessSessionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    CreateRemoteAccessSessionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Returns the billing method for purposes of configuring a remote access
     * session.</p>
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }

    /**
     * <p>Returns the billing method for purposes of configuring a remote access
     * session.</p>
     */
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>Returns the billing method for purposes of configuring a remote access
     * session.</p>
     */
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>Returns the billing method for purposes of configuring a remote access
     * session.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}

    /**
     * <p>Returns the billing method for purposes of configuring a remote access
     * session.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(value); return *this;}

  private:
    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
