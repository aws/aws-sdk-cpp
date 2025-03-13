/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class ValidateAssessmentReportIntegrityRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateAssessmentReportIntegrity"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline const Aws::String& GetS3RelativePath() const { return m_s3RelativePath; }
    inline bool S3RelativePathHasBeenSet() const { return m_s3RelativePathHasBeenSet; }
    template<typename S3RelativePathT = Aws::String>
    void SetS3RelativePath(S3RelativePathT&& value) { m_s3RelativePathHasBeenSet = true; m_s3RelativePath = std::forward<S3RelativePathT>(value); }
    template<typename S3RelativePathT = Aws::String>
    ValidateAssessmentReportIntegrityRequest& WithS3RelativePath(S3RelativePathT&& value) { SetS3RelativePath(std::forward<S3RelativePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3RelativePath;
    bool m_s3RelativePathHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
