/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/SourceApiAssociationStatus.h>
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
namespace AppSync
{
namespace Model
{
  class StartSchemaMergeResult
  {
  public:
    AWS_APPSYNC_API StartSchemaMergeResult() = default;
    AWS_APPSYNC_API StartSchemaMergeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API StartSchemaMergeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The state of the source API association.</p>
     */
    inline SourceApiAssociationStatus GetSourceApiAssociationStatus() const { return m_sourceApiAssociationStatus; }
    inline void SetSourceApiAssociationStatus(SourceApiAssociationStatus value) { m_sourceApiAssociationStatusHasBeenSet = true; m_sourceApiAssociationStatus = value; }
    inline StartSchemaMergeResult& WithSourceApiAssociationStatus(SourceApiAssociationStatus value) { SetSourceApiAssociationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSchemaMergeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SourceApiAssociationStatus m_sourceApiAssociationStatus{SourceApiAssociationStatus::NOT_SET};
    bool m_sourceApiAssociationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
