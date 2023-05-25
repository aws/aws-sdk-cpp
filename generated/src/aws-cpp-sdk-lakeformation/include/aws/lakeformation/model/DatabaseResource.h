/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure for the database object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DatabaseResource">AWS
   * API Reference</a></p>
   */
  class DatabaseResource
  {
  public:
    AWS_LAKEFORMATION_API DatabaseResource();
    AWS_LAKEFORMATION_API DatabaseResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DatabaseResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline DatabaseResource& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline DatabaseResource& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline DatabaseResource& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline DatabaseResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline DatabaseResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the database resource. Unique to the Data Catalog.</p>
     */
    inline DatabaseResource& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
