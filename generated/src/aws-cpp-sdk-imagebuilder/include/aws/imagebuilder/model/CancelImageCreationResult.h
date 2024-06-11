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
  class CancelImageCreationResult
  {
  public:
    AWS_IMAGEBUILDER_API CancelImageCreationResult();
    AWS_IMAGEBUILDER_API CancelImageCreationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CancelImageCreationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelImageCreationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelImageCreationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelImageCreationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline CancelImageCreationResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CancelImageCreationResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CancelImageCreationResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image whose creation this request canceled.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }
    inline CancelImageCreationResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline CancelImageCreationResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline CancelImageCreationResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_imageBuildVersionArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
