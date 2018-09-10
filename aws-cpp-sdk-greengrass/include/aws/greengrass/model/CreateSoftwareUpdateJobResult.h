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
  class AWS_GREENGRASS_API CreateSoftwareUpdateJobResult
  {
  public:
    CreateSoftwareUpdateJobResult();
    CreateSoftwareUpdateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSoftwareUpdateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::String m_iotJobArn;

    Aws::String m_iotJobId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
