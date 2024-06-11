/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/ResourceScanMetadata.h>
#include <aws/inspector2/model/CoverageResourceType.h>
#include <aws/inspector2/model/ScanMode.h>
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


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the covered resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CoveredResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CoveredResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CoveredResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was last checked for vulnerabilities.</p>
     */
    inline const Aws::Utils::DateTime& GetLastScannedAt() const{ return m_lastScannedAt; }
    inline bool LastScannedAtHasBeenSet() const { return m_lastScannedAtHasBeenSet; }
    inline void SetLastScannedAt(const Aws::Utils::DateTime& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt = value; }
    inline void SetLastScannedAt(Aws::Utils::DateTime&& value) { m_lastScannedAtHasBeenSet = true; m_lastScannedAt = std::move(value); }
    inline CoveredResource& WithLastScannedAt(const Aws::Utils::DateTime& value) { SetLastScannedAt(value); return *this;}
    inline CoveredResource& WithLastScannedAt(Aws::Utils::DateTime&& value) { SetLastScannedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the covered resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline CoveredResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline CoveredResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline CoveredResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the metadata.</p>
     */
    inline const ResourceScanMetadata& GetResourceMetadata() const{ return m_resourceMetadata; }
    inline bool ResourceMetadataHasBeenSet() const { return m_resourceMetadataHasBeenSet; }
    inline void SetResourceMetadata(const ResourceScanMetadata& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = value; }
    inline void SetResourceMetadata(ResourceScanMetadata&& value) { m_resourceMetadataHasBeenSet = true; m_resourceMetadata = std::move(value); }
    inline CoveredResource& WithResourceMetadata(const ResourceScanMetadata& value) { SetResourceMetadata(value); return *this;}
    inline CoveredResource& WithResourceMetadata(ResourceScanMetadata&& value) { SetResourceMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the covered resource.</p>
     */
    inline const CoverageResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const CoverageResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(CoverageResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline CoveredResource& WithResourceType(const CoverageResourceType& value) { SetResourceType(value); return *this;}
    inline CoveredResource& WithResourceType(CoverageResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan method that is applied to the instance.</p>
     */
    inline const ScanMode& GetScanMode() const{ return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    inline void SetScanMode(const ScanMode& value) { m_scanModeHasBeenSet = true; m_scanMode = value; }
    inline void SetScanMode(ScanMode&& value) { m_scanModeHasBeenSet = true; m_scanMode = std::move(value); }
    inline CoveredResource& WithScanMode(const ScanMode& value) { SetScanMode(value); return *this;}
    inline CoveredResource& WithScanMode(ScanMode&& value) { SetScanMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the scan covering the resource.</p>
     */
    inline const ScanStatus& GetScanStatus() const{ return m_scanStatus; }
    inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
    inline void SetScanStatus(const ScanStatus& value) { m_scanStatusHasBeenSet = true; m_scanStatus = value; }
    inline void SetScanStatus(ScanStatus&& value) { m_scanStatusHasBeenSet = true; m_scanStatus = std::move(value); }
    inline CoveredResource& WithScanStatus(const ScanStatus& value) { SetScanStatus(value); return *this;}
    inline CoveredResource& WithScanStatus(ScanStatus&& value) { SetScanStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector scan type covering the resource.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline CoveredResource& WithScanType(const ScanType& value) { SetScanType(value); return *this;}
    inline CoveredResource& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastScannedAt;
    bool m_lastScannedAtHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ResourceScanMetadata m_resourceMetadata;
    bool m_resourceMetadataHasBeenSet = false;

    CoverageResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ScanMode m_scanMode;
    bool m_scanModeHasBeenSet = false;

    ScanStatus m_scanStatus;
    bool m_scanStatusHasBeenSet = false;

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
