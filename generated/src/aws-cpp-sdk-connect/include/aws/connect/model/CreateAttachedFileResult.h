/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FileStatusType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
/**
 * Response from CreateAttachedFile API.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateAttachedFileResponse">AWS
 * API Reference</a></p>
 */
class CreateAttachedFileResult {
 public:
  AWS_CONNECT_API CreateAttachedFileResult() = default;
  AWS_CONNECT_API CreateAttachedFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateAttachedFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the attached file resource (ARN).</p>
   */
  inline const Aws::String& GetFileArn() const { return m_fileArn; }
  template <typename FileArnT = Aws::String>
  void SetFileArn(FileArnT&& value) {
    m_fileArnHasBeenSet = true;
    m_fileArn = std::forward<FileArnT>(value);
  }
  template <typename FileArnT = Aws::String>
  CreateAttachedFileResult& WithFileArn(FileArnT&& value) {
    SetFileArn(std::forward<FileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the attached file resource.</p>
   */
  inline const Aws::String& GetFileId() const { return m_fileId; }
  template <typename FileIdT = Aws::String>
  void SetFileId(FileIdT&& value) {
    m_fileIdHasBeenSet = true;
    m_fileId = std::forward<FileIdT>(value);
  }
  template <typename FileIdT = Aws::String>
  CreateAttachedFileResult& WithFileId(FileIdT&& value) {
    SetFileId(std::forward<FileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of Creation of the file resource as an ISO timestamp. It's specified
   * in ISO 8601 format: <code>yyyy-MM-ddThh:mm:ss.SSSZ</code>. For example,
   * <code>2024-05-03T02:41:28.172Z</code>.</p>
   */
  inline const Aws::String& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::String>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::String>
  CreateAttachedFileResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the attached file. Valid values:
   * <code>PROCESSING</code> | <code>APPROVED</code> | <code>REJECTED</code> |
   * <code>FAILED</code>.</p>
   */
  inline FileStatusType GetFileStatus() const { return m_fileStatus; }
  inline void SetFileStatus(FileStatusType value) {
    m_fileStatusHasBeenSet = true;
    m_fileStatus = value;
  }
  inline CreateAttachedFileResult& WithFileStatus(FileStatusType value) {
    SetFileStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateAttachedFileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_fileArn;

  Aws::String m_fileId;

  Aws::String m_creationTime;

  FileStatusType m_fileStatus{FileStatusType::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fileArnHasBeenSet = false;
  bool m_fileIdHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_fileStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
