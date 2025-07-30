/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>Sets the scaling configuration of an Amazon DocumentDB Serverless
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ServerlessV2ScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerlessV2ScalingConfiguration
  {
  public:
    AWS_DOCDB_API ServerlessV2ScalingConfiguration() = default;
    AWS_DOCDB_API ServerlessV2ScalingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API ServerlessV2ScalingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum number of Amazon DocumentDB capacity units (DCUs) for an instance
     * in an Amazon DocumentDB Serverless cluster. You can specify DCU values in
     * half-step increments, such as 8, 8.5, 9, and so on.</p>
     */
    inline double GetMinCapacity() const { return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(double value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline ServerlessV2ScalingConfiguration& WithMinCapacity(double value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon DocumentDB capacity units (DCUs) for an instance
     * in an Amazon DocumentDB Serverless cluster. You can specify DCU values in
     * half-step increments, such as 32, 32.5, 33, and so on.</p>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ServerlessV2ScalingConfiguration& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}
  private:

    double m_minCapacity{0.0};
    bool m_minCapacityHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
