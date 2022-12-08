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
    AWS_CLOUDSEARCH_API DescribeScalingParametersResult();
    AWS_CLOUDSEARCH_API DescribeScalingParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeScalingParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ScalingParametersStatus& GetScalingParameters() const{ return m_scalingParameters; }

    
    inline void SetScalingParameters(const ScalingParametersStatus& value) { m_scalingParameters = value; }

    
    inline void SetScalingParameters(ScalingParametersStatus&& value) { m_scalingParameters = std::move(value); }

    
    inline DescribeScalingParametersResult& WithScalingParameters(const ScalingParametersStatus& value) { SetScalingParameters(value); return *this;}

    
    inline DescribeScalingParametersResult& WithScalingParameters(ScalingParametersStatus&& value) { SetScalingParameters(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeScalingParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeScalingParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ScalingParametersStatus m_scalingParameters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
