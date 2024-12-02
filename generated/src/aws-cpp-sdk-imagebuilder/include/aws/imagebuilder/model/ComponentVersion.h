/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ComponentType.h>
#include <aws/imagebuilder/model/ComponentStatus.h>
#include <aws/imagebuilder/model/ProductCodeListItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The defining characteristics of a specific version of an Amazon Web Services
   * TOE component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentVersion">AWS
   * API Reference</a></p>
   */
  class ComponentVersion
  {
  public:
    AWS_IMAGEBUILDER_API ComponentVersion();
    AWS_IMAGEBUILDER_API ComponentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ComponentVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ComponentVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ComponentVersion& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ComponentVersion& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ComponentVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ComponentVersion& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the component.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ComponentVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ComponentVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ComponentVersion& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ComponentVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ComponentVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ComponentVersion& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the component.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ComponentVersion& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline ComponentVersion& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>he operating system (OS) version supported by the component. If the OS
     * information is available, a prefix match is performed against the base image OS
     * version during image recipe creation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedOsVersions() const{ return m_supportedOsVersions; }
    inline bool SupportedOsVersionsHasBeenSet() const { return m_supportedOsVersionsHasBeenSet; }
    inline void SetSupportedOsVersions(const Aws::Vector<Aws::String>& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = value; }
    inline void SetSupportedOsVersions(Aws::Vector<Aws::String>&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions = std::move(value); }
    inline ComponentVersion& WithSupportedOsVersions(const Aws::Vector<Aws::String>& value) { SetSupportedOsVersions(value); return *this;}
    inline ComponentVersion& WithSupportedOsVersions(Aws::Vector<Aws::String>&& value) { SetSupportedOsVersions(std::move(value)); return *this;}
    inline ComponentVersion& AddSupportedOsVersions(const Aws::String& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(value); return *this; }
    inline ComponentVersion& AddSupportedOsVersions(Aws::String&& value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(std::move(value)); return *this; }
    inline ComponentVersion& AddSupportedOsVersions(const char* value) { m_supportedOsVersionsHasBeenSet = true; m_supportedOsVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the component denotes whether the component is used to build the
     * image or only to test it.</p>
     */
    inline const ComponentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ComponentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ComponentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ComponentVersion& WithType(const ComponentType& value) { SetType(value); return *this;}
    inline ComponentVersion& WithType(ComponentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the component.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ComponentVersion& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ComponentVersion& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ComponentVersion& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the component was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }
    inline ComponentVersion& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}
    inline ComponentVersion& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}
    inline ComponentVersion& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current status of the component version.</p>
     */
    inline const ComponentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ComponentVersion& WithStatus(const ComponentStatus& value) { SetStatus(value); return *this;}
    inline ComponentVersion& WithStatus(ComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains product codes that are used for billing purposes for Amazon Web
     * Services Marketplace components.</p>
     */
    inline const Aws::Vector<ProductCodeListItem>& GetProductCodes() const{ return m_productCodes; }
    inline bool ProductCodesHasBeenSet() const { return m_productCodesHasBeenSet; }
    inline void SetProductCodes(const Aws::Vector<ProductCodeListItem>& value) { m_productCodesHasBeenSet = true; m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCodeListItem>&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::move(value); }
    inline ComponentVersion& WithProductCodes(const Aws::Vector<ProductCodeListItem>& value) { SetProductCodes(value); return *this;}
    inline ComponentVersion& WithProductCodes(Aws::Vector<ProductCodeListItem>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline ComponentVersion& AddProductCodes(const ProductCodeListItem& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(value); return *this; }
    inline ComponentVersion& AddProductCodes(ProductCodeListItem&& value) { m_productCodesHasBeenSet = true; m_productCodes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedOsVersions;
    bool m_supportedOsVersionsHasBeenSet = false;

    ComponentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    ComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<ProductCodeListItem> m_productCodes;
    bool m_productCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
