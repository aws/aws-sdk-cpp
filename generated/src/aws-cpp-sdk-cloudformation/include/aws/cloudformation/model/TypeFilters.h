/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/Category.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Filter criteria to use in determining which extensions to
   * return.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TypeFilters">AWS
   * API Reference</a></p>
   */
  class TypeFilters
  {
  public:
    AWS_CLOUDFORMATION_API TypeFilters();
    AWS_CLOUDFORMATION_API TypeFilters(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TypeFilters& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The category of extensions to return.</p> <ul> <li> <p>
     * <code>REGISTERED</code>: Private extensions that have been registered for this
     * account and Region.</p> </li> <li> <p> <code>ACTIVATED</code>: Public extensions
     * that have been activated for this account and Region.</p> </li> <li> <p>
     * <code>THIRD_PARTY</code>: Extensions available for use from publishers other
     * than Amazon. This includes:</p> <ul> <li> <p>Private extensions registered in
     * the account.</p> </li> <li> <p>Public extensions from publishers other than
     * Amazon, whether activated or not.</p> </li> </ul> </li> <li> <p>
     * <code>AWS_TYPES</code>: Extensions available for use from Amazon.</p> </li>
     * </ul>
     */
    inline const Category& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Category& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Category&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline TypeFilters& WithCategory(const Category& value) { SetCategory(value); return *this;}
    inline TypeFilters& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the publisher of the extension.</p> <p>Extensions published by
     * Amazon aren't assigned a publisher ID. Use the <code>AWS_TYPES</code> category
     * to specify a list of types published by Amazon.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }
    inline TypeFilters& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}
    inline TypeFilters& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}
    inline TypeFilters& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix to use as a filter for results.</p>
     */
    inline const Aws::String& GetTypeNamePrefix() const{ return m_typeNamePrefix; }
    inline bool TypeNamePrefixHasBeenSet() const { return m_typeNamePrefixHasBeenSet; }
    inline void SetTypeNamePrefix(const Aws::String& value) { m_typeNamePrefixHasBeenSet = true; m_typeNamePrefix = value; }
    inline void SetTypeNamePrefix(Aws::String&& value) { m_typeNamePrefixHasBeenSet = true; m_typeNamePrefix = std::move(value); }
    inline void SetTypeNamePrefix(const char* value) { m_typeNamePrefixHasBeenSet = true; m_typeNamePrefix.assign(value); }
    inline TypeFilters& WithTypeNamePrefix(const Aws::String& value) { SetTypeNamePrefix(value); return *this;}
    inline TypeFilters& WithTypeNamePrefix(Aws::String&& value) { SetTypeNamePrefix(std::move(value)); return *this;}
    inline TypeFilters& WithTypeNamePrefix(const char* value) { SetTypeNamePrefix(value); return *this;}
    ///@}
  private:

    Category m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::String m_typeNamePrefix;
    bool m_typeNamePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
