/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/DeleteUniqueIdStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/DeleteUniqueIdError.h>
#include <aws/entityresolution/model/DeletedUniqueId.h>
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
namespace EntityResolution
{
namespace Model
{
  class BatchDeleteUniqueIdResult
  {
  public:
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdResult() = default;
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the batch delete unique ID operation.</p>
     */
    inline DeleteUniqueIdStatus GetStatus() const { return m_status; }
    inline void SetStatus(DeleteUniqueIdStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchDeleteUniqueIdResult& WithStatus(DeleteUniqueIdStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline const Aws::Vector<DeleteUniqueIdError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<DeleteUniqueIdError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<DeleteUniqueIdError>>
    BatchDeleteUniqueIdResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = DeleteUniqueIdError>
    BatchDeleteUniqueIdResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline const Aws::Vector<DeletedUniqueId>& GetDeleted() const { return m_deleted; }
    template<typename DeletedT = Aws::Vector<DeletedUniqueId>>
    void SetDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted = std::forward<DeletedT>(value); }
    template<typename DeletedT = Aws::Vector<DeletedUniqueId>>
    BatchDeleteUniqueIdResult& WithDeleted(DeletedT&& value) { SetDeleted(std::forward<DeletedT>(value)); return *this;}
    template<typename DeletedT = DeletedUniqueId>
    BatchDeleteUniqueIdResult& AddDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted.emplace_back(std::forward<DeletedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisconnectedUniqueIds() const { return m_disconnectedUniqueIds; }
    template<typename DisconnectedUniqueIdsT = Aws::Vector<Aws::String>>
    void SetDisconnectedUniqueIds(DisconnectedUniqueIdsT&& value) { m_disconnectedUniqueIdsHasBeenSet = true; m_disconnectedUniqueIds = std::forward<DisconnectedUniqueIdsT>(value); }
    template<typename DisconnectedUniqueIdsT = Aws::Vector<Aws::String>>
    BatchDeleteUniqueIdResult& WithDisconnectedUniqueIds(DisconnectedUniqueIdsT&& value) { SetDisconnectedUniqueIds(std::forward<DisconnectedUniqueIdsT>(value)); return *this;}
    template<typename DisconnectedUniqueIdsT = Aws::String>
    BatchDeleteUniqueIdResult& AddDisconnectedUniqueIds(DisconnectedUniqueIdsT&& value) { m_disconnectedUniqueIdsHasBeenSet = true; m_disconnectedUniqueIds.emplace_back(std::forward<DisconnectedUniqueIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteUniqueIdResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeleteUniqueIdStatus m_status{DeleteUniqueIdStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<DeleteUniqueIdError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<DeletedUniqueId> m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::Vector<Aws::String> m_disconnectedUniqueIds;
    bool m_disconnectedUniqueIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
