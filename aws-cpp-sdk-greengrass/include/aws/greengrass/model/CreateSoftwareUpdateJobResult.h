/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class CreateSoftwareUpdateJobResult
  {
  public:
    AWS_GREENGRASS_API CreateSoftwareUpdateJobResult();
    AWS_GREENGRASS_API CreateSoftwareUpdateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateSoftwareUpdateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline const Aws::String& GetIotJobArn() const{ return m_iotJobArn; }

    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline void SetIotJobArn(const Aws::String& value) { m_iotJobArn = value; }

    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline void SetIotJobArn(Aws::String&& value) { m_iotJobArn = std::move(value); }

    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline void SetIotJobArn(const char* value) { m_iotJobArn.assign(value); }

    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline CreateSoftwareUpdateJobResult& WithIotJobArn(const Aws::String& value) { SetIotJobArn(value); return *this;}

    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline CreateSoftwareUpdateJobResult& WithIotJobArn(Aws::String&& value) { SetIotJobArn(std::move(value)); return *this;}

    /**
     * The IoT Job ARN corresponding to this update.
     */
    inline CreateSoftwareUpdateJobResult& WithIotJobArn(const char* value) { SetIotJobArn(value); return *this;}


    /**
     * The IoT Job Id corresponding to this update.
     */
    inline const Aws::String& GetIotJobId() const{ return m_iotJobId; }

    /**
     * The IoT Job Id corresponding to this update.
     */
    inline void SetIotJobId(const Aws::String& value) { m_iotJobId = value; }

    /**
     * The IoT Job Id corresponding to this update.
     */
    inline void SetIotJobId(Aws::String&& value) { m_iotJobId = std::move(value); }

    /**
     * The IoT Job Id corresponding to this update.
     */
    inline void SetIotJobId(const char* value) { m_iotJobId.assign(value); }

    /**
     * The IoT Job Id corresponding to this update.
     */
    inline CreateSoftwareUpdateJobResult& WithIotJobId(const Aws::String& value) { SetIotJobId(value); return *this;}

    /**
     * The IoT Job Id corresponding to this update.
     */
    inline CreateSoftwareUpdateJobResult& WithIotJobId(Aws::String&& value) { SetIotJobId(std::move(value)); return *this;}

    /**
     * The IoT Job Id corresponding to this update.
     */
    inline CreateSoftwareUpdateJobResult& WithIotJobId(const char* value) { SetIotJobId(value); return *this;}


    /**
     * The software version installed on the device or devices after the update.
     */
    inline const Aws::String& GetPlatformSoftwareVersion() const{ return m_platformSoftwareVersion; }

    /**
     * The software version installed on the device or devices after the update.
     */
    inline void SetPlatformSoftwareVersion(const Aws::String& value) { m_platformSoftwareVersion = value; }

    /**
     * The software version installed on the device or devices after the update.
     */
    inline void SetPlatformSoftwareVersion(Aws::String&& value) { m_platformSoftwareVersion = std::move(value); }

    /**
     * The software version installed on the device or devices after the update.
     */
    inline void SetPlatformSoftwareVersion(const char* value) { m_platformSoftwareVersion.assign(value); }

    /**
     * The software version installed on the device or devices after the update.
     */
    inline CreateSoftwareUpdateJobResult& WithPlatformSoftwareVersion(const Aws::String& value) { SetPlatformSoftwareVersion(value); return *this;}

    /**
     * The software version installed on the device or devices after the update.
     */
    inline CreateSoftwareUpdateJobResult& WithPlatformSoftwareVersion(Aws::String&& value) { SetPlatformSoftwareVersion(std::move(value)); return *this;}

    /**
     * The software version installed on the device or devices after the update.
     */
    inline CreateSoftwareUpdateJobResult& WithPlatformSoftwareVersion(const char* value) { SetPlatformSoftwareVersion(value); return *this;}

  private:

    Aws::String m_iotJobArn;

    Aws::String m_iotJobId;

    Aws::String m_platformSoftwareVersion;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
