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
    AWS_FSX_API DeleteDataRepositoryAssociationResult();
    AWS_FSX_API DeleteDataRepositoryAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteDataRepositoryAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationId = value; }

    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationId = std::move(value); }

    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationId.assign(value); }

    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline DeleteDataRepositoryAssociationResult& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline DeleteDataRepositoryAssociationResult& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data repository association being deleted.</p>
     */
    inline DeleteDataRepositoryAssociationResult& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>Describes the lifecycle state of the data repository association being
     * deleted.</p>
     */
    inline const DataRepositoryLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Describes the lifecycle state of the data repository association being
     * deleted.</p>
     */
    inline void SetLifecycle(const DataRepositoryLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>Describes the lifecycle state of the data repository association being
     * deleted.</p>
     */
    inline void SetLifecycle(DataRepositoryLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>Describes the lifecycle state of the data repository association being
     * deleted.</p>
     */
    inline DeleteDataRepositoryAssociationResult& WithLifecycle(const DataRepositoryLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Describes the lifecycle state of the data repository association being
     * deleted.</p>
     */
    inline DeleteDataRepositoryAssociationResult& WithLifecycle(DataRepositoryLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>Indicates whether data in the file system that corresponds to the data
     * repository association is being deleted. Default is <code>false</code>.</p>
     */
    inline bool GetDeleteDataInFileSystem() const{ return m_deleteDataInFileSystem; }

    /**
     * <p>Indicates whether data in the file system that corresponds to the data
     * repository association is being deleted. Default is <code>false</code>.</p>
     */
    inline void SetDeleteDataInFileSystem(bool value) { m_deleteDataInFileSystem = value; }

    /**
     * <p>Indicates whether data in the file system that corresponds to the data
     * repository association is being deleted. Default is <code>false</code>.</p>
     */
    inline DeleteDataRepositoryAssociationResult& WithDeleteDataInFileSystem(bool value) { SetDeleteDataInFileSystem(value); return *this;}

  private:

    Aws::String m_associationId;

    DataRepositoryLifecycle m_lifecycle;

    bool m_deleteDataInFileSystem;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
