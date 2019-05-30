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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/Configuration.h>
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
  class AWS_KAFKA_API ListConfigurationsResult
  {
  public:
    ListConfigurationsResult();
    ListConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurations = value; }

    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurations = std::move(value); }

    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline ListConfigurationsResult& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline ListConfigurationsResult& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline ListConfigurationsResult& AddConfigurations(const Configuration& value) { m_configurations.push_back(value); return *this; }

    /**
     * 
            <p>An array of MSK configurations.</p>
         
     */
    inline ListConfigurationsResult& AddConfigurations(Configuration&& value) { m_configurations.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline ListConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline ListConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>The paginated results marker. When the result of a
     * ListConfigurations operation is truncated, the call returns NextToken in the
     * response. 
               To get another batch of configurations, provide this
     * token in your next request.</p>
         
     */
    inline ListConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Configuration> m_configurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
