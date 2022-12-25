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
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateAssessmentReportIntegrity"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline const Aws::String& GetS3RelativePath() const{ return m_s3RelativePath; }

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline bool S3RelativePathHasBeenSet() const { return m_s3RelativePathHasBeenSet; }

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline void SetS3RelativePath(const Aws::String& value) { m_s3RelativePathHasBeenSet = true; m_s3RelativePath = value; }

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline void SetS3RelativePath(Aws::String&& value) { m_s3RelativePathHasBeenSet = true; m_s3RelativePath = std::move(value); }

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline void SetS3RelativePath(const char* value) { m_s3RelativePathHasBeenSet = true; m_s3RelativePath.assign(value); }

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline ValidateAssessmentReportIntegrityRequest& WithS3RelativePath(const Aws::String& value) { SetS3RelativePath(value); return *this;}

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline ValidateAssessmentReportIntegrityRequest& WithS3RelativePath(Aws::String&& value) { SetS3RelativePath(std::move(value)); return *this;}

    /**
     * <p> The relative path of the Amazon S3 bucket that the assessment report is
     * stored in. </p>
     */
    inline ValidateAssessmentReportIntegrityRequest& WithS3RelativePath(const char* value) { SetS3RelativePath(value); return *this;}

  private:

    Aws::String m_s3RelativePath;
    bool m_s3RelativePathHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
