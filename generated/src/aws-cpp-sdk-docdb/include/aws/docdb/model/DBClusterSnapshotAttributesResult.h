/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/DBClusterSnapshotAttribute.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>Detailed information about the attributes that are associated with a cluster
   * snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBClusterSnapshotAttributesResult">AWS
   * API Reference</a></p>
   */
  class DBClusterSnapshotAttributesResult
  {
  public:
    AWS_DOCDB_API DBClusterSnapshotAttributesResult() = default;
    AWS_DOCDB_API DBClusterSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBClusterSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const { return m_dBClusterSnapshotIdentifier; }
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }
    template<typename DBClusterSnapshotIdentifierT = Aws::String>
    void SetDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::forward<DBClusterSnapshotIdentifierT>(value); }
    template<typename DBClusterSnapshotIdentifierT = Aws::String>
    DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) { SetDBClusterSnapshotIdentifier(std::forward<DBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline const Aws::Vector<DBClusterSnapshotAttribute>& GetDBClusterSnapshotAttributes() const { return m_dBClusterSnapshotAttributes; }
    inline bool DBClusterSnapshotAttributesHasBeenSet() const { return m_dBClusterSnapshotAttributesHasBeenSet; }
    template<typename DBClusterSnapshotAttributesT = Aws::Vector<DBClusterSnapshotAttribute>>
    void SetDBClusterSnapshotAttributes(DBClusterSnapshotAttributesT&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = std::forward<DBClusterSnapshotAttributesT>(value); }
    template<typename DBClusterSnapshotAttributesT = Aws::Vector<DBClusterSnapshotAttribute>>
    DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(DBClusterSnapshotAttributesT&& value) { SetDBClusterSnapshotAttributes(std::forward<DBClusterSnapshotAttributesT>(value)); return *this;}
    template<typename DBClusterSnapshotAttributesT = DBClusterSnapshotAttribute>
    DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(DBClusterSnapshotAttributesT&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.emplace_back(std::forward<DBClusterSnapshotAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::Vector<DBClusterSnapshotAttribute> m_dBClusterSnapshotAttributes;
    bool m_dBClusterSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
