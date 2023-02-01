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
  class DeleteInfrastructureConfigurationResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteInfrastructureConfigurationResult();
    AWS_IMAGEBUILDER_API DeleteInfrastructureConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteInfrastructureConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteInfrastructureConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline DeleteInfrastructureConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline DeleteInfrastructureConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline DeleteInfrastructureConfigurationResult& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline DeleteInfrastructureConfigurationResult& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that was
     * deleted.</p>
     */
    inline DeleteInfrastructureConfigurationResult& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_infrastructureConfigurationArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
