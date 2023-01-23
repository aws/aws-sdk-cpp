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
  class PutComponentPolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API PutComponentPolicyResult();
    AWS_IMAGEBUILDER_API PutComponentPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API PutComponentPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline PutComponentPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline PutComponentPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline PutComponentPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline void SetComponentArn(const char* value) { m_componentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline PutComponentPolicyResult& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline PutComponentPolicyResult& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy was applied
     * to.</p>
     */
    inline PutComponentPolicyResult& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_componentArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
