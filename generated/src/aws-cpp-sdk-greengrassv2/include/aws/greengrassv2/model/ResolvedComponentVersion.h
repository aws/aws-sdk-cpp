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
    AWS_GREENGRASSV2_API ResolvedComponentVersion();
    AWS_GREENGRASSV2_API ResolvedComponentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ResolvedComponentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline ResolvedComponentVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline ResolvedComponentVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline ResolvedComponentVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline ResolvedComponentVersion& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ResolvedComponentVersion& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ResolvedComponentVersion& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }

    /**
     * <p>The version of the component.</p>
     */
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }

    /**
     * <p>The version of the component.</p>
     */
    inline ResolvedComponentVersion& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ResolvedComponentVersion& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p>
     */
    inline ResolvedComponentVersion& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}


    /**
     * <p>The recipe of the component version.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetRecipe() const{ return m_recipe; }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline void SetRecipe(const Aws::Utils::ByteBuffer& value) { m_recipeHasBeenSet = true; m_recipe = value; }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline void SetRecipe(Aws::Utils::ByteBuffer&& value) { m_recipeHasBeenSet = true; m_recipe = std::move(value); }

    /**
     * <p>The recipe of the component version.</p>
     */
    inline ResolvedComponentVersion& WithRecipe(const Aws::Utils::ByteBuffer& value) { SetRecipe(value); return *this;}

    /**
     * <p>The recipe of the component version.</p>
     */
    inline ResolvedComponentVersion& WithRecipe(Aws::Utils::ByteBuffer&& value) { SetRecipe(std::move(value)); return *this;}


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
    inline const VendorGuidance& GetVendorGuidance() const{ return m_vendorGuidance; }

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
    inline bool VendorGuidanceHasBeenSet() const { return m_vendorGuidanceHasBeenSet; }

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
    inline void SetVendorGuidance(const VendorGuidance& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }

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
    inline void SetVendorGuidance(VendorGuidance&& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = std::move(value); }

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
    inline ResolvedComponentVersion& WithVendorGuidance(const VendorGuidance& value) { SetVendorGuidance(value); return *this;}

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
    inline ResolvedComponentVersion& WithVendorGuidance(VendorGuidance&& value) { SetVendorGuidance(std::move(value)); return *this;}


    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline ResolvedComponentVersion& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline ResolvedComponentVersion& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline ResolvedComponentVersion& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_recipe;
    bool m_recipeHasBeenSet = false;

    VendorGuidance m_vendorGuidance;
    bool m_vendorGuidanceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
