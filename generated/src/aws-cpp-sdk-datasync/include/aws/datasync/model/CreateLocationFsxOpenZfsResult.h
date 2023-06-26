﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{
  class CreateLocationFsxOpenZfsResult
  {
  public:
    AWS_DATASYNC_API CreateLocationFsxOpenZfsResult();
    AWS_DATASYNC_API CreateLocationFsxOpenZfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API CreateLocationFsxOpenZfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline CreateLocationFsxOpenZfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline CreateLocationFsxOpenZfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the FSx for OpenZFS file system location that you created.</p>
     */
    inline CreateLocationFsxOpenZfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLocationFsxOpenZfsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLocationFsxOpenZfsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLocationFsxOpenZfsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
