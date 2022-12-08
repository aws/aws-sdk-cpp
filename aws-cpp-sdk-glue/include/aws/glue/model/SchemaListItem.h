/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaStatus.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An object that contains minimal details for a schema.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaListItem">AWS
   * API Reference</a></p>
   */
  class SchemaListItem
  {
  public:
    AWS_GLUE_API SchemaListItem();
    AWS_GLUE_API SchemaListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline SchemaListItem& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline SchemaListItem& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>the name of the registry where the schema resides.</p>
     */
    inline SchemaListItem& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaListItem& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaListItem& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaListItem& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline SchemaListItem& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline SchemaListItem& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the schema.</p>
     */
    inline SchemaListItem& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>A description for the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the schema.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the schema.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the schema.</p>
     */
    inline SchemaListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the schema.</p>
     */
    inline SchemaListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the schema.</p>
     */
    inline SchemaListItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the schema.</p>
     */
    inline const SchemaStatus& GetSchemaStatus() const{ return m_schemaStatus; }

    /**
     * <p>The status of the schema.</p>
     */
    inline bool SchemaStatusHasBeenSet() const { return m_schemaStatusHasBeenSet; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetSchemaStatus(const SchemaStatus& value) { m_schemaStatusHasBeenSet = true; m_schemaStatus = value; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetSchemaStatus(SchemaStatus&& value) { m_schemaStatusHasBeenSet = true; m_schemaStatus = std::move(value); }

    /**
     * <p>The status of the schema.</p>
     */
    inline SchemaListItem& WithSchemaStatus(const SchemaStatus& value) { SetSchemaStatus(value); return *this;}

    /**
     * <p>The status of the schema.</p>
     */
    inline SchemaListItem& WithSchemaStatus(SchemaStatus&& value) { SetSchemaStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline SchemaListItem& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline SchemaListItem& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that a schema was created.</p>
     */
    inline SchemaListItem& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline const Aws::String& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline void SetUpdatedTime(const Aws::String& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline void SetUpdatedTime(Aws::String&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline void SetUpdatedTime(const char* value) { m_updatedTimeHasBeenSet = true; m_updatedTime.assign(value); }

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline SchemaListItem& WithUpdatedTime(const Aws::String& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline SchemaListItem& WithUpdatedTime(Aws::String&& value) { SetUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that a schema was updated.</p>
     */
    inline SchemaListItem& WithUpdatedTime(const char* value) { SetUpdatedTime(value); return *this;}

  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SchemaStatus m_schemaStatus;
    bool m_schemaStatusHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
