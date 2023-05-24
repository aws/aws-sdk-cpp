/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/SourceApiAssociation.h>
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
  class UpdateSourceApiAssociationResult
  {
  public:
    AWS_APPSYNC_API UpdateSourceApiAssociationResult();
    AWS_APPSYNC_API UpdateSourceApiAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateSourceApiAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>SourceApiAssociation</code> object data.</p>
     */
    inline const SourceApiAssociation& GetSourceApiAssociation() const{ return m_sourceApiAssociation; }

    /**
     * <p>The <code>SourceApiAssociation</code> object data.</p>
     */
    inline void SetSourceApiAssociation(const SourceApiAssociation& value) { m_sourceApiAssociation = value; }

    /**
     * <p>The <code>SourceApiAssociation</code> object data.</p>
     */
    inline void SetSourceApiAssociation(SourceApiAssociation&& value) { m_sourceApiAssociation = std::move(value); }

    /**
     * <p>The <code>SourceApiAssociation</code> object data.</p>
     */
    inline UpdateSourceApiAssociationResult& WithSourceApiAssociation(const SourceApiAssociation& value) { SetSourceApiAssociation(value); return *this;}

    /**
     * <p>The <code>SourceApiAssociation</code> object data.</p>
     */
    inline UpdateSourceApiAssociationResult& WithSourceApiAssociation(SourceApiAssociation&& value) { SetSourceApiAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSourceApiAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSourceApiAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSourceApiAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SourceApiAssociation m_sourceApiAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
