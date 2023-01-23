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
    AWS_DOCDB_API DBClusterSnapshotAttributesResult();
    AWS_DOCDB_API DBClusterSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBClusterSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster snapshot that the attributes apply to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline const Aws::Vector<DBClusterSnapshotAttribute>& GetDBClusterSnapshotAttributes() const{ return m_dBClusterSnapshotAttributes; }

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline bool DBClusterSnapshotAttributesHasBeenSet() const { return m_dBClusterSnapshotAttributesHasBeenSet; }

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotAttributes(const Aws::Vector<DBClusterSnapshotAttribute>& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = value; }

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotAttributes(Aws::Vector<DBClusterSnapshotAttribute>&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = std::move(value); }

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(const Aws::Vector<DBClusterSnapshotAttribute>& value) { SetDBClusterSnapshotAttributes(value); return *this;}

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(Aws::Vector<DBClusterSnapshotAttribute>&& value) { SetDBClusterSnapshotAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(const DBClusterSnapshotAttribute& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.push_back(value); return *this; }

    /**
     * <p>The list of attributes and values for the cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(DBClusterSnapshotAttribute&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::Vector<DBClusterSnapshotAttribute> m_dBClusterSnapshotAttributes;
    bool m_dBClusterSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
