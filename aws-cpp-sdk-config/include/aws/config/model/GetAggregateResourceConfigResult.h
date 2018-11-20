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
  class AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult
  {
  public:
    GetAggregateResourceConfigResult();
    GetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAggregateResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
