﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateConfigResult
  {
  public:
    AWS_GROUNDSTATION_API UpdateConfigResult();
    AWS_GROUNDSTATION_API UpdateConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API UpdateConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigArn() const{ return m_configArn; }
    inline void SetConfigArn(const Aws::String& value) { m_configArn = value; }
    inline void SetConfigArn(Aws::String&& value) { m_configArn = std::move(value); }
    inline void SetConfigArn(const char* value) { m_configArn.assign(value); }
    inline UpdateConfigResult& WithConfigArn(const Aws::String& value) { SetConfigArn(value); return *this;}
    inline UpdateConfigResult& WithConfigArn(Aws::String&& value) { SetConfigArn(std::move(value)); return *this;}
    inline UpdateConfigResult& WithConfigArn(const char* value) { SetConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }
    inline void SetConfigId(const Aws::String& value) { m_configId = value; }
    inline void SetConfigId(Aws::String&& value) { m_configId = std::move(value); }
    inline void SetConfigId(const char* value) { m_configId.assign(value); }
    inline UpdateConfigResult& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}
    inline UpdateConfigResult& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}
    inline UpdateConfigResult& WithConfigId(const char* value) { SetConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configType = value; }
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configType = std::move(value); }
    inline UpdateConfigResult& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}
    inline UpdateConfigResult& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configArn;

    Aws::String m_configId;

    ConfigCapabilityType m_configType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
