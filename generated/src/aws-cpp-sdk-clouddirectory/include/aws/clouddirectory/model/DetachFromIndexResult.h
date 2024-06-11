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
  class DetachFromIndexResult
  {
  public:
    AWS_CLOUDDIRECTORY_API DetachFromIndexResult();
    AWS_CLOUDDIRECTORY_API DetachFromIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API DetachFromIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline const Aws::String& GetDetachedObjectIdentifier() const{ return m_detachedObjectIdentifier; }
    inline void SetDetachedObjectIdentifier(const Aws::String& value) { m_detachedObjectIdentifier = value; }
    inline void SetDetachedObjectIdentifier(Aws::String&& value) { m_detachedObjectIdentifier = std::move(value); }
    inline void SetDetachedObjectIdentifier(const char* value) { m_detachedObjectIdentifier.assign(value); }
    inline DetachFromIndexResult& WithDetachedObjectIdentifier(const Aws::String& value) { SetDetachedObjectIdentifier(value); return *this;}
    inline DetachFromIndexResult& WithDetachedObjectIdentifier(Aws::String&& value) { SetDetachedObjectIdentifier(std::move(value)); return *this;}
    inline DetachFromIndexResult& WithDetachedObjectIdentifier(const char* value) { SetDetachedObjectIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DetachFromIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DetachFromIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DetachFromIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_detachedObjectIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
