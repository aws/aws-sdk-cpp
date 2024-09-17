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
    AWS_DOCDB_API GlobalClusterMember();
    AWS_DOCDB_API GlobalClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API GlobalClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for each Amazon DocumentDB cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }
    inline void SetDBClusterArn(const Aws::String& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = value; }
    inline void SetDBClusterArn(Aws::String&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::move(value); }
    inline void SetDBClusterArn(const char* value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn.assign(value); }
    inline GlobalClusterMember& WithDBClusterArn(const Aws::String& value) { SetDBClusterArn(value); return *this;}
    inline GlobalClusterMember& WithDBClusterArn(Aws::String&& value) { SetDBClusterArn(std::move(value)); return *this;}
    inline GlobalClusterMember& WithDBClusterArn(const char* value) { SetDBClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaders() const{ return m_readers; }
    inline bool ReadersHasBeenSet() const { return m_readersHasBeenSet; }
    inline void SetReaders(const Aws::Vector<Aws::String>& value) { m_readersHasBeenSet = true; m_readers = value; }
    inline void SetReaders(Aws::Vector<Aws::String>&& value) { m_readersHasBeenSet = true; m_readers = std::move(value); }
    inline GlobalClusterMember& WithReaders(const Aws::Vector<Aws::String>& value) { SetReaders(value); return *this;}
    inline GlobalClusterMember& WithReaders(Aws::Vector<Aws::String>&& value) { SetReaders(std::move(value)); return *this;}
    inline GlobalClusterMember& AddReaders(const Aws::String& value) { m_readersHasBeenSet = true; m_readers.push_back(value); return *this; }
    inline GlobalClusterMember& AddReaders(Aws::String&& value) { m_readersHasBeenSet = true; m_readers.push_back(std::move(value)); return *this; }
    inline GlobalClusterMember& AddReaders(const char* value) { m_readersHasBeenSet = true; m_readers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies whether the Amazon DocumentDB cluster is the primary cluster (that
     * is, has read-write capability) for the Amazon DocumentDB global cluster with
     * which it is associated. </p>
     */
    inline bool GetIsWriter() const{ return m_isWriter; }
    inline bool IsWriterHasBeenSet() const { return m_isWriterHasBeenSet; }
    inline void SetIsWriter(bool value) { m_isWriterHasBeenSet = true; m_isWriter = value; }
    inline GlobalClusterMember& WithIsWriter(bool value) { SetIsWriter(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_readers;
    bool m_readersHasBeenSet = false;

    bool m_isWriter;
    bool m_isWriterHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
