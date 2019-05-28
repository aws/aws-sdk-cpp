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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigCapabilityType.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ConfigIdResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API UpdateConfigResult
  {
  public:
    UpdateConfigResult();
    UpdateConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigArn() const{ return m_configArn; }

    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline void SetConfigArn(const Aws::String& value) { m_configArn = value; }

    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline void SetConfigArn(Aws::String&& value) { m_configArn = std::move(value); }

    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline void SetConfigArn(const char* value) { m_configArn.assign(value); }

    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigArn(const Aws::String& value) { SetConfigArn(value); return *this;}

    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigArn(Aws::String&& value) { SetConfigArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigArn(const char* value) { SetConfigArn(value); return *this;}


    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline void SetConfigId(const Aws::String& value) { m_configId = value; }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline void SetConfigId(Aws::String&& value) { m_configId = std::move(value); }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline void SetConfigId(const char* value) { m_configId.assign(value); }

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}

    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigId(const char* value) { SetConfigId(value); return *this;}


    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configType = value; }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configType = std::move(value); }

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}

    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline UpdateConfigResult& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}

  private:

    Aws::String m_configArn;

    Aws::String m_configId;

    ConfigCapabilityType m_configType;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
