/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * Details about the state of a replicator<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ReplicationStateInfo">AWS
   * API Reference</a></p>
   */
  class ReplicationStateInfo
  {
  public:
    AWS_KAFKA_API ReplicationStateInfo();
    AWS_KAFKA_API ReplicationStateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ReplicationStateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Code that describes the current state of the replicator.
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * Code that describes the current state of the replicator.
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * Code that describes the current state of the replicator.
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * Code that describes the current state of the replicator.
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * Code that describes the current state of the replicator.
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * Code that describes the current state of the replicator.
     */
    inline ReplicationStateInfo& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * Code that describes the current state of the replicator.
     */
    inline ReplicationStateInfo& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * Code that describes the current state of the replicator.
     */
    inline ReplicationStateInfo& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * Message that describes the state of the replicator.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * Message that describes the state of the replicator.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * Message that describes the state of the replicator.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * Message that describes the state of the replicator.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * Message that describes the state of the replicator.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * Message that describes the state of the replicator.
     */
    inline ReplicationStateInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * Message that describes the state of the replicator.
     */
    inline ReplicationStateInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * Message that describes the state of the replicator.
     */
    inline ReplicationStateInfo& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
