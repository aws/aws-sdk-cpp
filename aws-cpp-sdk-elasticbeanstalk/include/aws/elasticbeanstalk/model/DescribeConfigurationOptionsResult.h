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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionDescription.h>

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
   * <p>Describes the settings for a specified configuration set.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult
  {
  public:
    DescribeConfigurationOptionsResult();
    DescribeConfigurationOptionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeConfigurationOptionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackName.assign(value); }

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline DescribeConfigurationOptionsResult& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline DescribeConfigurationOptionsResult& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline DescribeConfigurationOptionsResult& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline const Aws::Vector<ConfigurationOptionDescription>& GetOptions() const{ return m_options; }

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline void SetOptions(const Aws::Vector<ConfigurationOptionDescription>& value) { m_options = value; }

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline void SetOptions(Aws::Vector<ConfigurationOptionDescription>&& value) { m_options = value; }

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline DescribeConfigurationOptionsResult& WithOptions(const Aws::Vector<ConfigurationOptionDescription>& value) { SetOptions(value); return *this;}

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline DescribeConfigurationOptionsResult& WithOptions(Aws::Vector<ConfigurationOptionDescription>&& value) { SetOptions(value); return *this;}

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline DescribeConfigurationOptionsResult& AddOptions(const ConfigurationOptionDescription& value) { m_options.push_back(value); return *this; }

    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline DescribeConfigurationOptionsResult& AddOptions(ConfigurationOptionDescription&& value) { m_options.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeConfigurationOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_solutionStackName;
    Aws::Vector<ConfigurationOptionDescription> m_options;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws