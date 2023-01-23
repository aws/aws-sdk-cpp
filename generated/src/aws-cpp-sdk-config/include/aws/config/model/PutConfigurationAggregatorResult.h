/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationAggregator.h>
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
  class PutConfigurationAggregatorResult
  {
  public:
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult();
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a ConfigurationAggregator object.</p>
     */
    inline const ConfigurationAggregator& GetConfigurationAggregator() const{ return m_configurationAggregator; }

    /**
     * <p>Returns a ConfigurationAggregator object.</p>
     */
    inline void SetConfigurationAggregator(const ConfigurationAggregator& value) { m_configurationAggregator = value; }

    /**
     * <p>Returns a ConfigurationAggregator object.</p>
     */
    inline void SetConfigurationAggregator(ConfigurationAggregator&& value) { m_configurationAggregator = std::move(value); }

    /**
     * <p>Returns a ConfigurationAggregator object.</p>
     */
    inline PutConfigurationAggregatorResult& WithConfigurationAggregator(const ConfigurationAggregator& value) { SetConfigurationAggregator(value); return *this;}

    /**
     * <p>Returns a ConfigurationAggregator object.</p>
     */
    inline PutConfigurationAggregatorResult& WithConfigurationAggregator(ConfigurationAggregator&& value) { SetConfigurationAggregator(std::move(value)); return *this;}

  private:

    ConfigurationAggregator m_configurationAggregator;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
