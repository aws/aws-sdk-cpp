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
  class DeleteComponentResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteComponentResult();
    AWS_IMAGEBUILDER_API DeleteComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the component build version that this request deleted.</p>
     */
    inline const Aws::String& GetComponentBuildVersionArn() const{ return m_componentBuildVersionArn; }
    inline void SetComponentBuildVersionArn(const Aws::String& value) { m_componentBuildVersionArn = value; }
    inline void SetComponentBuildVersionArn(Aws::String&& value) { m_componentBuildVersionArn = std::move(value); }
    inline void SetComponentBuildVersionArn(const char* value) { m_componentBuildVersionArn.assign(value); }
    inline DeleteComponentResult& WithComponentBuildVersionArn(const Aws::String& value) { SetComponentBuildVersionArn(value); return *this;}
    inline DeleteComponentResult& WithComponentBuildVersionArn(Aws::String&& value) { SetComponentBuildVersionArn(std::move(value)); return *this;}
    inline DeleteComponentResult& WithComponentBuildVersionArn(const char* value) { SetComponentBuildVersionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_componentBuildVersionArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
