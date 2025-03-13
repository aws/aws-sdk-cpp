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
namespace Http
{
    class URI;
} //namespace Http
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetEvidenceFileUploadUrlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceFileUploadUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEvidenceFileUploadUrl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The file that you want to upload. For a list of supported file formats, see
     * <a
     * href="https://docs.aws.amazon.com/audit-manager/latest/userguide/upload-evidence.html#supported-manual-evidence-files">Supported
     * file types for manual evidence</a> in the <i>Audit Manager User Guide</i>.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    GetEvidenceFileUploadUrlRequest& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
