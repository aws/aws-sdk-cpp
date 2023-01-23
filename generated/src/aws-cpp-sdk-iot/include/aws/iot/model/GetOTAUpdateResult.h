/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetOTAUpdateResult
  {
  public:
    AWS_IOT_API GetOTAUpdateResult();
    AWS_IOT_API GetOTAUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetOTAUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
