/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/PackageType.h>
#include <aws/es/model/PackageSource.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for request parameters to <code> <a>CreatePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreatePackageRequest">AWS
   * API Reference</a></p>
   */
  class CreatePackageRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreatePackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackage"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique identifier for the package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    CreatePackageRequest& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline PackageType GetPackageType() const { return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(PackageType value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline CreatePackageRequest& WithPackageType(PackageType value) { SetPackageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const { return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    template<typename PackageDescriptionT = Aws::String>
    void SetPackageDescription(PackageDescriptionT&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::forward<PackageDescriptionT>(value); }
    template<typename PackageDescriptionT = Aws::String>
    CreatePackageRequest& WithPackageDescription(PackageDescriptionT&& value) { SetPackageDescription(std::forward<PackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline const PackageSource& GetPackageSource() const { return m_packageSource; }
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }
    template<typename PackageSourceT = PackageSource>
    void SetPackageSource(PackageSourceT&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::forward<PackageSourceT>(value); }
    template<typename PackageSourceT = PackageSource>
    CreatePackageRequest& WithPackageSource(PackageSourceT&& value) { SetPackageSource(std::forward<PackageSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType{PackageType::NOT_SET};
    bool m_packageTypeHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    PackageSource m_packageSource;
    bool m_packageSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
