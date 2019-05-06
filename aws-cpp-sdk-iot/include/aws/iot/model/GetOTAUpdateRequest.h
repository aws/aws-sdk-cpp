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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API GetOTAUpdateRequest : public IoTRequest
  {
  public:
    GetOTAUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOTAUpdate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The OTA update ID.</p>
     */
    inline const Aws::String& GetOtaUpdateId() const{ return m_otaUpdateId; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline bool OtaUpdateIdHasBeenSet() const { return m_otaUpdateIdHasBeenSet; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(const Aws::String& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = value; }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(Aws::String&& value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId = std::move(value); }

    /**
     * <p>The OTA update ID.</p>
     */
    inline void SetOtaUpdateId(const char* value) { m_otaUpdateIdHasBeenSet = true; m_otaUpdateId.assign(value); }

    /**
     * <p>The OTA update ID.</p>
     */
    inline GetOTAUpdateRequest& WithOtaUpdateId(const Aws::String& value) { SetOtaUpdateId(value); return *this;}

    /**
     * <p>The OTA update ID.</p>
     */
    inline GetOTAUpdateRequest& WithOtaUpdateId(Aws::String&& value) { SetOtaUpdateId(std::move(value)); return *this;}

    /**
     * <p>The OTA update ID.</p>
     */
    inline GetOTAUpdateRequest& WithOtaUpdateId(const char* value) { SetOtaUpdateId(value); return *this;}

  private:

    Aws::String m_otaUpdateId;
    bool m_otaUpdateIdHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
