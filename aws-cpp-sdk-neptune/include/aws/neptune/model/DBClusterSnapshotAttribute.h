/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the name and values of a manual DB cluster snapshot attribute.</p>
   * <p>Manual DB cluster snapshot attributes are used to authorize other Amazon
   * accounts to restore a manual DB cluster snapshot. For more information, see the
   * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBClusterSnapshotAttribute">AWS
   * API Reference</a></p>
   */
  class DBClusterSnapshotAttribute
  {
  public:
    AWS_NEPTUNE_API DBClusterSnapshotAttribute();
    AWS_NEPTUNE_API DBClusterSnapshotAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBClusterSnapshotAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline DBClusterSnapshotAttribute& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline DBClusterSnapshotAttribute& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the manual DB cluster snapshot attribute.</p> <p>The attribute
     * named <code>restore</code> refers to the list of Amazon accounts that have
     * permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <a>ModifyDBClusterSnapshotAttribute</a> API action.</p>
     */
    inline DBClusterSnapshotAttribute& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeValues() const{ return m_attributeValues; }

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline void SetAttributeValues(const Aws::Vector<Aws::String>& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = value; }

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline void SetAttributeValues(Aws::Vector<Aws::String>&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::move(value); }

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline DBClusterSnapshotAttribute& WithAttributeValues(const Aws::Vector<Aws::String>& value) { SetAttributeValues(value); return *this;}

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline DBClusterSnapshotAttribute& WithAttributeValues(Aws::Vector<Aws::String>&& value) { SetAttributeValues(std::move(value)); return *this;}

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline DBClusterSnapshotAttribute& AddAttributeValues(const Aws::String& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(value); return *this; }

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline DBClusterSnapshotAttribute& AddAttributeValues(Aws::String&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The value(s) for the manual DB cluster snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon accounts that are authorized to copy
     * or restore the manual DB cluster snapshot. If a value of <code>all</code> is in
     * the list, then the manual DB cluster snapshot is public and available for any
     * Amazon account to copy or restore.</p>
     */
    inline DBClusterSnapshotAttribute& AddAttributeValues(const char* value) { m_attributeValuesHasBeenSet = true; m_attributeValues.push_back(value); return *this; }

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeValues;
    bool m_attributeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
