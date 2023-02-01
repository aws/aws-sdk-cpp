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
  class DetachObjectResult
  {
  public:
    AWS_CLOUDDIRECTORY_API DetachObjectResult();
    AWS_CLOUDDIRECTORY_API DetachObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API DetachObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline const Aws::String& GetDetachedObjectIdentifier() const{ return m_detachedObjectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline void SetDetachedObjectIdentifier(const Aws::String& value) { m_detachedObjectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline void SetDetachedObjectIdentifier(Aws::String&& value) { m_detachedObjectIdentifier = std::move(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline void SetDetachedObjectIdentifier(const char* value) { m_detachedObjectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline DetachObjectResult& WithDetachedObjectIdentifier(const Aws::String& value) { SetDetachedObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline DetachObjectResult& WithDetachedObjectIdentifier(Aws::String&& value) { SetDetachedObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline DetachObjectResult& WithDetachedObjectIdentifier(const char* value) { SetDetachedObjectIdentifier(value); return *this;}

  private:

    Aws::String m_detachedObjectIdentifier;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
