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
#include <aws/rds/model/DBClusterSnapshotAttribute.h>
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
   * <p>Contains the results of a successful call to the
   * <code>DescribeDBClusterSnapshotAttributes</code> API action.</p> <p>Manual DB
   * cluster snapshot attributes are used to authorize other AWS accounts to copy or
   * restore a manual DB cluster snapshot. For more information, see the
   * <code>ModifyDBClusterSnapshotAttribute</code> API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterSnapshotAttributesResult">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBClusterSnapshotAttributesResult
  {
  public:
    DBClusterSnapshotAttributesResult();
    DBClusterSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the manual DB cluster snapshot that the attributes apply
     * to.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}


    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline const Aws::Vector<DBClusterSnapshotAttribute>& GetDBClusterSnapshotAttributes() const{ return m_dBClusterSnapshotAttributes; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline bool DBClusterSnapshotAttributesHasBeenSet() const { return m_dBClusterSnapshotAttributesHasBeenSet; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotAttributes(const Aws::Vector<DBClusterSnapshotAttribute>& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = value; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotAttributes(Aws::Vector<DBClusterSnapshotAttribute>&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes = std::move(value); }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(const Aws::Vector<DBClusterSnapshotAttribute>& value) { SetDBClusterSnapshotAttributes(value); return *this;}

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& WithDBClusterSnapshotAttributes(Aws::Vector<DBClusterSnapshotAttribute>&& value) { SetDBClusterSnapshotAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(const DBClusterSnapshotAttribute& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.push_back(value); return *this; }

    /**
     * <p>The list of attributes and values for the manual DB cluster snapshot.</p>
     */
    inline DBClusterSnapshotAttributesResult& AddDBClusterSnapshotAttributes(DBClusterSnapshotAttribute&& value) { m_dBClusterSnapshotAttributesHasBeenSet = true; m_dBClusterSnapshotAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet;

    Aws::Vector<DBClusterSnapshotAttribute> m_dBClusterSnapshotAttributes;
    bool m_dBClusterSnapshotAttributesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
