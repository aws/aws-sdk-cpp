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
  class DisassociateSourceGraphqlApiResult
  {
  public:
    AWS_APPSYNC_API DisassociateSourceGraphqlApiResult();
    AWS_APPSYNC_API DisassociateSourceGraphqlApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API DisassociateSourceGraphqlApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the source API association.</p>
     */
    inline const SourceApiAssociationStatus& GetSourceApiAssociationStatus() const{ return m_sourceApiAssociationStatus; }

    /**
     * <p>The state of the source API association.</p>
     */
    inline void SetSourceApiAssociationStatus(const SourceApiAssociationStatus& value) { m_sourceApiAssociationStatus = value; }

    /**
     * <p>The state of the source API association.</p>
     */
    inline void SetSourceApiAssociationStatus(SourceApiAssociationStatus&& value) { m_sourceApiAssociationStatus = std::move(value); }

    /**
     * <p>The state of the source API association.</p>
     */
    inline DisassociateSourceGraphqlApiResult& WithSourceApiAssociationStatus(const SourceApiAssociationStatus& value) { SetSourceApiAssociationStatus(value); return *this;}

    /**
     * <p>The state of the source API association.</p>
     */
    inline DisassociateSourceGraphqlApiResult& WithSourceApiAssociationStatus(SourceApiAssociationStatus&& value) { SetSourceApiAssociationStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateSourceGraphqlApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateSourceGraphqlApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateSourceGraphqlApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SourceApiAssociationStatus m_sourceApiAssociationStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
