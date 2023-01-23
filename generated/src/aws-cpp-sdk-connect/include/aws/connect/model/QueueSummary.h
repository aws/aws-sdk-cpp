/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QueueType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains summary information about a queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QueueSummary">AWS
   * API Reference</a></p>
   */
  class QueueSummary
  {
  public:
    AWS_CONNECT_API QueueSummary();
    AWS_CONNECT_API QueueSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QueueSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the queue.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the queue.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the queue.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the queue.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the queue.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the queue.</p>
     */
    inline QueueSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the queue.</p>
     */
    inline QueueSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the queue.</p>
     */
    inline QueueSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline QueueSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline QueueSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline QueueSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the queue.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline QueueSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline QueueSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline QueueSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of queue.</p>
     */
    inline const QueueType& GetQueueType() const{ return m_queueType; }

    /**
     * <p>The type of queue.</p>
     */
    inline bool QueueTypeHasBeenSet() const { return m_queueTypeHasBeenSet; }

    /**
     * <p>The type of queue.</p>
     */
    inline void SetQueueType(const QueueType& value) { m_queueTypeHasBeenSet = true; m_queueType = value; }

    /**
     * <p>The type of queue.</p>
     */
    inline void SetQueueType(QueueType&& value) { m_queueTypeHasBeenSet = true; m_queueType = std::move(value); }

    /**
     * <p>The type of queue.</p>
     */
    inline QueueSummary& WithQueueType(const QueueType& value) { SetQueueType(value); return *this;}

    /**
     * <p>The type of queue.</p>
     */
    inline QueueSummary& WithQueueType(QueueType&& value) { SetQueueType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QueueType m_queueType;
    bool m_queueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
