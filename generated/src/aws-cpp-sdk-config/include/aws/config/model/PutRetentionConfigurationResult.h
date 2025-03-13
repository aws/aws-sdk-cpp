/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/RetentionConfiguration.h>
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
  class PutRetentionConfigurationResult
  {
  public:
    AWS_CONFIGSERVICE_API PutRetentionConfigurationResult() = default;
    AWS_CONFIGSERVICE_API PutRetentionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRetentionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline const RetentionConfiguration& GetRetentionConfiguration() const { return m_retentionConfiguration; }
    template<typename RetentionConfigurationT = RetentionConfiguration>
    void SetRetentionConfiguration(RetentionConfigurationT&& value) { m_retentionConfigurationHasBeenSet = true; m_retentionConfiguration = std::forward<RetentionConfigurationT>(value); }
    template<typename RetentionConfigurationT = RetentionConfiguration>
    PutRetentionConfigurationResult& WithRetentionConfiguration(RetentionConfigurationT&& value) { SetRetentionConfiguration(std::forward<RetentionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRetentionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RetentionConfiguration m_retentionConfiguration;
    bool m_retentionConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
