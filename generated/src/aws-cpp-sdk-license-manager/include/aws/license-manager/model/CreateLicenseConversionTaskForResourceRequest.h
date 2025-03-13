/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConversionContext.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateLicenseConversionTaskForResourceRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseConversionTaskForResource"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CreateLicenseConversionTaskForResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the CLI </a> in the <i>License Manager User Guide</i>.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const { return m_sourceLicenseContext; }
    inline bool SourceLicenseContextHasBeenSet() const { return m_sourceLicenseContextHasBeenSet; }
    template<typename SourceLicenseContextT = LicenseConversionContext>
    void SetSourceLicenseContext(SourceLicenseContextT&& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = std::forward<SourceLicenseContextT>(value); }
    template<typename SourceLicenseContextT = LicenseConversionContext>
    CreateLicenseConversionTaskForResourceRequest& WithSourceLicenseContext(SourceLicenseContextT&& value) { SetSourceLicenseContext(std::forward<SourceLicenseContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the CLI </a> in the <i>License Manager User Guide</i>.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const { return m_destinationLicenseContext; }
    inline bool DestinationLicenseContextHasBeenSet() const { return m_destinationLicenseContextHasBeenSet; }
    template<typename DestinationLicenseContextT = LicenseConversionContext>
    void SetDestinationLicenseContext(DestinationLicenseContextT&& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = std::forward<DestinationLicenseContextT>(value); }
    template<typename DestinationLicenseContextT = LicenseConversionContext>
    CreateLicenseConversionTaskForResourceRequest& WithDestinationLicenseContext(DestinationLicenseContextT&& value) { SetDestinationLicenseContext(std::forward<DestinationLicenseContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    LicenseConversionContext m_sourceLicenseContext;
    bool m_sourceLicenseContextHasBeenSet = false;

    LicenseConversionContext m_destinationLicenseContext;
    bool m_destinationLicenseContextHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
