/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class ListControlsResult
  {
  public:
    AWS_AUDITMANAGER_API ListControlsResult();
    AWS_AUDITMANAGER_API ListControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline const Aws::Vector<ControlMetadata>& GetControlMetadataList() const{ return m_controlMetadataList; }

    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline void SetControlMetadataList(const Aws::Vector<ControlMetadata>& value) { m_controlMetadataList = value; }

    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline void SetControlMetadataList(Aws::Vector<ControlMetadata>&& value) { m_controlMetadataList = std::move(value); }

    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline ListControlsResult& WithControlMetadataList(const Aws::Vector<ControlMetadata>& value) { SetControlMetadataList(value); return *this;}

    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline ListControlsResult& WithControlMetadataList(Aws::Vector<ControlMetadata>&& value) { SetControlMetadataList(std::move(value)); return *this;}

    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline ListControlsResult& AddControlMetadataList(const ControlMetadata& value) { m_controlMetadataList.push_back(value); return *this; }

    /**
     * <p> The list of control metadata objects that the <code>ListControls</code> API
     * returned. </p>
     */
    inline ListControlsResult& AddControlMetadataList(ControlMetadata&& value) { m_controlMetadataList.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ControlMetadata> m_controlMetadataList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
