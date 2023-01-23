/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationItem.h>
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

  private:

    ConfigurationItem m_configurationItem;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
