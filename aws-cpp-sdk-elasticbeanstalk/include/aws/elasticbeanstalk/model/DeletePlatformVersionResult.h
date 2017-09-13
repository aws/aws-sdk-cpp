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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/PlatformSummary.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  class AWS_ELASTICBEANSTALK_API DeletePlatformVersionResult
  {
  public:
    DeletePlatformVersionResult();
    DeletePlatformVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeletePlatformVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline const PlatformSummary& GetPlatformSummary() const{ return m_platformSummary; }

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline void SetPlatformSummary(const PlatformSummary& value) { m_platformSummary = value; }

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline void SetPlatformSummary(PlatformSummary&& value) { m_platformSummary = std::move(value); }

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline DeletePlatformVersionResult& WithPlatformSummary(const PlatformSummary& value) { SetPlatformSummary(value); return *this;}

    /**
     * <p>Detailed information about the version of the custom platform.</p>
     */
    inline DeletePlatformVersionResult& WithPlatformSummary(PlatformSummary&& value) { SetPlatformSummary(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeletePlatformVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeletePlatformVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PlatformSummary m_platformSummary;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
