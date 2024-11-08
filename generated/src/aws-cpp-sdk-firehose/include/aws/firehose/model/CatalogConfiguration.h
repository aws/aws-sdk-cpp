/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p> Describes the containers where the destination Apache Iceberg Tables are
   * persisted. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/CatalogConfiguration">AWS
   * API Reference</a></p>
   */
  class CatalogConfiguration
  {
  public:
    AWS_FIREHOSE_API CatalogConfiguration();
    AWS_FIREHOSE_API CatalogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API CatalogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the Glue catalog ARN identifier of the destination Apache Iceberg
     * Tables. You must specify the ARN in the format
     * <code>arn:aws:glue:region:account-id:catalog</code>. </p>
     */
    inline const Aws::String& GetCatalogARN() const{ return m_catalogARN; }
    inline bool CatalogARNHasBeenSet() const { return m_catalogARNHasBeenSet; }
    inline void SetCatalogARN(const Aws::String& value) { m_catalogARNHasBeenSet = true; m_catalogARN = value; }
    inline void SetCatalogARN(Aws::String&& value) { m_catalogARNHasBeenSet = true; m_catalogARN = std::move(value); }
    inline void SetCatalogARN(const char* value) { m_catalogARNHasBeenSet = true; m_catalogARN.assign(value); }
    inline CatalogConfiguration& WithCatalogARN(const Aws::String& value) { SetCatalogARN(value); return *this;}
    inline CatalogConfiguration& WithCatalogARN(Aws::String&& value) { SetCatalogARN(std::move(value)); return *this;}
    inline CatalogConfiguration& WithCatalogARN(const char* value) { SetCatalogARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetWarehouseLocation() const{ return m_warehouseLocation; }
    inline bool WarehouseLocationHasBeenSet() const { return m_warehouseLocationHasBeenSet; }
    inline void SetWarehouseLocation(const Aws::String& value) { m_warehouseLocationHasBeenSet = true; m_warehouseLocation = value; }
    inline void SetWarehouseLocation(Aws::String&& value) { m_warehouseLocationHasBeenSet = true; m_warehouseLocation = std::move(value); }
    inline void SetWarehouseLocation(const char* value) { m_warehouseLocationHasBeenSet = true; m_warehouseLocation.assign(value); }
    inline CatalogConfiguration& WithWarehouseLocation(const Aws::String& value) { SetWarehouseLocation(value); return *this;}
    inline CatalogConfiguration& WithWarehouseLocation(Aws::String&& value) { SetWarehouseLocation(std::move(value)); return *this;}
    inline CatalogConfiguration& WithWarehouseLocation(const char* value) { SetWarehouseLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogARN;
    bool m_catalogARNHasBeenSet = false;

    Aws::String m_warehouseLocation;
    bool m_warehouseLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
