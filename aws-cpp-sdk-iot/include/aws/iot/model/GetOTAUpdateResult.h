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
#include <aws/iot/model/OTAUpdateInfo.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API GetOTAUpdateResult
  {
  public:
    GetOTAUpdateResult();
    GetOTAUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOTAUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The OTA update info.</p>
     */
    inline const OTAUpdateInfo& GetOtaUpdateInfo() const{ return m_otaUpdateInfo; }

    /**
     * <p>The OTA update info.</p>
     */
    inline void SetOtaUpdateInfo(const OTAUpdateInfo& value) { m_otaUpdateInfo = value; }

    /**
     * <p>The OTA update info.</p>
     */
    inline void SetOtaUpdateInfo(OTAUpdateInfo&& value) { m_otaUpdateInfo = std::move(value); }

    /**
     * <p>The OTA update info.</p>
     */
    inline GetOTAUpdateResult& WithOtaUpdateInfo(const OTAUpdateInfo& value) { SetOtaUpdateInfo(value); return *this;}

    /**
     * <p>The OTA update info.</p>
     */
    inline GetOTAUpdateResult& WithOtaUpdateInfo(OTAUpdateInfo&& value) { SetOtaUpdateInfo(std::move(value)); return *this;}

  private:

    OTAUpdateInfo m_otaUpdateInfo;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
