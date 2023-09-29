/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/FoundationModelDetails.h>
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
namespace Bedrock
{
namespace Model
{
  class GetFoundationModelResult
  {
  public:
    AWS_BEDROCK_API GetFoundationModelResult();
    AWS_BEDROCK_API GetFoundationModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetFoundationModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the foundation model.</p>
     */
    inline const FoundationModelDetails& GetModelDetails() const{ return m_modelDetails; }

    /**
     * <p>Information about the foundation model.</p>
     */
    inline void SetModelDetails(const FoundationModelDetails& value) { m_modelDetails = value; }

    /**
     * <p>Information about the foundation model.</p>
     */
    inline void SetModelDetails(FoundationModelDetails&& value) { m_modelDetails = std::move(value); }

    /**
     * <p>Information about the foundation model.</p>
     */
    inline GetFoundationModelResult& WithModelDetails(const FoundationModelDetails& value) { SetModelDetails(value); return *this;}

    /**
     * <p>Information about the foundation model.</p>
     */
    inline GetFoundationModelResult& WithModelDetails(FoundationModelDetails&& value) { SetModelDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFoundationModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFoundationModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFoundationModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FoundationModelDetails m_modelDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
