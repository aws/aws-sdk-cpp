/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TaskTemplateStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains summary information about the task template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskTemplateMetadata">AWS
   * API Reference</a></p>
   */
  class TaskTemplateMetadata
  {
  public:
    AWS_CONNECT_API TaskTemplateMetadata();
    AWS_CONNECT_API TaskTemplateMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskTemplateMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline TaskTemplateMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline TaskTemplateMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline TaskTemplateMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline TaskTemplateMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline TaskTemplateMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task template.</p>
     */
    inline TaskTemplateMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the task template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the task template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the task template.</p>
     */
    inline TaskTemplateMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the task template.</p>
     */
    inline TaskTemplateMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the task template.</p>
     */
    inline TaskTemplateMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the task template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the task template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the task template.</p>
     */
    inline TaskTemplateMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the task template.</p>
     */
    inline TaskTemplateMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the task template.</p>
     */
    inline TaskTemplateMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline const TaskTemplateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline void SetStatus(const TaskTemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline void SetStatus(TaskTemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline TaskTemplateMetadata& WithStatus(const TaskTemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline TaskTemplateMetadata& WithStatus(TaskTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline TaskTemplateMetadata& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline TaskTemplateMetadata& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline TaskTemplateMetadata& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline TaskTemplateMetadata& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TaskTemplateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
