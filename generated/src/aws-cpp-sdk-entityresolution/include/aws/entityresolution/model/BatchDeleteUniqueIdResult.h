/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/DeleteUniqueIdStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/DeletedUniqueId.h>
#include <aws/entityresolution/model/DeleteUniqueIdError.h>
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
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdResult();
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API BatchDeleteUniqueIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline const Aws::Vector<DeletedUniqueId>& GetDeleted() const{ return m_deleted; }

    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline void SetDeleted(const Aws::Vector<DeletedUniqueId>& value) { m_deleted = value; }

    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline void SetDeleted(Aws::Vector<DeletedUniqueId>&& value) { m_deleted = std::move(value); }

    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline BatchDeleteUniqueIdResult& WithDeleted(const Aws::Vector<DeletedUniqueId>& value) { SetDeleted(value); return *this;}

    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline BatchDeleteUniqueIdResult& WithDeleted(Aws::Vector<DeletedUniqueId>&& value) { SetDeleted(std::move(value)); return *this;}

    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline BatchDeleteUniqueIdResult& AddDeleted(const DeletedUniqueId& value) { m_deleted.push_back(value); return *this; }

    /**
     * <p>The unique IDs that were deleted.</p>
     */
    inline BatchDeleteUniqueIdResult& AddDeleted(DeletedUniqueId&& value) { m_deleted.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisconnectedUniqueIds() const{ return m_disconnectedUniqueIds; }

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline void SetDisconnectedUniqueIds(const Aws::Vector<Aws::String>& value) { m_disconnectedUniqueIds = value; }

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline void SetDisconnectedUniqueIds(Aws::Vector<Aws::String>&& value) { m_disconnectedUniqueIds = std::move(value); }

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline BatchDeleteUniqueIdResult& WithDisconnectedUniqueIds(const Aws::Vector<Aws::String>& value) { SetDisconnectedUniqueIds(value); return *this;}

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline BatchDeleteUniqueIdResult& WithDisconnectedUniqueIds(Aws::Vector<Aws::String>&& value) { SetDisconnectedUniqueIds(std::move(value)); return *this;}

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline BatchDeleteUniqueIdResult& AddDisconnectedUniqueIds(const Aws::String& value) { m_disconnectedUniqueIds.push_back(value); return *this; }

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline BatchDeleteUniqueIdResult& AddDisconnectedUniqueIds(Aws::String&& value) { m_disconnectedUniqueIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique IDs that were disconnected.</p>
     */
    inline BatchDeleteUniqueIdResult& AddDisconnectedUniqueIds(const char* value) { m_disconnectedUniqueIds.push_back(value); return *this; }


    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline const Aws::Vector<DeleteUniqueIdError>& GetErrors() const{ return m_errors; }

    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline void SetErrors(const Aws::Vector<DeleteUniqueIdError>& value) { m_errors = value; }

    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline void SetErrors(Aws::Vector<DeleteUniqueIdError>&& value) { m_errors = std::move(value); }

    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline BatchDeleteUniqueIdResult& WithErrors(const Aws::Vector<DeleteUniqueIdError>& value) { SetErrors(value); return *this;}

    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline BatchDeleteUniqueIdResult& WithErrors(Aws::Vector<DeleteUniqueIdError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline BatchDeleteUniqueIdResult& AddErrors(const DeleteUniqueIdError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> The errors from deleting multiple unique IDs.</p>
     */
    inline BatchDeleteUniqueIdResult& AddErrors(DeleteUniqueIdError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the batch delete unique ID operation.</p>
     */
    inline const DeleteUniqueIdStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the batch delete unique ID operation.</p>
     */
    inline void SetStatus(const DeleteUniqueIdStatus& value) { m_status = value; }

    /**
     * <p>The status of the batch delete unique ID operation.</p>
     */
    inline void SetStatus(DeleteUniqueIdStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the batch delete unique ID operation.</p>
     */
    inline BatchDeleteUniqueIdResult& WithStatus(const DeleteUniqueIdStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the batch delete unique ID operation.</p>
     */
    inline BatchDeleteUniqueIdResult& WithStatus(DeleteUniqueIdStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDeleteUniqueIdResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDeleteUniqueIdResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDeleteUniqueIdResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeletedUniqueId> m_deleted;

    Aws::Vector<Aws::String> m_disconnectedUniqueIds;

    Aws::Vector<DeleteUniqueIdError> m_errors;

    DeleteUniqueIdStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
