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
#include <aws/elasticbeanstalk/model/PlatformDescription.h>
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
  class AWS_ELASTICBEANSTALK_API DescribePlatformVersionResult
  {
  public:
    DescribePlatformVersionResult();
    DescribePlatformVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribePlatformVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Detailed information about the version of the platform.</p>
     */
    inline const PlatformDescription& GetPlatformDescription() const{ return m_platformDescription; }

    /**
     * <p>Detailed information about the version of the platform.</p>
     */
    inline void SetPlatformDescription(const PlatformDescription& value) { m_platformDescription = value; }

    /**
     * <p>Detailed information about the version of the platform.</p>
     */
    inline void SetPlatformDescription(PlatformDescription&& value) { m_platformDescription = std::move(value); }

    /**
     * <p>Detailed information about the version of the platform.</p>
     */
    inline DescribePlatformVersionResult& WithPlatformDescription(const PlatformDescription& value) { SetPlatformDescription(value); return *this;}

    /**
     * <p>Detailed information about the version of the platform.</p>
     */
    inline DescribePlatformVersionResult& WithPlatformDescription(PlatformDescription&& value) { SetPlatformDescription(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribePlatformVersionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePlatformVersionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PlatformDescription m_platformDescription;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
