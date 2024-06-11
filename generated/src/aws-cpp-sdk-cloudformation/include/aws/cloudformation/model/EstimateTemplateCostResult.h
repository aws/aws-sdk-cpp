/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for a <a>EstimateTemplateCost</a> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EstimateTemplateCostOutput">AWS
   * API Reference</a></p>
   */
  class EstimateTemplateCostResult
  {
  public:
    AWS_CLOUDFORMATION_API EstimateTemplateCostResult();
    AWS_CLOUDFORMATION_API EstimateTemplateCostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API EstimateTemplateCostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An Amazon Web Services Simple Monthly Calculator URL with a query string that
     * describes the resources required to run the template.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline EstimateTemplateCostResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline EstimateTemplateCostResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline EstimateTemplateCostResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline EstimateTemplateCostResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline EstimateTemplateCostResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
