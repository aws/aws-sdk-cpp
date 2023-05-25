/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/InfrastructureConfiguration.h>
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
  /**
   * <p>GetInfrastructureConfiguration response object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class GetInfrastructureConfigurationResult
  {
  public:
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationResult();
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetInfrastructureConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetInfrastructureConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetInfrastructureConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The infrastructure configuration object.</p>
     */
    inline const InfrastructureConfiguration& GetInfrastructureConfiguration() const{ return m_infrastructureConfiguration; }

    /**
     * <p>The infrastructure configuration object.</p>
     */
    inline void SetInfrastructureConfiguration(const InfrastructureConfiguration& value) { m_infrastructureConfiguration = value; }

    /**
     * <p>The infrastructure configuration object.</p>
     */
    inline void SetInfrastructureConfiguration(InfrastructureConfiguration&& value) { m_infrastructureConfiguration = std::move(value); }

    /**
     * <p>The infrastructure configuration object.</p>
     */
    inline GetInfrastructureConfigurationResult& WithInfrastructureConfiguration(const InfrastructureConfiguration& value) { SetInfrastructureConfiguration(value); return *this;}

    /**
     * <p>The infrastructure configuration object.</p>
     */
    inline GetInfrastructureConfigurationResult& WithInfrastructureConfiguration(InfrastructureConfiguration&& value) { SetInfrastructureConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    InfrastructureConfiguration m_infrastructureConfiguration;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
