/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> Evidence that's manually added to a control in Audit Manager.
   * <code>manualEvidence</code> can be one of the following:
   * <code>evidenceFileName</code>, <code>s3ResourcePath</code>, or
   * <code>textResponse</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ManualEvidence">AWS
   * API Reference</a></p>
   */
  class ManualEvidence
  {
  public:
    AWS_AUDITMANAGER_API ManualEvidence();
    AWS_AUDITMANAGER_API ManualEvidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ManualEvidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline const Aws::String& GetS3ResourcePath() const{ return m_s3ResourcePath; }

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline bool S3ResourcePathHasBeenSet() const { return m_s3ResourcePathHasBeenSet; }

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline void SetS3ResourcePath(const Aws::String& value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath = value; }

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline void SetS3ResourcePath(Aws::String&& value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath = std::move(value); }

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline void SetS3ResourcePath(const char* value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath.assign(value); }

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline ManualEvidence& WithS3ResourcePath(const Aws::String& value) { SetS3ResourcePath(value); return *this;}

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline ManualEvidence& WithS3ResourcePath(Aws::String&& value) { SetS3ResourcePath(std::move(value)); return *this;}

    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline ManualEvidence& WithS3ResourcePath(const char* value) { SetS3ResourcePath(value); return *this;}


    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline const Aws::String& GetTextResponse() const{ return m_textResponse; }

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline bool TextResponseHasBeenSet() const { return m_textResponseHasBeenSet; }

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline void SetTextResponse(const Aws::String& value) { m_textResponseHasBeenSet = true; m_textResponse = value; }

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline void SetTextResponse(Aws::String&& value) { m_textResponseHasBeenSet = true; m_textResponse = std::move(value); }

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline void SetTextResponse(const char* value) { m_textResponseHasBeenSet = true; m_textResponse.assign(value); }

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline ManualEvidence& WithTextResponse(const Aws::String& value) { SetTextResponse(value); return *this;}

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline ManualEvidence& WithTextResponse(Aws::String&& value) { SetTextResponse(std::move(value)); return *this;}

    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline ManualEvidence& WithTextResponse(const char* value) { SetTextResponse(value); return *this;}


    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline const Aws::String& GetEvidenceFileName() const{ return m_evidenceFileName; }

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline bool EvidenceFileNameHasBeenSet() const { return m_evidenceFileNameHasBeenSet; }

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline void SetEvidenceFileName(const Aws::String& value) { m_evidenceFileNameHasBeenSet = true; m_evidenceFileName = value; }

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline void SetEvidenceFileName(Aws::String&& value) { m_evidenceFileNameHasBeenSet = true; m_evidenceFileName = std::move(value); }

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline void SetEvidenceFileName(const char* value) { m_evidenceFileNameHasBeenSet = true; m_evidenceFileName.assign(value); }

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline ManualEvidence& WithEvidenceFileName(const Aws::String& value) { SetEvidenceFileName(value); return *this;}

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline ManualEvidence& WithEvidenceFileName(Aws::String&& value) { SetEvidenceFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline ManualEvidence& WithEvidenceFileName(const char* value) { SetEvidenceFileName(value); return *this;}

  private:

    Aws::String m_s3ResourcePath;
    bool m_s3ResourcePathHasBeenSet = false;

    Aws::String m_textResponse;
    bool m_textResponseHasBeenSet = false;

    Aws::String m_evidenceFileName;
    bool m_evidenceFileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
