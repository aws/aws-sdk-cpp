/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/FailoverStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace DocDB {
namespace Model {

/**
 * <p>Contains the state of scheduled or in-process operations on an Amazon
 * DocumentDB global cluster. This data type is empty unless a switchover or
 * failover operation is scheduled or is in progress on the global
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/FailoverState">AWS
 * API Reference</a></p>
 */
class FailoverState {
 public:
  AWS_DOCDB_API FailoverState() = default;
  AWS_DOCDB_API FailoverState(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_DOCDB_API FailoverState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The current status of the global cluster. Possible values are as follows:</p>
   * <ul> <li> <p> <b>pending</b> – The service received a request to switch over or
   * fail over the global cluster. The global cluster's primary cluster and the
   * specified secondary cluster are being verified before the operation starts.</p>
   * </li> <li> <p> <b>failing-over</b> – The chosen secondary cluster is being
   * promoted to become the new primary cluster to fail over the global cluster.</p>
   * </li> <li> <p> <b>cancelling</b> – The request to switch over or fail over the
   * global cluster was cancelled and the primary cluster and the selected secondary
   * cluster are returning to their previous states.</p> </li> </ul>
   */
  inline FailoverStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FailoverStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FailoverState& WithStatus(FailoverStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon DocumentDB cluster that is
   * currently being demoted, and which is associated with this state.</p>
   */
  inline const Aws::String& GetFromDbClusterArn() const { return m_fromDbClusterArn; }
  inline bool FromDbClusterArnHasBeenSet() const { return m_fromDbClusterArnHasBeenSet; }
  template <typename FromDbClusterArnT = Aws::String>
  void SetFromDbClusterArn(FromDbClusterArnT&& value) {
    m_fromDbClusterArnHasBeenSet = true;
    m_fromDbClusterArn = std::forward<FromDbClusterArnT>(value);
  }
  template <typename FromDbClusterArnT = Aws::String>
  FailoverState& WithFromDbClusterArn(FromDbClusterArnT&& value) {
    SetFromDbClusterArn(std::forward<FromDbClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon DocumentDB cluster that is
   * currently being promoted, and which is associated with this state.</p>
   */
  inline const Aws::String& GetToDbClusterArn() const { return m_toDbClusterArn; }
  inline bool ToDbClusterArnHasBeenSet() const { return m_toDbClusterArnHasBeenSet; }
  template <typename ToDbClusterArnT = Aws::String>
  void SetToDbClusterArn(ToDbClusterArnT&& value) {
    m_toDbClusterArnHasBeenSet = true;
    m_toDbClusterArn = std::forward<ToDbClusterArnT>(value);
  }
  template <typename ToDbClusterArnT = Aws::String>
  FailoverState& WithToDbClusterArn(ToDbClusterArnT&& value) {
    SetToDbClusterArn(std::forward<ToDbClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the operation is a global switchover or a global failover.
   * If data loss is allowed, then the operation is a global failover. Otherwise,
   * it's a switchover.</p>
   */
  inline bool GetIsDataLossAllowed() const { return m_isDataLossAllowed; }
  inline bool IsDataLossAllowedHasBeenSet() const { return m_isDataLossAllowedHasBeenSet; }
  inline void SetIsDataLossAllowed(bool value) {
    m_isDataLossAllowedHasBeenSet = true;
    m_isDataLossAllowed = value;
  }
  inline FailoverState& WithIsDataLossAllowed(bool value) {
    SetIsDataLossAllowed(value);
    return *this;
  }
  ///@}
 private:
  FailoverStatus m_status{FailoverStatus::NOT_SET};

  Aws::String m_fromDbClusterArn;

  Aws::String m_toDbClusterArn;

  bool m_isDataLossAllowed{false};
  bool m_statusHasBeenSet = false;
  bool m_fromDbClusterArnHasBeenSet = false;
  bool m_toDbClusterArnHasBeenSet = false;
  bool m_isDataLossAllowedHasBeenSet = false;
};

}  // namespace Model
}  // namespace DocDB
}  // namespace Aws
