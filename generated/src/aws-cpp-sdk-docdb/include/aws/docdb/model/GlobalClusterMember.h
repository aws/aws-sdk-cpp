/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A data structure with information about any primary and secondary clusters
   * associated with an Amazon DocumentDB global clusters. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/GlobalClusterMember">AWS
   * API Reference</a></p>
   */
  class GlobalClusterMember
  {
  public:
    AWS_DOCDB_API GlobalClusterMember() = default;
    AWS_DOCDB_API GlobalClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API GlobalClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for each Amazon DocumentDB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const { return m_dBClusterArn; }
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
    template<typename DBClusterArnT = Aws::String>
    void SetDBClusterArn(DBClusterArnT&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::forward<DBClusterArnT>(value); }
    template<typename DBClusterArnT = Aws::String>
    GlobalClusterMember& WithDBClusterArn(DBClusterArnT&& value) { SetDBClusterArn(std::forward<DBClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Amazon DocumentDB global cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaders() const { return m_readers; }
    inline bool ReadersHasBeenSet() const { return m_readersHasBeenSet; }
    template<typename ReadersT = Aws::Vector<Aws::String>>
    void SetReaders(ReadersT&& value) { m_readersHasBeenSet = true; m_readers = std::forward<ReadersT>(value); }
    template<typename ReadersT = Aws::Vector<Aws::String>>
    GlobalClusterMember& WithReaders(ReadersT&& value) { SetReaders(std::forward<ReadersT>(value)); return *this;}
    template<typename ReadersT = Aws::String>
    GlobalClusterMember& AddReaders(ReadersT&& value) { m_readersHasBeenSet = true; m_readers.emplace_back(std::forward<ReadersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies whether the Amazon DocumentDB cluster is the primary cluster (that
     * is, has read-write capability) for the Amazon DocumentDB global cluster with
     * which it is associated. </p>
     */
    inline bool GetIsWriter() const { return m_isWriter; }
    inline bool IsWriterHasBeenSet() const { return m_isWriterHasBeenSet; }
    inline void SetIsWriter(bool value) { m_isWriterHasBeenSet = true; m_isWriter = value; }
    inline GlobalClusterMember& WithIsWriter(bool value) { SetIsWriter(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_readers;
    bool m_readersHasBeenSet = false;

    bool m_isWriter{false};
    bool m_isWriterHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
