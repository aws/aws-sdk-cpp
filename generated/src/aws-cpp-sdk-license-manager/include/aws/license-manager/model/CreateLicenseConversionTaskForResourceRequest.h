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
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseConversionTaskForResource"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource you are converting the license
     * type for.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline const LicenseConversionContext& GetSourceLicenseContext() const{ return m_sourceLicenseContext; }

    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline bool SourceLicenseContextHasBeenSet() const { return m_sourceLicenseContextHasBeenSet; }

    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline void SetSourceLicenseContext(const LicenseConversionContext& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = value; }

    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline void SetSourceLicenseContext(LicenseConversionContext&& value) { m_sourceLicenseContextHasBeenSet = true; m_sourceLicenseContext = std::move(value); }

    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithSourceLicenseContext(const LicenseConversionContext& value) { SetSourceLicenseContext(value); return *this;}

    /**
     * <p>Information that identifies the license type you are converting from. For the
     * structure of the source license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithSourceLicenseContext(LicenseConversionContext&& value) { SetSourceLicenseContext(std::move(value)); return *this;}


    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline const LicenseConversionContext& GetDestinationLicenseContext() const{ return m_destinationLicenseContext; }

    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline bool DestinationLicenseContextHasBeenSet() const { return m_destinationLicenseContextHasBeenSet; }

    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline void SetDestinationLicenseContext(const LicenseConversionContext& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = value; }

    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline void SetDestinationLicenseContext(LicenseConversionContext&& value) { m_destinationLicenseContextHasBeenSet = true; m_destinationLicenseContext = std::move(value); }

    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithDestinationLicenseContext(const LicenseConversionContext& value) { SetDestinationLicenseContext(value); return *this;}

    /**
     * <p>Information that identifies the license type you are converting to. For the
     * structure of the destination license, see <a
     * href="https://docs.aws.amazon.com/license-manager/latest/userguide/conversion-procedures.html#conversion-cli">Convert
     * a license type using the Amazon Web Services CLI</a> in the <i>License Manager
     * User Guide</i>.</p>
     */
    inline CreateLicenseConversionTaskForResourceRequest& WithDestinationLicenseContext(LicenseConversionContext&& value) { SetDestinationLicenseContext(std::move(value)); return *this;}

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
