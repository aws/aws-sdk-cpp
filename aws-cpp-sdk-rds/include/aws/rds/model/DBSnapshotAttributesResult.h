/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * attributes are used to authorize other Amazon Web Services accounts to copy or
   * restore a manual DB snapshot. For more information, see the
   * <code>ModifyDBSnapshotAttribute</code> API action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotAttributesResult">AWS
   * API Reference</a></p>
   */
  class DBSnapshotAttributesResult
  {
  public:
    AWS_RDS_API DBSnapshotAttributesResult();
    AWS_RDS_API DBSnapshotAttributesResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSnapshotAttributesResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::Vector<DBSnapshotAttribute> m_dBSnapshotAttributes;
    bool m_dBSnapshotAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
