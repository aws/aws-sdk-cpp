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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/ConfigurationId.h>
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
namespace MQ
{
namespace Model
{
  class AWS_MQ_API UpdateBrokerResult
  {
  public:
    UpdateBrokerResult();
    UpdateBrokerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateBrokerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the broker.
     */
    inline UpdateBrokerResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * The ID of the updated configuration.
     */
    inline const ConfigurationId& GetConfiguration() const{ return m_configuration; }

    /**
     * The ID of the updated configuration.
     */
    inline void SetConfiguration(const ConfigurationId& value) { m_configuration = value; }

    /**
     * The ID of the updated configuration.
     */
    inline void SetConfiguration(ConfigurationId&& value) { m_configuration = std::move(value); }

    /**
     * The ID of the updated configuration.
     */
    inline UpdateBrokerResult& WithConfiguration(const ConfigurationId& value) { SetConfiguration(value); return *this;}

    /**
     * The ID of the updated configuration.
     */
    inline UpdateBrokerResult& WithConfiguration(ConfigurationId&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_brokerId;

    ConfigurationId m_configuration;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
