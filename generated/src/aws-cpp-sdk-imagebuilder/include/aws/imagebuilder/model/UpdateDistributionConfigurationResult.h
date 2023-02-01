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
  class UpdateDistributionConfigurationResult
  {
  public:
    AWS_IMAGEBUILDER_API UpdateDistributionConfigurationResult();
    AWS_IMAGEBUILDER_API UpdateDistributionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API UpdateDistributionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateDistributionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline UpdateDistributionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline UpdateDistributionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline UpdateDistributionConfigurationResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline UpdateDistributionConfigurationResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline UpdateDistributionConfigurationResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline UpdateDistributionConfigurationResult& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline UpdateDistributionConfigurationResult& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * updated by this request.</p>
     */
    inline UpdateDistributionConfigurationResult& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_distributionConfigurationArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
