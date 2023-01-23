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
    inline ImportVmImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ImportVmImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ImportVmImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline ImportVmImageResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline ImportVmImageResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AMI that was created during the VM
     * import process. This AMI is used as the base image for the recipe that imported
     * the VM.</p>
     */
    inline ImportVmImageResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline ImportVmImageResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline ImportVmImageResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token that was used for this request.</p>
     */
    inline ImportVmImageResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_imageArn;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
