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
#include <aws/rds/model/DBSnapshotAttribute.h>
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
   * <code>DescribeDBSnapshotAttributes</code> API action.</p> <p>Manual DB snapshot
   * attributes are used to authorize other AWS accounts to copy or restore a manual
   * DB snapshot. For more information, see the
   * <code>ModifyDBSnapshotAttribute</code> API action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotAttributesResult">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBSnapshotAttributesResult
  {
  public:
    DBSnapshotAttributesResult();
    DBSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline DBSnapshotAttributesResult& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline DBSnapshotAttributesResult& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the manual DB snapshot that the attributes apply to.</p>
     */
    inline DBSnapshotAttributesResult& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline const Aws::Vector<DBSnapshotAttribute>& GetDBSnapshotAttributes() const{ return m_dBSnapshotAttributes; }

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline bool DBSnapshotAttributesHasBeenSet() const { return m_dBSnapshotAttributesHasBeenSet; }

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline void SetDBSnapshotAttributes(const Aws::Vector<DBSnapshotAttribute>& value) { m_dBSnapshotAttributesHasBeenSet = true; m_dBSnapshotAttributes = value; }

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline void SetDBSnapshotAttributes(Aws::Vector<DBSnapshotAttribute>&& value) { m_dBSnapshotAttributesHasBeenSet = true; m_dBSnapshotAttributes = std::move(value); }

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline DBSnapshotAttributesResult& WithDBSnapshotAttributes(const Aws::Vector<DBSnapshotAttribute>& value) { SetDBSnapshotAttributes(value); return *this;}

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline DBSnapshotAttributesResult& WithDBSnapshotAttributes(Aws::Vector<DBSnapshotAttribute>&& value) { SetDBSnapshotAttributes(std::move(value)); return *this;}

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline DBSnapshotAttributesResult& AddDBSnapshotAttributes(const DBSnapshotAttribute& value) { m_dBSnapshotAttributesHasBeenSet = true; m_dBSnapshotAttributes.push_back(value); return *this; }

    /**
     * <p>The list of attributes and values for the manual DB snapshot.</p>
     */
    inline DBSnapshotAttributesResult& AddDBSnapshotAttributes(DBSnapshotAttribute&& value) { m_dBSnapshotAttributesHasBeenSet = true; m_dBSnapshotAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;

    Aws::Vector<DBSnapshotAttribute> m_dBSnapshotAttributes;
    bool m_dBSnapshotAttributesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
