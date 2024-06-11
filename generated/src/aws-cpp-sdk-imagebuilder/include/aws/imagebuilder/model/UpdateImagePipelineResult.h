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
  class UpdateImagePipelineResult
  {
  public:
    AWS_IMAGEBUILDER_API UpdateImagePipelineResult();
    AWS_IMAGEBUILDER_API UpdateImagePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API UpdateImagePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateImagePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateImagePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateImagePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline UpdateImagePipelineResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateImagePipelineResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateImagePipelineResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that was updated by this
     * request.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const{ return m_imagePipelineArn; }
    inline void SetImagePipelineArn(const Aws::String& value) { m_imagePipelineArn = value; }
    inline void SetImagePipelineArn(Aws::String&& value) { m_imagePipelineArn = std::move(value); }
    inline void SetImagePipelineArn(const char* value) { m_imagePipelineArn.assign(value); }
    inline UpdateImagePipelineResult& WithImagePipelineArn(const Aws::String& value) { SetImagePipelineArn(value); return *this;}
    inline UpdateImagePipelineResult& WithImagePipelineArn(Aws::String&& value) { SetImagePipelineArn(std::move(value)); return *this;}
    inline UpdateImagePipelineResult& WithImagePipelineArn(const char* value) { SetImagePipelineArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_imagePipelineArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
