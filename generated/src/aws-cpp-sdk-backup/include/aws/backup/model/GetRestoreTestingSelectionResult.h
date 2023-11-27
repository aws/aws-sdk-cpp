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
    AWS_BACKUP_API GetRestoreTestingSelectionResult();
    AWS_BACKUP_API GetRestoreTestingSelectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreTestingSelectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique name of the restore testing selection.</p>
     */
    inline const RestoreTestingSelectionForGet& GetRestoreTestingSelection() const{ return m_restoreTestingSelection; }

    /**
     * <p>Unique name of the restore testing selection.</p>
     */
    inline void SetRestoreTestingSelection(const RestoreTestingSelectionForGet& value) { m_restoreTestingSelection = value; }

    /**
     * <p>Unique name of the restore testing selection.</p>
     */
    inline void SetRestoreTestingSelection(RestoreTestingSelectionForGet&& value) { m_restoreTestingSelection = std::move(value); }

    /**
     * <p>Unique name of the restore testing selection.</p>
     */
    inline GetRestoreTestingSelectionResult& WithRestoreTestingSelection(const RestoreTestingSelectionForGet& value) { SetRestoreTestingSelection(value); return *this;}

    /**
     * <p>Unique name of the restore testing selection.</p>
     */
    inline GetRestoreTestingSelectionResult& WithRestoreTestingSelection(RestoreTestingSelectionForGet&& value) { SetRestoreTestingSelection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRestoreTestingSelectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRestoreTestingSelectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRestoreTestingSelectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RestoreTestingSelectionForGet m_restoreTestingSelection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
