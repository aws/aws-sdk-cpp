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
   * <p>The result of a <code>UpdateScalingParameters</code> request. Contains the
   * status of the newly-configured scaling parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/UpdateScalingParametersResponse">AWS
   * API Reference</a></p>
   */
  class UpdateScalingParametersResult
  {
  public:
    AWS_CLOUDSEARCH_API UpdateScalingParametersResult();
    AWS_CLOUDSEARCH_API UpdateScalingParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API UpdateScalingParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ScalingParametersStatus& GetScalingParameters() const{ return m_scalingParameters; }

    
    inline void SetScalingParameters(const ScalingParametersStatus& value) { m_scalingParameters = value; }

    
    inline void SetScalingParameters(ScalingParametersStatus&& value) { m_scalingParameters = std::move(value); }

    
    inline UpdateScalingParametersResult& WithScalingParameters(const ScalingParametersStatus& value) { SetScalingParameters(value); return *this;}

    
    inline UpdateScalingParametersResult& WithScalingParameters(ScalingParametersStatus&& value) { SetScalingParameters(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdateScalingParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateScalingParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ScalingParametersStatus m_scalingParameters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
