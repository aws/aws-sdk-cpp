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
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationResult() = default;
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInfrastructureConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure configuration object.</p>
     */
    inline const InfrastructureConfiguration& GetInfrastructureConfiguration() const { return m_infrastructureConfiguration; }
    template<typename InfrastructureConfigurationT = InfrastructureConfiguration>
    void SetInfrastructureConfiguration(InfrastructureConfigurationT&& value) { m_infrastructureConfigurationHasBeenSet = true; m_infrastructureConfiguration = std::forward<InfrastructureConfigurationT>(value); }
    template<typename InfrastructureConfigurationT = InfrastructureConfiguration>
    GetInfrastructureConfigurationResult& WithInfrastructureConfiguration(InfrastructureConfigurationT&& value) { SetInfrastructureConfiguration(std::forward<InfrastructureConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    InfrastructureConfiguration m_infrastructureConfiguration;
    bool m_infrastructureConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
