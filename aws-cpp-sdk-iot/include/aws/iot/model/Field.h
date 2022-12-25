/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/FieldType.h>
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
   * <p>Describes the name and data type at a field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Field">AWS API
   * Reference</a></p>
   */
  class Field
  {
  public:
    AWS_IOT_API Field();
    AWS_IOT_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the field.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the field.</p>
     */
    inline Field& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field.</p>
     */
    inline Field& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the field.</p>
     */
    inline Field& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the field.</p>
     */
    inline const FieldType& GetType() const{ return m_type; }

    /**
     * <p>The data type of the field.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the field.</p>
     */
    inline void SetType(const FieldType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the field.</p>
     */
    inline void SetType(FieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the field.</p>
     */
    inline Field& WithType(const FieldType& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the field.</p>
     */
    inline Field& WithType(FieldType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FieldType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
