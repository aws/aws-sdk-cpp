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
    AWS_CONFIGSERVICE_API PutRetentionConfigurationResult();
    AWS_CONFIGSERVICE_API PutRetentionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutRetentionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline const RetentionConfiguration& GetRetentionConfiguration() const{ return m_retentionConfiguration; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline void SetRetentionConfiguration(const RetentionConfiguration& value) { m_retentionConfiguration = value; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline void SetRetentionConfiguration(RetentionConfiguration&& value) { m_retentionConfiguration = std::move(value); }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline PutRetentionConfigurationResult& WithRetentionConfiguration(const RetentionConfiguration& value) { SetRetentionConfiguration(value); return *this;}

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline PutRetentionConfigurationResult& WithRetentionConfiguration(RetentionConfiguration&& value) { SetRetentionConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutRetentionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutRetentionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutRetentionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RetentionConfiguration m_retentionConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
