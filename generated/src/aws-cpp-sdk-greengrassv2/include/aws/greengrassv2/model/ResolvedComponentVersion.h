/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/greengrassv2/model/VendorGuidance.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a component version that is compatible to run on a
   * Greengrass core device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ResolvedComponentVersion">AWS
   * API Reference</a></p>
   */
  class ResolvedComponentVersion
  {
  public:
    AWS_GREENGRASSV2_API ResolvedComponentVersion() = default;
    AWS_GREENGRASSV2_API ResolvedComponentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ResolvedComponentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResolvedComponentVersion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    ResolvedComponentVersion& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    ResolvedComponentVersion& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recipe of the component version.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetRecipe() const { return m_recipe; }
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }
    template<typename RecipeT = Aws::Utils::ByteBuffer>
    void SetRecipe(RecipeT&& value) { m_recipeHasBeenSet = true; m_recipe = std::forward<RecipeT>(value); }
    template<typename RecipeT = Aws::Utils::ByteBuffer>
    ResolvedComponentVersion& WithRecipe(RecipeT&& value) { SetRecipe(std::forward<RecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor guidance state for the component version. This state indicates
     * whether the component version has any issues that you should consider before you
     * deploy it. The vendor guidance state can be:</p> <ul> <li> <p>
     * <code>ACTIVE</code> – This component version is available and recommended for
     * use.</p> </li> <li> <p> <code>DISCONTINUED</code> – This component version has
     * been discontinued by its publisher. You can deploy this component version, but
     * we recommend that you use a different version of this component.</p> </li> <li>
     * <p> <code>DELETED</code> – This component version has been deleted by its
     * publisher, so you can't deploy it. If you have any existing deployments that
     * specify this component version, those deployments will fail.</p> </li> </ul>
     */
    inline VendorGuidance GetVendorGuidance() const { return m_vendorGuidance; }
    inline bool VendorGuidanceHasBeenSet() const { return m_vendorGuidanceHasBeenSet; }
    inline void SetVendorGuidance(VendorGuidance value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }
    inline ResolvedComponentVersion& WithVendorGuidance(VendorGuidance value) { SetVendorGuidance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResolvedComponentVersion& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_recipe{};
    bool m_recipeHasBeenSet = false;

    VendorGuidance m_vendorGuidance{VendorGuidance::NOT_SET};
    bool m_vendorGuidanceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
