/**
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
  class StartDiscoveryJobResult
  {
  public:
    AWS_DATASYNC_API StartDiscoveryJobResult();
    AWS_DATASYNC_API StartDiscoveryJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API StartDiscoveryJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const{ return m_discoveryJobArn; }

    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline void SetDiscoveryJobArn(const Aws::String& value) { m_discoveryJobArn = value; }

    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline void SetDiscoveryJobArn(Aws::String&& value) { m_discoveryJobArn = std::move(value); }

    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline void SetDiscoveryJobArn(const char* value) { m_discoveryJobArn.assign(value); }

    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline StartDiscoveryJobResult& WithDiscoveryJobArn(const Aws::String& value) { SetDiscoveryJobArn(value); return *this;}

    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline StartDiscoveryJobResult& WithDiscoveryJobArn(Aws::String&& value) { SetDiscoveryJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the discovery job that you started.</p>
     */
    inline StartDiscoveryJobResult& WithDiscoveryJobArn(const char* value) { SetDiscoveryJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDiscoveryJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDiscoveryJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDiscoveryJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_discoveryJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
