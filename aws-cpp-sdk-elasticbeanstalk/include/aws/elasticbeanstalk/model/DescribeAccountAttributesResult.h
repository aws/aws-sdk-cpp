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
#include <aws/elasticbeanstalk/model/ResourceQuotas.h>
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
  class AWS_ELASTICBEANSTALK_API DescribeAccountAttributesResult
  {
  public:
    DescribeAccountAttributesResult();
    DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Elastic Beanstalk resource quotas associated with the calling AWS
     * account.</p>
     */
    inline const ResourceQuotas& GetResourceQuotas() const{ return m_resourceQuotas; }

    /**
     * <p>The Elastic Beanstalk resource quotas associated with the calling AWS
     * account.</p>
     */
    inline void SetResourceQuotas(const ResourceQuotas& value) { m_resourceQuotas = value; }

    /**
     * <p>The Elastic Beanstalk resource quotas associated with the calling AWS
     * account.</p>
     */
    inline void SetResourceQuotas(ResourceQuotas&& value) { m_resourceQuotas = std::move(value); }

    /**
     * <p>The Elastic Beanstalk resource quotas associated with the calling AWS
     * account.</p>
     */
    inline DescribeAccountAttributesResult& WithResourceQuotas(const ResourceQuotas& value) { SetResourceQuotas(value); return *this;}

    /**
     * <p>The Elastic Beanstalk resource quotas associated with the calling AWS
     * account.</p>
     */
    inline DescribeAccountAttributesResult& WithResourceQuotas(ResourceQuotas&& value) { SetResourceQuotas(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAccountAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAccountAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ResourceQuotas m_resourceQuotas;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
