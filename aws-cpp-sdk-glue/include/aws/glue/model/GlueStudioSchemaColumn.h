/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a single column in a Glue schema definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GlueStudioSchemaColumn">AWS
   * API Reference</a></p>
   */
  class GlueStudioSchemaColumn
  {
  public:
    AWS_GLUE_API GlueStudioSchemaColumn();
    AWS_GLUE_API GlueStudioSchemaColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GlueStudioSchemaColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline GlueStudioSchemaColumn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline GlueStudioSchemaColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column in the Glue Studio schema.</p>
     */
    inline GlueStudioSchemaColumn& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline GlueStudioSchemaColumn& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline GlueStudioSchemaColumn& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The hive type for this column in the Glue Studio schema.</p>
     */
    inline GlueStudioSchemaColumn& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
