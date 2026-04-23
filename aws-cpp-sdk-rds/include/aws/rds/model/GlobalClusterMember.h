/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p> A data structure with information about any primary and secondary clusters
   * associated with an Aurora global database. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/GlobalClusterMember">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API GlobalClusterMember
  {
  public:
    GlobalClusterMember();
    GlobalClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    GlobalClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline void SetDBClusterArn(const Aws::String& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline void SetDBClusterArn(Aws::String&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline void SetDBClusterArn(const char* value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline GlobalClusterMember& WithDBClusterArn(const Aws::String& value) { SetDBClusterArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline GlobalClusterMember& WithDBClusterArn(Aws::String&& value) { SetDBClusterArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for each Aurora cluster. </p>
     */
    inline GlobalClusterMember& WithDBClusterArn(const char* value) { SetDBClusterArn(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReaders() const{ return m_readers; }

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline bool ReadersHasBeenSet() const { return m_readersHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline void SetReaders(const Aws::Vector<Aws::String>& value) { m_readersHasBeenSet = true; m_readers = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline void SetReaders(Aws::Vector<Aws::String>&& value) { m_readersHasBeenSet = true; m_readers = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline GlobalClusterMember& WithReaders(const Aws::Vector<Aws::String>& value) { SetReaders(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline GlobalClusterMember& WithReaders(Aws::Vector<Aws::String>&& value) { SetReaders(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline GlobalClusterMember& AddReaders(const Aws::String& value) { m_readersHasBeenSet = true; m_readers.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline GlobalClusterMember& AddReaders(Aws::String&& value) { m_readersHasBeenSet = true; m_readers.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the Aurora global database. </p>
     */
    inline GlobalClusterMember& AddReaders(const char* value) { m_readersHasBeenSet = true; m_readers.push_back(value); return *this; }


    /**
     * <p> Specifies whether the Aurora cluster is the primary cluster (that is, has
     * read-write capability) for the Aurora global database with which it is
     * associated. </p>
     */
    inline bool GetIsWriter() const{ return m_isWriter; }

    /**
     * <p> Specifies whether the Aurora cluster is the primary cluster (that is, has
     * read-write capability) for the Aurora global database with which it is
     * associated. </p>
     */
    inline bool IsWriterHasBeenSet() const { return m_isWriterHasBeenSet; }

    /**
     * <p> Specifies whether the Aurora cluster is the primary cluster (that is, has
     * read-write capability) for the Aurora global database with which it is
     * associated. </p>
     */
    inline void SetIsWriter(bool value) { m_isWriterHasBeenSet = true; m_isWriter = value; }

    /**
     * <p> Specifies whether the Aurora cluster is the primary cluster (that is, has
     * read-write capability) for the Aurora global database with which it is
     * associated. </p>
     */
    inline GlobalClusterMember& WithIsWriter(bool value) { SetIsWriter(value); return *this;}

  private:

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet;

    Aws::Vector<Aws::String> m_readers;
    bool m_readersHasBeenSet;

    bool m_isWriter;
    bool m_isWriterHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
