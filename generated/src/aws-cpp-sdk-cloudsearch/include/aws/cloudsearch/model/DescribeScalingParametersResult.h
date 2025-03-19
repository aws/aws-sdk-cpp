/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/ScalingParametersStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeScalingParameters</code> request. Contains the
   * scaling parameters configured for the domain specified in the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeScalingParametersResponse">AWS
   * API Reference</a></p>
   */
  class DescribeScalingParametersResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeScalingParametersResult() = default;
    AWS_CLOUDSEARCH_API DescribeScalingParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeScalingParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ScalingParametersStatus& GetScalingParameters() const { return m_scalingParameters; }
    template<typename ScalingParametersT = ScalingParametersStatus>
    void SetScalingParameters(ScalingParametersT&& value) { m_scalingParametersHasBeenSet = true; m_scalingParameters = std::forward<ScalingParametersT>(value); }
    template<typename ScalingParametersT = ScalingParametersStatus>
    DescribeScalingParametersResult& WithScalingParameters(ScalingParametersT&& value) { SetScalingParameters(std::forward<ScalingParametersT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeScalingParametersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ScalingParametersStatus m_scalingParameters;
    bool m_scalingParametersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
