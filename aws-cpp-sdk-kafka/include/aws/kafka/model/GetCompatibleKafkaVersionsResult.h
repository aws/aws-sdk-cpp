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
#include <aws/kafka/model/CompatibleKafkaVersion.h>
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
  class AWS_KAFKA_API GetCompatibleKafkaVersionsResult
  {
  public:
    GetCompatibleKafkaVersionsResult();
    GetCompatibleKafkaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCompatibleKafkaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline const Aws::Vector<CompatibleKafkaVersion>& GetCompatibleKafkaVersions() const{ return m_compatibleKafkaVersions; }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline void SetCompatibleKafkaVersions(const Aws::Vector<CompatibleKafkaVersion>& value) { m_compatibleKafkaVersions = value; }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline void SetCompatibleKafkaVersions(Aws::Vector<CompatibleKafkaVersion>&& value) { m_compatibleKafkaVersions = std::move(value); }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& WithCompatibleKafkaVersions(const Aws::Vector<CompatibleKafkaVersion>& value) { SetCompatibleKafkaVersions(value); return *this;}

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& WithCompatibleKafkaVersions(Aws::Vector<CompatibleKafkaVersion>&& value) { SetCompatibleKafkaVersions(std::move(value)); return *this;}

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& AddCompatibleKafkaVersions(const CompatibleKafkaVersion& value) { m_compatibleKafkaVersions.push_back(value); return *this; }

    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline GetCompatibleKafkaVersionsResult& AddCompatibleKafkaVersions(CompatibleKafkaVersion&& value) { m_compatibleKafkaVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CompatibleKafkaVersion> m_compatibleKafkaVersions;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
