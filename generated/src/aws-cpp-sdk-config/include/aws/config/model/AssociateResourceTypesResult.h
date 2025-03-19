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
    AWS_CONFIGSERVICE_API AssociateResourceTypesResult() = default;
    AWS_CONFIGSERVICE_API AssociateResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API AssociateResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ConfigurationRecorder& GetConfigurationRecorder() const { return m_configurationRecorder; }
    template<typename ConfigurationRecorderT = ConfigurationRecorder>
    void SetConfigurationRecorder(ConfigurationRecorderT&& value) { m_configurationRecorderHasBeenSet = true; m_configurationRecorder = std::forward<ConfigurationRecorderT>(value); }
    template<typename ConfigurationRecorderT = ConfigurationRecorder>
    AssociateResourceTypesResult& WithConfigurationRecorder(ConfigurationRecorderT&& value) { SetConfigurationRecorder(std::forward<ConfigurationRecorderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateResourceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfigurationRecorder m_configurationRecorder;
    bool m_configurationRecorderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
