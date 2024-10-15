/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>For extensions that are modules, a public third-party extension that must be
   * activated in your account in order for the module itself to be activated.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/module-versioning.html#requirements-for-modules">Requirements
   * for activating third-party public modules</a> in the <i>CloudFormation User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RequiredActivatedType">AWS
   * API Reference</a></p>
   */
  class RequiredActivatedType
  {
  public:
    AWS_CLOUDFORMATION_API RequiredActivatedType();
    AWS_CLOUDFORMATION_API RequiredActivatedType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API RequiredActivatedType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An alias assigned to the public extension, in this account and Region. If you
     * specify an alias for the extension, CloudFormation treats the alias as the
     * extension type name within this account and Region. You must use the alias to
     * refer to the extension in your templates, API calls, and CloudFormation
     * console.</p>
     */
    inline const Aws::String& GetTypeNameAlias() const{ return m_typeNameAlias; }
    inline bool TypeNameAliasHasBeenSet() const { return m_typeNameAliasHasBeenSet; }
    inline void SetTypeNameAlias(const Aws::String& value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias = value; }
    inline void SetTypeNameAlias(Aws::String&& value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias = std::move(value); }
    inline void SetTypeNameAlias(const char* value) { m_typeNameAliasHasBeenSet = true; m_typeNameAlias.assign(value); }
    inline RequiredActivatedType& WithTypeNameAlias(const Aws::String& value) { SetTypeNameAlias(value); return *this;}
    inline RequiredActivatedType& WithTypeNameAlias(Aws::String&& value) { SetTypeNameAlias(std::move(value)); return *this;}
    inline RequiredActivatedType& WithTypeNameAlias(const char* value) { SetTypeNameAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type name of the public extension.</p> <p>If you specified a
     * <code>TypeNameAlias</code> when enabling the extension in this account and
     * Region, CloudFormation treats that alias as the extension's type name within the
     * account and Region, not the type name of the public extension. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html#registry-public-enable-alias">Use
     * aliases to refer to extensions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetOriginalTypeName() const{ return m_originalTypeName; }
    inline bool OriginalTypeNameHasBeenSet() const { return m_originalTypeNameHasBeenSet; }
    inline void SetOriginalTypeName(const Aws::String& value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName = value; }
    inline void SetOriginalTypeName(Aws::String&& value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName = std::move(value); }
    inline void SetOriginalTypeName(const char* value) { m_originalTypeNameHasBeenSet = true; m_originalTypeName.assign(value); }
    inline RequiredActivatedType& WithOriginalTypeName(const Aws::String& value) { SetOriginalTypeName(value); return *this;}
    inline RequiredActivatedType& WithOriginalTypeName(Aws::String&& value) { SetOriginalTypeName(std::move(value)); return *this;}
    inline RequiredActivatedType& WithOriginalTypeName(const char* value) { SetOriginalTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publisher ID of the extension publisher.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }
    inline RequiredActivatedType& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}
    inline RequiredActivatedType& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}
    inline RequiredActivatedType& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the major versions of the extension type that the macro
     * supports.</p>
     */
    inline const Aws::Vector<int>& GetSupportedMajorVersions() const{ return m_supportedMajorVersions; }
    inline bool SupportedMajorVersionsHasBeenSet() const { return m_supportedMajorVersionsHasBeenSet; }
    inline void SetSupportedMajorVersions(const Aws::Vector<int>& value) { m_supportedMajorVersionsHasBeenSet = true; m_supportedMajorVersions = value; }
    inline void SetSupportedMajorVersions(Aws::Vector<int>&& value) { m_supportedMajorVersionsHasBeenSet = true; m_supportedMajorVersions = std::move(value); }
    inline RequiredActivatedType& WithSupportedMajorVersions(const Aws::Vector<int>& value) { SetSupportedMajorVersions(value); return *this;}
    inline RequiredActivatedType& WithSupportedMajorVersions(Aws::Vector<int>&& value) { SetSupportedMajorVersions(std::move(value)); return *this;}
    inline RequiredActivatedType& AddSupportedMajorVersions(int value) { m_supportedMajorVersionsHasBeenSet = true; m_supportedMajorVersions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_typeNameAlias;
    bool m_typeNameAliasHasBeenSet = false;

    Aws::String m_originalTypeName;
    bool m_originalTypeNameHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;

    Aws::Vector<int> m_supportedMajorVersions;
    bool m_supportedMajorVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
