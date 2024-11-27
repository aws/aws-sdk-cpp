/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationRecorder.h>
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
namespace ConfigService
{
namespace Model
{
  class AssociateResourceTypesResult
  {
  public:
    AWS_CONFIGSERVICE_API AssociateResourceTypesResult();
    AWS_CONFIGSERVICE_API AssociateResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API AssociateResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ConfigurationRecorder& GetConfigurationRecorder() const{ return m_configurationRecorder; }
    inline void SetConfigurationRecorder(const ConfigurationRecorder& value) { m_configurationRecorder = value; }
    inline void SetConfigurationRecorder(ConfigurationRecorder&& value) { m_configurationRecorder = std::move(value); }
    inline AssociateResourceTypesResult& WithConfigurationRecorder(const ConfigurationRecorder& value) { SetConfigurationRecorder(value); return *this;}
    inline AssociateResourceTypesResult& WithConfigurationRecorder(ConfigurationRecorder&& value) { SetConfigurationRecorder(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateResourceTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateResourceTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateResourceTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConfigurationRecorder m_configurationRecorder;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
