/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseLaunchTemplateData.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class AWS_EC2_API GetLaunchTemplateDataResponse
  {
  public:
    GetLaunchTemplateDataResponse();
    GetLaunchTemplateDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetLaunchTemplateDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The instance data.</p>
     */
    inline const ResponseLaunchTemplateData& GetLaunchTemplateData() const{ return m_launchTemplateData; }

    /**
     * <p>The instance data.</p>
     */
    inline void SetLaunchTemplateData(const ResponseLaunchTemplateData& value) { m_launchTemplateData = value; }

    /**
     * <p>The instance data.</p>
     */
    inline void SetLaunchTemplateData(ResponseLaunchTemplateData&& value) { m_launchTemplateData = std::move(value); }

    /**
     * <p>The instance data.</p>
     */
    inline GetLaunchTemplateDataResponse& WithLaunchTemplateData(const ResponseLaunchTemplateData& value) { SetLaunchTemplateData(value); return *this;}

    /**
     * <p>The instance data.</p>
     */
    inline GetLaunchTemplateDataResponse& WithLaunchTemplateData(ResponseLaunchTemplateData&& value) { SetLaunchTemplateData(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetLaunchTemplateDataResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetLaunchTemplateDataResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ResponseLaunchTemplateData m_launchTemplateData;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
