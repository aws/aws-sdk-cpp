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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoDescription.h>

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
  /**
   * <p>Result message containing a description of the requested environment
   * info.</p>
   */
  class AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult
  {
  public:
    RetrieveEnvironmentInfoResult();
    RetrieveEnvironmentInfoResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RetrieveEnvironmentInfoResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline const Aws::Vector<EnvironmentInfoDescription>& GetEnvironmentInfo() const{ return m_environmentInfo; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline void SetEnvironmentInfo(const Aws::Vector<EnvironmentInfoDescription>& value) { m_environmentInfo = value; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline void SetEnvironmentInfo(Aws::Vector<EnvironmentInfoDescription>&& value) { m_environmentInfo = value; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& WithEnvironmentInfo(const Aws::Vector<EnvironmentInfoDescription>& value) { SetEnvironmentInfo(value); return *this;}

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& WithEnvironmentInfo(Aws::Vector<EnvironmentInfoDescription>&& value) { SetEnvironmentInfo(value); return *this;}

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& AddEnvironmentInfo(const EnvironmentInfoDescription& value) { m_environmentInfo.push_back(value); return *this; }

    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline RetrieveEnvironmentInfoResult& AddEnvironmentInfo(EnvironmentInfoDescription&& value) { m_environmentInfo.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline RetrieveEnvironmentInfoResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RetrieveEnvironmentInfoResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<EnvironmentInfoDescription> m_environmentInfo;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws