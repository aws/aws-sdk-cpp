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
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT1ClickDevicesService
{
namespace Model
{
  class AWS_IOT1CLICKDEVICESSERVICE_API ClaimDevicesByClaimCodeResult
  {
  public:
    ClaimDevicesByClaimCodeResult();
    ClaimDevicesByClaimCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ClaimDevicesByClaimCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline const Aws::String& GetClaimCode() const{ return m_claimCode; }

    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline void SetClaimCode(const Aws::String& value) { m_claimCode = value; }

    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline void SetClaimCode(Aws::String&& value) { m_claimCode = std::move(value); }

    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline void SetClaimCode(const char* value) { m_claimCode.assign(value); }

    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline ClaimDevicesByClaimCodeResult& WithClaimCode(const Aws::String& value) { SetClaimCode(value); return *this;}

    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline ClaimDevicesByClaimCodeResult& WithClaimCode(Aws::String&& value) { SetClaimCode(std::move(value)); return *this;}

    /**
     * <p>The claim code provided by the device manufacturer.</p>
     */
    inline ClaimDevicesByClaimCodeResult& WithClaimCode(const char* value) { SetClaimCode(value); return *this;}


    /**
     * <p>The total number of devices associated with the claim code that has been
     * processed in
 the claim request.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>The total number of devices associated with the claim code that has been
     * processed in
 the claim request.</p>
     */
    inline void SetTotal(int value) { m_total = value; }

    /**
     * <p>The total number of devices associated with the claim code that has been
     * processed in
 the claim request.</p>
     */
    inline ClaimDevicesByClaimCodeResult& WithTotal(int value) { SetTotal(value); return *this;}

  private:

    Aws::String m_claimCode;

    int m_total;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
