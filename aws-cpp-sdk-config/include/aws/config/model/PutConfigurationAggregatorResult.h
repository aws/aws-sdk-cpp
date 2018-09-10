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
  class AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult
  {
  public:
    PutConfigurationAggregatorResult();
    PutConfigurationAggregatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutConfigurationAggregatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
