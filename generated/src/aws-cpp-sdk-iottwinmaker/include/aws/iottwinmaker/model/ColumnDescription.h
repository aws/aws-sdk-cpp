/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/ColumnType.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>A description of the column in the query results.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ColumnDescription">AWS
   * API Reference</a></p>
   */
  class ColumnDescription
  {
  public:
    AWS_IOTTWINMAKER_API ColumnDescription();
    AWS_IOTTWINMAKER_API ColumnDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ColumnDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column description.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column description.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column description.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column description.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column description.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column description.</p>
     */
    inline ColumnDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column description.</p>
     */
    inline ColumnDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column description.</p>
     */
    inline ColumnDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the column description.</p>
     */
    inline const ColumnType& GetType() const{ return m_type; }

    /**
     * <p>The type of the column description.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the column description.</p>
     */
    inline void SetType(const ColumnType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the column description.</p>
     */
    inline void SetType(ColumnType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the column description.</p>
     */
    inline ColumnDescription& WithType(const ColumnType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the column description.</p>
     */
    inline ColumnDescription& WithType(ColumnType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ColumnType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
