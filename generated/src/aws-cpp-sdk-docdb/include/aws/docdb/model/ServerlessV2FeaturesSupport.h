﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/docdb/DocDB_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace DocDB {
namespace Model {

/**
 * <p>Specifies any Amazon DocumentDB Serverless properties or limits that differ
 * between Amazon DocumentDB engine versions. You can test the values of this
 * attribute when deciding which Amazon DocumentDB version to use in a new or
 * upgraded cluster. You can also retrieve the version of an existing cluster and
 * check whether that version supports certain Amazon DocumentDB Serverless
 * features before you attempt to use those features.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ServerlessV2FeaturesSupport">AWS
 * API Reference</a></p>
 */
class ServerlessV2FeaturesSupport {
 public:
  AWS_DOCDB_API ServerlessV2FeaturesSupport() = default;
  AWS_DOCDB_API ServerlessV2FeaturesSupport(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_DOCDB_API ServerlessV2FeaturesSupport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  inline void SetMinCapacity(double value) {
    m_minCapacityHasBeenSet = true;
    m_minCapacity = value;
  }
  inline ServerlessV2FeaturesSupport& WithMinCapacity(double value) {
    SetMinCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of Amazon DocumentDB capacity units (DCUs) for an instance
   * in an Amazon DocumentDB Serverless cluster. You can specify DCU values in
   * half-step increments, such as 32, 32.5, 33, and so on.</p>
   */
  inline double GetMaxCapacity() const { return m_maxCapacity; }
  inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
  inline void SetMaxCapacity(double value) {
    m_maxCapacityHasBeenSet = true;
    m_maxCapacity = value;
  }
  inline ServerlessV2FeaturesSupport& WithMaxCapacity(double value) {
    SetMaxCapacity(value);
    return *this;
  }
  ///@}
 private:
  double m_minCapacity{0.0};
  bool m_minCapacityHasBeenSet = false;

  double m_maxCapacity{0.0};
  bool m_maxCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace DocDB
}  // namespace Aws
