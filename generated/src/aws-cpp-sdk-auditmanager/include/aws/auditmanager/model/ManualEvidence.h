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
    AWS_AUDITMANAGER_API ManualEvidence() = default;
    AWS_AUDITMANAGER_API ManualEvidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ManualEvidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URL of the object that's imported as manual evidence. </p>
     */
    inline const Aws::String& GetS3ResourcePath() const { return m_s3ResourcePath; }
    inline bool S3ResourcePathHasBeenSet() const { return m_s3ResourcePathHasBeenSet; }
    template<typename S3ResourcePathT = Aws::String>
    void SetS3ResourcePath(S3ResourcePathT&& value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath = std::forward<S3ResourcePathT>(value); }
    template<typename S3ResourcePathT = Aws::String>
    ManualEvidence& WithS3ResourcePath(S3ResourcePathT&& value) { SetS3ResourcePath(std::forward<S3ResourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plain text response that's entered and saved as manual evidence.</p>
     */
    inline const Aws::String& GetTextResponse() const { return m_textResponse; }
    inline bool TextResponseHasBeenSet() const { return m_textResponseHasBeenSet; }
    template<typename TextResponseT = Aws::String>
    void SetTextResponse(TextResponseT&& value) { m_textResponseHasBeenSet = true; m_textResponse = std::forward<TextResponseT>(value); }
    template<typename TextResponseT = Aws::String>
    ManualEvidence& WithTextResponse(TextResponseT&& value) { SetTextResponse(std::forward<TextResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file that's uploaded as manual evidence. This name is
     * populated using the <code>evidenceFileName</code> value from the <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetEvidenceFileUploadUrl.html">
     * <code>GetEvidenceFileUploadUrl</code> </a> API response.</p>
     */
    inline const Aws::String& GetEvidenceFileName() const { return m_evidenceFileName; }
    inline bool EvidenceFileNameHasBeenSet() const { return m_evidenceFileNameHasBeenSet; }
    template<typename EvidenceFileNameT = Aws::String>
    void SetEvidenceFileName(EvidenceFileNameT&& value) { m_evidenceFileNameHasBeenSet = true; m_evidenceFileName = std::forward<EvidenceFileNameT>(value); }
    template<typename EvidenceFileNameT = Aws::String>
    ManualEvidence& WithEvidenceFileName(EvidenceFileNameT&& value) { SetEvidenceFileName(std::forward<EvidenceFileNameT>(value)); return *this;}
    ///@}
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
