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
   * <p>A structure for a data location object where permissions are granted or
   * revoked. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DataLocationResource">AWS
   * API Reference</a></p>
   */
  class DataLocationResource
  {
  public:
    AWS_LAKEFORMATION_API DataLocationResource();
    AWS_LAKEFORMATION_API DataLocationResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataLocationResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline DataLocationResource& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline DataLocationResource& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog where the location is registered with
     * Lake Formation. By default, it is the account ID of the caller.</p>
     */
    inline DataLocationResource& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline DataLocationResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline DataLocationResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the data location
     * resource.</p>
     */
    inline DataLocationResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
