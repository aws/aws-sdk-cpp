/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ConfigurationRevision.h>
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
  class UpdateConfigurationResult
  {
  public:
    AWS_KAFKA_API UpdateConfigurationResult();
    AWS_KAFKA_API UpdateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API UpdateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline UpdateConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline UpdateConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline UpdateConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    ConfigurationRevision m_latestRevision;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
