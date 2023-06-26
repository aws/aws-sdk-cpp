﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AttachObjectResult
  {
  public:
    AWS_CLOUDDIRECTORY_API AttachObjectResult();
    AWS_CLOUDDIRECTORY_API AttachObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API AttachObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline const Aws::String& GetAttachedObjectIdentifier() const{ return m_attachedObjectIdentifier; }

    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline void SetAttachedObjectIdentifier(const Aws::String& value) { m_attachedObjectIdentifier = value; }

    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline void SetAttachedObjectIdentifier(Aws::String&& value) { m_attachedObjectIdentifier = std::move(value); }

    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline void SetAttachedObjectIdentifier(const char* value) { m_attachedObjectIdentifier.assign(value); }

    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline AttachObjectResult& WithAttachedObjectIdentifier(const Aws::String& value) { SetAttachedObjectIdentifier(value); return *this;}

    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline AttachObjectResult& WithAttachedObjectIdentifier(Aws::String&& value) { SetAttachedObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline AttachObjectResult& WithAttachedObjectIdentifier(const char* value) { SetAttachedObjectIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AttachObjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AttachObjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AttachObjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_attachedObjectIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
