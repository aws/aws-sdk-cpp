/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/PublicAccessBlockConfig.h>
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
namespace Lambda
{
namespace Model
{
  class PutPublicAccessBlockConfigResult
  {
  public:
    AWS_LAMBDA_API PutPublicAccessBlockConfigResult();
    AWS_LAMBDA_API PutPublicAccessBlockConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API PutPublicAccessBlockConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The public-access settings Lambda applied to your function.</p>
     */
    inline const PublicAccessBlockConfig& GetPublicAccessBlockConfig() const{ return m_publicAccessBlockConfig; }
    inline void SetPublicAccessBlockConfig(const PublicAccessBlockConfig& value) { m_publicAccessBlockConfig = value; }
    inline void SetPublicAccessBlockConfig(PublicAccessBlockConfig&& value) { m_publicAccessBlockConfig = std::move(value); }
    inline PutPublicAccessBlockConfigResult& WithPublicAccessBlockConfig(const PublicAccessBlockConfig& value) { SetPublicAccessBlockConfig(value); return *this;}
    inline PutPublicAccessBlockConfigResult& WithPublicAccessBlockConfig(PublicAccessBlockConfig&& value) { SetPublicAccessBlockConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutPublicAccessBlockConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutPublicAccessBlockConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutPublicAccessBlockConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PublicAccessBlockConfig m_publicAccessBlockConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
