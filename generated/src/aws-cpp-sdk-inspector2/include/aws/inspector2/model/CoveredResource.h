/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ResourceScanMetadata.h>
#include <aws/inspector2/model/CoverageResourceType.h>
#include <aws/inspector2/model/ScanStatus.h>
#include <aws/inspector2/model/ScanType.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that contains details about a resource covered by Amazon
   * Inspector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoveredResource">AWS
   * API Reference</a></p>
   */
  class CoveredResource
  {
  public:
    AWS_INSPECTOR2_API CoveredResource();
    AWS_INSPECTOR2_API CoveredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CoveredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline CoveredResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline CoveredResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline CoveredResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the covered resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline CoveredResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline CoveredResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the covered resource.</p>
     */
    inline CoveredResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline const ResourceScanMetadata& GetResourceMetadata() const{ return m_resourceMetadata; }

    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline bool ResourceMetadataHasBeenSet() const { return m_resourceMetadataHasBeenSet; }

    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline void SetResourceMetadata(const ResourceScanMetadata& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = value; }

    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline void SetResourceMetadata(ResourceScanMetadata&& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = std::move(value); }

    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline CoveredResource& WithResourceMetadata(const ResourceScanMetadata& value) { SetResourceMetadata(value); return *this;}

    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline CoveredResource& WithResourceMetadata(ResourceScanMetadata&& value) { SetResourceMetadata(std::move(value)); return *this;}


    /**
     * <p>The type of the covered resource.</p>
     */
    inline const CoverageResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the covered resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the covered resource.</p>
     */
    inline void SetResourceType(const CoverageResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the covered resource.</p>
     */
    inline void SetResourceType(CoverageResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the covered resource.</p>
     */
    inline CoveredResource& WithResourceType(const CoverageResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the covered resource.</p>
     */
    inline CoveredResource& WithResourceType(CoverageResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline const ScanStatus& GetScanStatus() const{ return m_scanStatus; }

    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }

    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline void SetScanStatus(const ScanStatus& value) { m_scanStatusHasBeenSet = true; m_scanStatus = value; }

    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline void SetScanStatus(ScanStatus&& value) { m_scanStatusHasBeenSet = true; m_scanStatus = std::move(value); }

    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline CoveredResource& WithScanStatus(const ScanStatus& value) { SetScanStatus(value); return *this;}

    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline CoveredResource& WithScanStatus(ScanStatus&& value) { SetScanStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }

    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline CoveredResource& WithScanType(const ScanType& value) { SetScanType(value); return *this;}

    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline CoveredResource& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResourceScanMetadata m_resourceMetadata;
    bool m_resourceMetadataHasBeenSet = false;

    CoverageResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ScanStatus m_scanStatus;
    bool m_scanStatusHasBeenSet = false;

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
