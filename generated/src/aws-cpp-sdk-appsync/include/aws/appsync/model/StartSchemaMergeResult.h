﻿/**
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
    AWS_APPSYNC_API StartSchemaMergeResult();
    AWS_APPSYNC_API StartSchemaMergeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API StartSchemaMergeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The state of the source API association.</p>
     */
    inline const SourceApiAssociationStatus& GetSourceApiAssociationStatus() const{ return m_sourceApiAssociationStatus; }
    inline void SetSourceApiAssociationStatus(const SourceApiAssociationStatus& value) { m_sourceApiAssociationStatus = value; }
    inline void SetSourceApiAssociationStatus(SourceApiAssociationStatus&& value) { m_sourceApiAssociationStatus = std::move(value); }
    inline StartSchemaMergeResult& WithSourceApiAssociationStatus(const SourceApiAssociationStatus& value) { SetSourceApiAssociationStatus(value); return *this;}
    inline StartSchemaMergeResult& WithSourceApiAssociationStatus(SourceApiAssociationStatus&& value) { SetSourceApiAssociationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSchemaMergeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSchemaMergeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSchemaMergeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SourceApiAssociationStatus m_sourceApiAssociationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
