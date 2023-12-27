/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>Includes basic information for a data column such as its description, name,
   * and type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/Column">AWS
   * API Reference</a></p>
   */
  class Column
  {
  public:
    AWS_BCMDATAEXPORTS_API Column();
    AWS_BCMDATAEXPORTS_API Column(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Column& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description for a column.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for a column.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for a column.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for a column.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for a column.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for a column.</p>
     */
    inline Column& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for a column.</p>
     */
    inline Column& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for a column.</p>
     */
    inline Column& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The column name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The column name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The column name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The column name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The column name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The column name.</p>
     */
    inline Column& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The column name.</p>
     */
    inline Column& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The column name.</p>
     */
    inline Column& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The kind of data a column stores.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline Column& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline Column& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The kind of data a column stores.</p>
     */
    inline Column& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
