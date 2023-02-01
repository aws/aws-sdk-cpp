/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ConfigurationState.h>
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
  class DeleteConfigurationResult
  {
  public:
    AWS_KAFKA_API DeleteConfigurationResult();
    AWS_KAFKA_API DeleteConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DeleteConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline DeleteConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline DeleteConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * configuration.</p>
         
     */
    inline DeleteConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline const ConfigurationState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline void SetState(const ConfigurationState& value) { m_state = value; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline void SetState(ConfigurationState&& value) { m_state = std::move(value); }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline DeleteConfigurationResult& WithState(const ConfigurationState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline DeleteConfigurationResult& WithState(ConfigurationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    ConfigurationState m_state;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
