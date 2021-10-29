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
   * <p>Contains information about a queue resource for which metrics are
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QueueReference">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API QueueReference
  {
  public:
    QueueReference();
    QueueReference(Aws::Utils::Json::JsonView jsonValue);
    QueueReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline QueueReference& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the queue.</p>
     */
    inline QueueReference& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the queue.</p>
     */
    inline QueueReference& WithId(const char* value) { SetId(value); return *this;}


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
    inline QueueReference& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline QueueReference& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the queue.</p>
     */
    inline QueueReference& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline QueueReference& WithQueueType(const QueueType& value) { SetQueueType(value); return *this;}

    /**
     * <p>The type of queue.</p>
     */
    inline QueueReference& WithQueueType(QueueType&& value) { SetQueueType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    QueueType m_queueType;
    bool m_queueTypeHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
