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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/SolutionStackDescription.h>
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
  /**
   * <p>A list of available AWS Elastic Beanstalk solution stacks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListAvailableSolutionStacksResultMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ListAvailableSolutionStacksResult
  {
  public:
    ListAvailableSolutionStacksResult();
    ListAvailableSolutionStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListAvailableSolutionStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of available solution stacks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSolutionStacks() const{ return m_solutionStacks; }

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline void SetSolutionStacks(const Aws::Vector<Aws::String>& value) { m_solutionStacks = value; }

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline void SetSolutionStacks(Aws::Vector<Aws::String>&& value) { m_solutionStacks = std::move(value); }

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline ListAvailableSolutionStacksResult& WithSolutionStacks(const Aws::Vector<Aws::String>& value) { SetSolutionStacks(value); return *this;}

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline ListAvailableSolutionStacksResult& WithSolutionStacks(Aws::Vector<Aws::String>&& value) { SetSolutionStacks(std::move(value)); return *this;}

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline ListAvailableSolutionStacksResult& AddSolutionStacks(const Aws::String& value) { m_solutionStacks.push_back(value); return *this; }

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline ListAvailableSolutionStacksResult& AddSolutionStacks(Aws::String&& value) { m_solutionStacks.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of available solution stacks.</p>
     */
    inline ListAvailableSolutionStacksResult& AddSolutionStacks(const char* value) { m_solutionStacks.push_back(value); return *this; }


    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline const Aws::Vector<SolutionStackDescription>& GetSolutionStackDetails() const{ return m_solutionStackDetails; }

    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline void SetSolutionStackDetails(const Aws::Vector<SolutionStackDescription>& value) { m_solutionStackDetails = value; }

    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline void SetSolutionStackDetails(Aws::Vector<SolutionStackDescription>&& value) { m_solutionStackDetails = std::move(value); }

    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline ListAvailableSolutionStacksResult& WithSolutionStackDetails(const Aws::Vector<SolutionStackDescription>& value) { SetSolutionStackDetails(value); return *this;}

    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline ListAvailableSolutionStacksResult& WithSolutionStackDetails(Aws::Vector<SolutionStackDescription>&& value) { SetSolutionStackDetails(std::move(value)); return *this;}

    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline ListAvailableSolutionStacksResult& AddSolutionStackDetails(const SolutionStackDescription& value) { m_solutionStackDetails.push_back(value); return *this; }

    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline ListAvailableSolutionStacksResult& AddSolutionStackDetails(SolutionStackDescription&& value) { m_solutionStackDetails.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListAvailableSolutionStacksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListAvailableSolutionStacksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_solutionStacks;

    Aws::Vector<SolutionStackDescription> m_solutionStackDetails;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
