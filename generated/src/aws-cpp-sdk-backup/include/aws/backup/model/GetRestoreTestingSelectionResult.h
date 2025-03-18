/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/RestoreTestingSelectionForGet.h>
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
  class GetRestoreTestingSelectionResult
  {
  public:
    AWS_BACKUP_API GetRestoreTestingSelectionResult() = default;
    AWS_BACKUP_API GetRestoreTestingSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreTestingSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique name of the restore testing selection.</p>
     */
    inline const RestoreTestingSelectionForGet& GetRestoreTestingSelection() const { return m_restoreTestingSelection; }
    template<typename RestoreTestingSelectionT = RestoreTestingSelectionForGet>
    void SetRestoreTestingSelection(RestoreTestingSelectionT&& value) { m_restoreTestingSelectionHasBeenSet = true; m_restoreTestingSelection = std::forward<RestoreTestingSelectionT>(value); }
    template<typename RestoreTestingSelectionT = RestoreTestingSelectionForGet>
    GetRestoreTestingSelectionResult& WithRestoreTestingSelection(RestoreTestingSelectionT&& value) { SetRestoreTestingSelection(std::forward<RestoreTestingSelectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRestoreTestingSelectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RestoreTestingSelectionForGet m_restoreTestingSelection;
    bool m_restoreTestingSelectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
