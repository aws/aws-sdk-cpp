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
  class CreateCustomPluginResult
  {
  public:
    AWS_KAFKACONNECT_API CreateCustomPluginResult();
    AWS_KAFKACONNECT_API CreateCustomPluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKACONNECT_API CreateCustomPluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline void SetCustomPluginArn(const char* value) { m_customPluginArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Amazon assigned to the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}


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
    inline CreateCustomPluginResult& WithCustomPluginState(const CustomPluginState& value) { SetCustomPluginState(value); return *this;}

    /**
     * <p>The state of the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithCustomPluginState(CustomPluginState&& value) { SetCustomPluginState(std::move(value)); return *this;}


    /**
     * <p>The name of the custom plugin.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline void SetRevision(long long value) { m_revision = value; }

    /**
     * <p>The revision of the custom plugin.</p>
     */
    inline CreateCustomPluginResult& WithRevision(long long value) { SetRevision(value); return *this;}

  private:

    Aws::String m_customPluginArn;

    CustomPluginState m_customPluginState;

    Aws::String m_name;

    long long m_revision;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
