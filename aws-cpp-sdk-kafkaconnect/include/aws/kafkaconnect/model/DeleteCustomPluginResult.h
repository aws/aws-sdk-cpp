/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginState.h>
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
namespace KafkaConnect
{
namespace Model
{
  class DeleteCustomPluginResult
  {
  public:
    AWS_KAFKACONNECT_API DeleteCustomPluginResult();
    AWS_KAFKACONNECT_API DeleteCustomPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API DeleteCustomPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline void SetCustomPluginArn(const char* value) { m_customPluginArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline DeleteCustomPluginResult& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline DeleteCustomPluginResult& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin that you requested to
     * delete.</p>
     */
    inline DeleteCustomPluginResult& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}


    /**
     * <p>The state of the custom plugin.</p>
     */
    inline const CustomPluginState& GetCustomPluginState() const{ return m_customPluginState; }

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline void SetCustomPluginState(const CustomPluginState& value) { m_customPluginState = value; }

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline void SetCustomPluginState(CustomPluginState&& value) { m_customPluginState = std::move(value); }

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline DeleteCustomPluginResult& WithCustomPluginState(const CustomPluginState& value) { SetCustomPluginState(value); return *this;}

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline DeleteCustomPluginResult& WithCustomPluginState(CustomPluginState&& value) { SetCustomPluginState(std::move(value)); return *this;}

  private:

    Aws::String m_customPluginArn;

    CustomPluginState m_customPluginState;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
