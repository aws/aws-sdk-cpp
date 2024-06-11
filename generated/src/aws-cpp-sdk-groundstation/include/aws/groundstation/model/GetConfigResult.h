﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigTypeData.h>
#include <aws/groundstation/model/ConfigCapabilityType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfigResponse">AWS
   * API Reference</a></p>
   */
  class GetConfigResult
  {
  public:
    AWS_GROUNDSTATION_API GetConfigResult();
    AWS_GROUNDSTATION_API GetConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of a <code>Config</code> </p>
     */
    inline const Aws::String& GetConfigArn() const{ return m_configArn; }
    inline void SetConfigArn(const Aws::String& value) { m_configArn = value; }
    inline void SetConfigArn(Aws::String&& value) { m_configArn = std::move(value); }
    inline void SetConfigArn(const char* value) { m_configArn.assign(value); }
    inline GetConfigResult& WithConfigArn(const Aws::String& value) { SetConfigArn(value); return *this;}
    inline GetConfigResult& WithConfigArn(Aws::String&& value) { SetConfigArn(std::move(value)); return *this;}
    inline GetConfigResult& WithConfigArn(const char* value) { SetConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data elements in a <code>Config</code>.</p>
     */
    inline const ConfigTypeData& GetConfigData() const{ return m_configData; }
    inline void SetConfigData(const ConfigTypeData& value) { m_configData = value; }
    inline void SetConfigData(ConfigTypeData&& value) { m_configData = std::move(value); }
    inline GetConfigResult& WithConfigData(const ConfigTypeData& value) { SetConfigData(value); return *this;}
    inline GetConfigResult& WithConfigData(ConfigTypeData&& value) { SetConfigData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }
    inline void SetConfigId(const Aws::String& value) { m_configId = value; }
    inline void SetConfigId(Aws::String&& value) { m_configId = std::move(value); }
    inline void SetConfigId(const char* value) { m_configId.assign(value); }
    inline GetConfigResult& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}
    inline GetConfigResult& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}
    inline GetConfigResult& WithConfigId(const char* value) { SetConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configType = value; }
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configType = std::move(value); }
    inline GetConfigResult& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}
    inline GetConfigResult& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetConfigResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetConfigResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetConfigResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a <code>Config</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetConfigResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetConfigResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetConfigResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetConfigResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetConfigResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetConfigResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetConfigResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetConfigResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetConfigResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configArn;

    ConfigTypeData m_configData;

    Aws::String m_configId;

    ConfigCapabilityType m_configType;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
