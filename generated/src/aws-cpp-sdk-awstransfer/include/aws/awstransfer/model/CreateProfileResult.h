﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class CreateProfileResult
  {
  public:
    AWS_TRANSFER_API CreateProfileResult();
    AWS_TRANSFER_API CreateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileId = value; }

    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileId = std::move(value); }

    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline void SetProfileId(const char* value) { m_profileId.assign(value); }

    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline CreateProfileResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline CreateProfileResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the AS2 profile, returned after the API call
     * succeeds.</p>
     */
    inline CreateProfileResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_profileId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
