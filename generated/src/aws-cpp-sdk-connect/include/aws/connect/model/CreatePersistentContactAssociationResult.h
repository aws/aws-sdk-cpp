/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreatePersistentContactAssociationResult
  {
  public:
    AWS_CONNECT_API CreatePersistentContactAssociationResult();
    AWS_CONNECT_API CreatePersistentContactAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreatePersistentContactAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline const Aws::String& GetContinuedFromContactId() const{ return m_continuedFromContactId; }

    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline void SetContinuedFromContactId(const Aws::String& value) { m_continuedFromContactId = value; }

    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline void SetContinuedFromContactId(Aws::String&& value) { m_continuedFromContactId = std::move(value); }

    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline void SetContinuedFromContactId(const char* value) { m_continuedFromContactId.assign(value); }

    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline CreatePersistentContactAssociationResult& WithContinuedFromContactId(const Aws::String& value) { SetContinuedFromContactId(value); return *this;}

    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline CreatePersistentContactAssociationResult& WithContinuedFromContactId(Aws::String&& value) { SetContinuedFromContactId(std::move(value)); return *this;}

    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline CreatePersistentContactAssociationResult& WithContinuedFromContactId(const char* value) { SetContinuedFromContactId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePersistentContactAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePersistentContactAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePersistentContactAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_continuedFromContactId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
