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
    AWS_ELASTICSEARCHSERVICE_API CreatePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackage"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique identifier for the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline CreatePackageRequest& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline CreatePackageRequest& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the package.</p>
     */
    inline CreatePackageRequest& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }

    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }

    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }

    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }

    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline CreatePackageRequest& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}

    /**
     * <p>Type of package. Currently supports only TXT-DICTIONARY.</p>
     */
    inline CreatePackageRequest& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}


    /**
     * <p>Description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }

    /**
     * <p>Description of the package.</p>
     */
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }

    /**
     * <p>Description of the package.</p>
     */
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }

    /**
     * <p>Description of the package.</p>
     */
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }

    /**
     * <p>Description of the package.</p>
     */
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }

    /**
     * <p>Description of the package.</p>
     */
    inline CreatePackageRequest& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}

    /**
     * <p>Description of the package.</p>
     */
    inline CreatePackageRequest& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the package.</p>
     */
    inline CreatePackageRequest& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}


    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline const PackageSource& GetPackageSource() const{ return m_packageSource; }

    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline bool PackageSourceHasBeenSet() const { return m_packageSourceHasBeenSet; }

    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline void SetPackageSource(const PackageSource& value) { m_packageSourceHasBeenSet = true; m_packageSource = value; }

    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline void SetPackageSource(PackageSource&& value) { m_packageSourceHasBeenSet = true; m_packageSource = std::move(value); }

    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline CreatePackageRequest& WithPackageSource(const PackageSource& value) { SetPackageSource(value); return *this;}

    /**
     * <p>The customer S3 location <code>PackageSource</code> for importing the
     * package.</p>
     */
    inline CreatePackageRequest& WithPackageSource(PackageSource&& value) { SetPackageSource(std::move(value)); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    PackageSource m_packageSource;
    bool m_packageSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
