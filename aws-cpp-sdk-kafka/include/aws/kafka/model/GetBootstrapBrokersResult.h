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
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{
  class AWS_KAFKA_API GetBootstrapBrokersResult
  {
  public:
    GetBootstrapBrokersResult();
    GetBootstrapBrokersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBootstrapBrokersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline const Aws::String& GetBootstrapBrokerString() const{ return m_bootstrapBrokerString; }

    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline void SetBootstrapBrokerString(const Aws::String& value) { m_bootstrapBrokerString = value; }

    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline void SetBootstrapBrokerString(Aws::String&& value) { m_bootstrapBrokerString = std::move(value); }

    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline void SetBootstrapBrokerString(const char* value) { m_bootstrapBrokerString.assign(value); }

    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline GetBootstrapBrokersResult& WithBootstrapBrokerString(const Aws::String& value) { SetBootstrapBrokerString(value); return *this;}

    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline GetBootstrapBrokersResult& WithBootstrapBrokerString(Aws::String&& value) { SetBootstrapBrokerString(std::move(value)); return *this;}

    /**
     * <p>A string containing one or more hostname:port pairs.</p>
     */
    inline GetBootstrapBrokersResult& WithBootstrapBrokerString(const char* value) { SetBootstrapBrokerString(value); return *this;}

  private:

    Aws::String m_bootstrapBrokerString;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
