/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Specifies a Kafka header using key-value pairs when you create a Rule’s Kafka
   * Action. You can use these headers to route data from IoT clients to downstream
   * Kafka clusters without modifying your message payload.</p> <p>For more
   * information about Rule's Kafka action, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/apache-kafka-rule-action.html">Apache
   * Kafka</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/KafkaActionHeader">AWS
   * API Reference</a></p>
   */
  class KafkaActionHeader
  {
  public:
    AWS_IOT_API KafkaActionHeader();
    AWS_IOT_API KafkaActionHeader(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API KafkaActionHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the Kafka header.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline KafkaActionHeader& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline KafkaActionHeader& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the Kafka header.</p>
     */
    inline KafkaActionHeader& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the Kafka header.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline KafkaActionHeader& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline KafkaActionHeader& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the Kafka header.</p>
     */
    inline KafkaActionHeader& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
