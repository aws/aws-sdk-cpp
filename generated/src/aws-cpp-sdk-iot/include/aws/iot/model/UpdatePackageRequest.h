/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdatePackageRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdatePackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackage"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the target software package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    UpdatePackageRequest& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePackageRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the default package version.</p> <p> <b>Note:</b> You cannot name
     * a <code>defaultVersion</code> and set <code>unsetDefaultVersion</code> equal to
     * <code>true</code> at the same time.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const { return m_defaultVersionName; }
    inline bool DefaultVersionNameHasBeenSet() const { return m_defaultVersionNameHasBeenSet; }
    template<typename DefaultVersionNameT = Aws::String>
    void SetDefaultVersionName(DefaultVersionNameT&& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = std::forward<DefaultVersionNameT>(value); }
    template<typename DefaultVersionNameT = Aws::String>
    UpdatePackageRequest& WithDefaultVersionName(DefaultVersionNameT&& value) { SetDefaultVersionName(std::forward<DefaultVersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want to remove the named default package version from
     * the software package. Set as <code>true</code> to remove the default package
     * version. </p> <p> <b>Note:</b> You cannot name a <code>defaultVersion</code> and
     * set <code>unsetDefaultVersion</code> equal to <code>true</code> at the same
     * time.</p>
     */
    inline bool GetUnsetDefaultVersion() const { return m_unsetDefaultVersion; }
    inline bool UnsetDefaultVersionHasBeenSet() const { return m_unsetDefaultVersionHasBeenSet; }
    inline void SetUnsetDefaultVersion(bool value) { m_unsetDefaultVersionHasBeenSet = true; m_unsetDefaultVersion = value; }
    inline UpdatePackageRequest& WithUnsetDefaultVersion(bool value) { SetUnsetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdatePackageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultVersionName;
    bool m_defaultVersionNameHasBeenSet = false;

    bool m_unsetDefaultVersion{false};
    bool m_unsetDefaultVersionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
