﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
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
namespace BackupGateway
{
namespace Model
{
  class UntagResourceResult
  {
  public:
    AWS_BACKUPGATEWAY_API UntagResourceResult();
    AWS_BACKUPGATEWAY_API UntagResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API UntagResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource from which you removed
     * tags.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARN.assign(value); }
    inline UntagResourceResult& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline UntagResourceResult& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline UntagResourceResult& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UntagResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UntagResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UntagResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
