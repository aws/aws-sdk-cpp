/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class GetImagePolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API GetImagePolicyResult();
    AWS_IMAGEBUILDER_API GetImagePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetImagePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetImagePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetImagePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetImagePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The image policy object.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The image policy object.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The image policy object.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The image policy object.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The image policy object.</p>
     */
    inline GetImagePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The image policy object.</p>
     */
    inline GetImagePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The image policy object.</p>
     */
    inline GetImagePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_policy;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
