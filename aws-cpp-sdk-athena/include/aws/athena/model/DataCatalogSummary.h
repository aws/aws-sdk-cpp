/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/DataCatalogType.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The summary information for the data catalog, which includes its name and
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DataCatalogSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API DataCatalogSummary
  {
  public:
    DataCatalogSummary();
    DataCatalogSummary(Aws::Utils::Json::JsonView jsonValue);
    DataCatalogSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data catalog.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }

    /**
     * <p>The name of the data catalog.</p>
     */
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }

    /**
     * <p>The name of the data catalog.</p>
     */
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }

    /**
     * <p>The name of the data catalog.</p>
     */
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }

    /**
     * <p>The name of the data catalog.</p>
     */
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }

    /**
     * <p>The name of the data catalog.</p>
     */
    inline DataCatalogSummary& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}

    /**
     * <p>The name of the data catalog.</p>
     */
    inline DataCatalogSummary& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}

    /**
     * <p>The name of the data catalog.</p>
     */
    inline DataCatalogSummary& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}


    /**
     * <p>The data catalog type.</p>
     */
    inline const DataCatalogType& GetType() const{ return m_type; }

    /**
     * <p>The data catalog type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data catalog type.</p>
     */
    inline void SetType(const DataCatalogType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data catalog type.</p>
     */
    inline void SetType(DataCatalogType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data catalog type.</p>
     */
    inline DataCatalogSummary& WithType(const DataCatalogType& value) { SetType(value); return *this;}

    /**
     * <p>The data catalog type.</p>
     */
    inline DataCatalogSummary& WithType(DataCatalogType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet;

    DataCatalogType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
