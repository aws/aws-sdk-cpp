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
    AWS_ELASTICACHE_API DataStorage() = default;
    AWS_ELASTICACHE_API DataStorage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API DataStorage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The upper limit for data storage the cache is set to use.</p>
     */
    inline int GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline DataStorage& WithMaximum(int value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower limit for data storage the cache is set to use.</p>
     */
    inline int GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(int value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline DataStorage& WithMinimum(int value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit that the storage is measured in, in GB.</p>
     */
    inline DataStorageUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(DataStorageUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline DataStorage& WithUnit(DataStorageUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    int m_maximum{0};
    bool m_maximumHasBeenSet = false;

    int m_minimum{0};
    bool m_minimumHasBeenSet = false;

    DataStorageUnit m_unit{DataStorageUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
