/*
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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>

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
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for a <a>EstimateTemplateCost</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API EstimateTemplateCostResult
  {
  public:
    EstimateTemplateCostResult();
    EstimateTemplateCostResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    EstimateTemplateCostResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = value; }

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline EstimateTemplateCostResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline EstimateTemplateCostResult& WithUrl(Aws::String&& value) { SetUrl(value); return *this;}

    /**
     * <p>An AWS Simple Monthly Calculator URL with a query string that describes the
     * resources required to run the template.</p>
     */
    inline EstimateTemplateCostResult& WithUrl(const char* value) { SetUrl(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline EstimateTemplateCostResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EstimateTemplateCostResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_url;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws