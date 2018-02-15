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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/QueueStatus.h>
#include <aws/mediaconvert/model/Type.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * MediaConvert jobs are submitted to a queue. Unless specified otherwise jobs are
   * submitted to a built-in default queue. User can create additional queues to
   * separate the jobs of different categories or priority.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Queue">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Queue
  {
  public:
    Queue();
    Queue(const Aws::Utils::Json::JsonValue& jsonValue);
    Queue& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Queue& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Queue& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline Queue& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The timestamp in epoch seconds for queue creation.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The timestamp in epoch seconds for queue creation.
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The timestamp in epoch seconds for queue creation.
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The timestamp in epoch seconds for queue creation.
     */
    inline Queue& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * The timestamp in epoch seconds for queue creation.
     */
    inline Queue& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * An optional description you create for each queue.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * An optional description you create for each queue.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * An optional description you create for each queue.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * An optional description you create for each queue.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * An optional description you create for each queue.
     */
    inline Queue& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * An optional description you create for each queue.
     */
    inline Queue& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * An optional description you create for each queue.
     */
    inline Queue& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The timestamp in epoch seconds when the queue was last updated.
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * The timestamp in epoch seconds when the queue was last updated.
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * The timestamp in epoch seconds when the queue was last updated.
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * The timestamp in epoch seconds when the queue was last updated.
     */
    inline Queue& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * The timestamp in epoch seconds when the queue was last updated.
     */
    inline Queue& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline Queue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline Queue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A name you create for each queue. Each name must be unique within your account.
     */
    inline Queue& WithName(const char* value) { SetName(value); return *this;}


    
    inline const QueueStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline Queue& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    
    inline Queue& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * A queue can be of two types: system or custom. System or built-in queues can't
     * be modified or deleted by the user.
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * A queue can be of two types: system or custom. System or built-in queues can't
     * be modified or deleted by the user.
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * A queue can be of two types: system or custom. System or built-in queues can't
     * be modified or deleted by the user.
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * A queue can be of two types: system or custom. System or built-in queues can't
     * be modified or deleted by the user.
     */
    inline Queue& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * A queue can be of two types: system or custom. System or built-in queues can't
     * be modified or deleted by the user.
     */
    inline Queue& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    QueueStatus m_status;
    bool m_statusHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
