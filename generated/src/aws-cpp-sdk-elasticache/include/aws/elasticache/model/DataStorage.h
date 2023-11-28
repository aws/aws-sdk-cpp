/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/DataStorageUnit.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The data storage limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DataStorage">AWS
   * API Reference</a></p>
   */
  class DataStorage
  {
  public:
    AWS_ELASTICACHE_API DataStorage();
    AWS_ELASTICACHE_API DataStorage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API DataStorage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The upper limit for data storage the cache is set to use.</p>
     */
    inline int GetMaximum() const{ return m_maximum; }

    /**
     * <p>The upper limit for data storage the cache is set to use.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The upper limit for data storage the cache is set to use.</p>
     */
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The upper limit for data storage the cache is set to use.</p>
     */
    inline DataStorage& WithMaximum(int value) { SetMaximum(value); return *this;}


    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline const DataStorageUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline void SetUnit(const DataStorageUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline void SetUnit(DataStorageUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline DataStorage& WithUnit(const DataStorageUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline DataStorage& WithUnit(DataStorageUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    int m_maximum;
    bool m_maximumHasBeenSet = false;

    DataStorageUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
