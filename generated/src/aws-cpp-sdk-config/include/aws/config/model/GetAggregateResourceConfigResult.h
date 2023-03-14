/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationItem.h>
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
  class GetAggregateResourceConfigResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult();
    AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>ConfigurationItem</code> object.</p>
     */
    inline const ConfigurationItem& GetConfigurationItem() const{ return m_configurationItem; }

    /**
     * <p>Returns a <code>ConfigurationItem</code> object.</p>
     */
    inline void SetConfigurationItem(const ConfigurationItem& value) { m_configurationItem = value; }

    /**
     * <p>Returns a <code>ConfigurationItem</code> object.</p>
     */
    inline void SetConfigurationItem(ConfigurationItem&& value) { m_configurationItem = std::move(value); }

    /**
     * <p>Returns a <code>ConfigurationItem</code> object.</p>
     */
    inline GetAggregateResourceConfigResult& WithConfigurationItem(const ConfigurationItem& value) { SetConfigurationItem(value); return *this;}

    /**
     * <p>Returns a <code>ConfigurationItem</code> object.</p>
     */
    inline GetAggregateResourceConfigResult& WithConfigurationItem(ConfigurationItem&& value) { SetConfigurationItem(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAggregateResourceConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAggregateResourceConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAggregateResourceConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfigurationItem m_configurationItem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
