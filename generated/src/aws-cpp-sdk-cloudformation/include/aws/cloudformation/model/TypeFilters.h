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
    AWS_CLOUDFORMATION_API TypeFilters() = default;
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
    inline Category GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(Category value) { m_categoryHasBeenSet = true; m_category = value; }
    inline TypeFilters& WithCategory(Category value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the publisher of the extension.</p> <p>Extensions published by
     * Amazon aren't assigned a publisher ID. Use the <code>AWS_TYPES</code> category
     * to specify a list of types published by Amazon.</p>
     */
    inline const Aws::String& GetPublisherId() const { return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    template<typename PublisherIdT = Aws::String>
    void SetPublisherId(PublisherIdT&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::forward<PublisherIdT>(value); }
    template<typename PublisherIdT = Aws::String>
    TypeFilters& WithPublisherId(PublisherIdT&& value) { SetPublisherId(std::forward<PublisherIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix to use as a filter for results.</p>
     */
    inline const Aws::String& GetTypeNamePrefix() const { return m_typeNamePrefix; }
    inline bool TypeNamePrefixHasBeenSet() const { return m_typeNamePrefixHasBeenSet; }
    template<typename TypeNamePrefixT = Aws::String>
    void SetTypeNamePrefix(TypeNamePrefixT&& value) { m_typeNamePrefixHasBeenSet = true; m_typeNamePrefix = std::forward<TypeNamePrefixT>(value); }
    template<typename TypeNamePrefixT = Aws::String>
    TypeFilters& WithTypeNamePrefix(TypeNamePrefixT&& value) { SetTypeNamePrefix(std::forward<TypeNamePrefixT>(value)); return *this;}
    ///@}
  private:

    Category m_category{Category::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::String m_typeNamePrefix;
    bool m_typeNamePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
