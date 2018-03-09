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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
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

  /**
   * Returns information about all brokers.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerInstance">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API BrokerInstance
  {
  public:
    BrokerInstance();
    BrokerInstance(const Aws::Utils::Json::JsonValue& jsonValue);
    BrokerInstance& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline const Aws::String& GetConsoleURL() const{ return m_consoleURL; }

    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline void SetConsoleURL(const Aws::String& value) { m_consoleURLHasBeenSet = true; m_consoleURL = value; }

    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline void SetConsoleURL(Aws::String&& value) { m_consoleURLHasBeenSet = true; m_consoleURL = std::move(value); }

    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline void SetConsoleURL(const char* value) { m_consoleURLHasBeenSet = true; m_consoleURL.assign(value); }

    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline BrokerInstance& WithConsoleURL(const Aws::String& value) { SetConsoleURL(value); return *this;}

    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline BrokerInstance& WithConsoleURL(Aws::String&& value) { SetConsoleURL(std::move(value)); return *this;}

    /**
     * The URL of the broker's ActiveMQ Web Console.
     */
    inline BrokerInstance& WithConsoleURL(const char* value) { SetConsoleURL(value); return *this;}


    /**
     * The broker's wire-level protocol endpoints.
     */
    inline const Aws::Vector<Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline void SetEndpoints(const Aws::Vector<Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline void SetEndpoints(Aws::Vector<Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline BrokerInstance& WithEndpoints(const Aws::Vector<Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline BrokerInstance& WithEndpoints(Aws::Vector<Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline BrokerInstance& AddEndpoints(const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline BrokerInstance& AddEndpoints(Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

    /**
     * The broker's wire-level protocol endpoints.
     */
    inline BrokerInstance& AddEndpoints(const char* value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

  private:

    Aws::String m_consoleURL;
    bool m_consoleURLHasBeenSet;

    Aws::Vector<Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
