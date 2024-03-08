/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ColumnType.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>A description of the column in the query results.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ColumnInfo">AWS
   * API Reference</a></p>
   */
  class ColumnInfo
  {
  public:
    AWS_IOTSITEWISE_API ColumnInfo();
    AWS_IOTSITEWISE_API ColumnInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API ColumnInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ColumnInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column description.</p>
     */
    inline ColumnInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column description.</p>
     */
    inline ColumnInfo& WithName(const char* value) { SetName(value); return *this;}


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
    inline ColumnInfo& WithType(const ColumnType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the column description.</p>
     */
    inline ColumnInfo& WithType(ColumnType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ColumnType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
