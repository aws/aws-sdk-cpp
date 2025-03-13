/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class GetRestoreTestingInferredMetadataResult
  {
  public:
    AWS_BACKUP_API GetRestoreTestingInferredMetadataResult() = default;
    AWS_BACKUP_API GetRestoreTestingInferredMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreTestingInferredMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInferredMetadata() const { return m_inferredMetadata; }
    template<typename InferredMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetInferredMetadata(InferredMetadataT&& value) { m_inferredMetadataHasBeenSet = true; m_inferredMetadata = std::forward<InferredMetadataT>(value); }
    template<typename InferredMetadataT = Aws::Map<Aws::String, Aws::String>>
    GetRestoreTestingInferredMetadataResult& WithInferredMetadata(InferredMetadataT&& value) { SetInferredMetadata(std::forward<InferredMetadataT>(value)); return *this;}
    template<typename InferredMetadataKeyT = Aws::String, typename InferredMetadataValueT = Aws::String>
    GetRestoreTestingInferredMetadataResult& AddInferredMetadata(InferredMetadataKeyT&& key, InferredMetadataValueT&& value) {
      m_inferredMetadataHasBeenSet = true; m_inferredMetadata.emplace(std::forward<InferredMetadataKeyT>(key), std::forward<InferredMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRestoreTestingInferredMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_inferredMetadata;
    bool m_inferredMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
