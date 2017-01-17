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
#include <aws/elasticbeanstalk/model/EnvironmentDescription.h>

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
   * <p>Result message containing a list of environment descriptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentsResult
  {
  public:
    DescribeEnvironmentsResult();
    DescribeEnvironmentsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEnvironmentsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline const Aws::Vector<EnvironmentDescription>& GetEnvironments() const{ return m_environments; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline void SetEnvironments(const Aws::Vector<EnvironmentDescription>& value) { m_environments = value; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline void SetEnvironments(Aws::Vector<EnvironmentDescription>&& value) { m_environments = value; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline DescribeEnvironmentsResult& WithEnvironments(const Aws::Vector<EnvironmentDescription>& value) { SetEnvironments(value); return *this;}

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline DescribeEnvironmentsResult& WithEnvironments(Aws::Vector<EnvironmentDescription>&& value) { SetEnvironments(value); return *this;}

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline DescribeEnvironmentsResult& AddEnvironments(const EnvironmentDescription& value) { m_environments.push_back(value); return *this; }

    /**
     * <p> Returns an <a>EnvironmentDescription</a> list. </p>
     */
    inline DescribeEnvironmentsResult& AddEnvironments(EnvironmentDescription&& value) { m_environments.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeEnvironmentsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEnvironmentsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<EnvironmentDescription> m_environments;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws