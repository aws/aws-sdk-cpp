/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class CreateUploadUrlRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API CreateUploadUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUploadUrl"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline CreateUploadUrlRequest& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline CreateUploadUrlRequest& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scan that will use the uploaded resource. CodeGuru Security
     * uses the unique scan name to track revisions across multiple scans of the same
     * resource. Use this <code>scanName</code> when you call <code>CreateScan</code>
     * on the code resource you upload to this URL.</p>
     */
    inline CreateUploadUrlRequest& WithScanName(const char* value) { SetScanName(value); return *this;}

  private:

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
