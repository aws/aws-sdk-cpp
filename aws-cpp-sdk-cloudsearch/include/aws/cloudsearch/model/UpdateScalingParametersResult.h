﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/ScalingParametersStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>

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
   * status of the newly-configured scaling parameters.</p>
   */
  class AWS_CLOUDSEARCH_API UpdateScalingParametersResult
  {
  public:
    UpdateScalingParametersResult();
    UpdateScalingParametersResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateScalingParametersResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const ScalingParametersStatus& GetScalingParameters() const{ return m_scalingParameters; }

    
    inline void SetScalingParameters(const ScalingParametersStatus& value) { m_scalingParameters = value; }

    
    inline void SetScalingParameters(ScalingParametersStatus&& value) { m_scalingParameters = value; }

    
    inline UpdateScalingParametersResult& WithScalingParameters(const ScalingParametersStatus& value) { SetScalingParameters(value); return *this;}

    
    inline UpdateScalingParametersResult& WithScalingParameters(ScalingParametersStatus&& value) { SetScalingParameters(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline UpdateScalingParametersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateScalingParametersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ScalingParametersStatus m_scalingParameters;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws