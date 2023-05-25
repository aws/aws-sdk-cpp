/**
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
  class UpdateObjectAttributesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API UpdateObjectAttributesResult();
    AWS_CLOUDDIRECTORY_API UpdateObjectAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API UpdateObjectAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifier = std::move(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline UpdateObjectAttributesResult& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline UpdateObjectAttributesResult& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the updated object.</p>
     */
    inline UpdateObjectAttributesResult& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateObjectAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateObjectAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateObjectAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_objectIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
