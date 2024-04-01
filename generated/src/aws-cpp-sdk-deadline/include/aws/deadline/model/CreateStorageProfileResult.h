/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateStorageProfileResult
  {
  public:
    AWS_DEADLINE_API CreateStorageProfileResult();
    AWS_DEADLINE_API CreateStorageProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateStorageProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }

    /**
     * <p>The storage profile ID.</p>
     */
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileId = value; }

    /**
     * <p>The storage profile ID.</p>
     */
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileId = std::move(value); }

    /**
     * <p>The storage profile ID.</p>
     */
    inline void SetStorageProfileId(const char* value) { m_storageProfileId.assign(value); }

    /**
     * <p>The storage profile ID.</p>
     */
    inline CreateStorageProfileResult& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}

    /**
     * <p>The storage profile ID.</p>
     */
    inline CreateStorageProfileResult& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}

    /**
     * <p>The storage profile ID.</p>
     */
    inline CreateStorageProfileResult& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStorageProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStorageProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStorageProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_storageProfileId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
