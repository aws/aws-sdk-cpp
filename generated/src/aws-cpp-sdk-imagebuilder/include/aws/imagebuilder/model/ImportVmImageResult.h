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
  class ImportVmImageResult
  {
  public:
    AWS_IMAGEBUILDER_API ImportVmImageResult();
    AWS_IMAGEBUILDER_API ImportVmImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ImportVmImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportVmImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportVmImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportVmImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }
    inline ImportVmImageResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}
    inline ImportVmImageResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}
    inline ImportVmImageResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline ImportVmImageResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ImportVmImageResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ImportVmImageResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_imageArn;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
