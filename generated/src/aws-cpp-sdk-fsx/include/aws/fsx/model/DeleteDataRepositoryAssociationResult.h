/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryLifecycle.h>
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
namespace FSx
{
namespace Model
{
  class DeleteDataRepositoryAssociationResult
  {
  public:
    AWS_FSX_API DeleteDataRepositoryAssociationResult() = default;
    AWS_FSX_API DeleteDataRepositoryAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteDataRepositoryAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    DeleteDataRepositoryAssociationResult& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the lifecycle state of the data repository association being
     * deleted.</p>
     */
    inline DataRepositoryLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(DataRepositoryLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DeleteDataRepositoryAssociationResult& WithLifecycle(DataRepositoryLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether data in the file system that corresponds to the data
     * repository association is being deleted. Default is <code>false</code>.</p>
     */
    inline bool GetDeleteDataInFileSystem() const { return m_deleteDataInFileSystem; }
    inline void SetDeleteDataInFileSystem(bool value) { m_deleteDataInFileSystemHasBeenSet = true; m_deleteDataInFileSystem = value; }
    inline DeleteDataRepositoryAssociationResult& WithDeleteDataInFileSystem(bool value) { SetDeleteDataInFileSystem(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDataRepositoryAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    DataRepositoryLifecycle m_lifecycle{DataRepositoryLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    bool m_deleteDataInFileSystem{false};
    bool m_deleteDataInFileSystemHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
