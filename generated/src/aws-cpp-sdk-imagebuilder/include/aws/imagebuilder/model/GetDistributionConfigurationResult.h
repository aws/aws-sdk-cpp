/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/DistributionConfiguration.h>
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
  class GetDistributionConfigurationResult
  {
  public:
    AWS_IMAGEBUILDER_API GetDistributionConfigurationResult() = default;
    AWS_IMAGEBUILDER_API GetDistributionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetDistributionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDistributionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution configuration object.</p>
     */
    inline const DistributionConfiguration& GetDistributionConfiguration() const { return m_distributionConfiguration; }
    template<typename DistributionConfigurationT = DistributionConfiguration>
    void SetDistributionConfiguration(DistributionConfigurationT&& value) { m_distributionConfigurationHasBeenSet = true; m_distributionConfiguration = std::forward<DistributionConfigurationT>(value); }
    template<typename DistributionConfigurationT = DistributionConfiguration>
    GetDistributionConfigurationResult& WithDistributionConfiguration(DistributionConfigurationT&& value) { SetDistributionConfiguration(std::forward<DistributionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    DistributionConfiguration m_distributionConfiguration;
    bool m_distributionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
