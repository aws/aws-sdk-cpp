/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAvailableSolutionStacksResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ListAvailableSolutionStacksResult() = default;
    AWS_ELASTICBEANSTALK_API ListAvailableSolutionStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ListAvailableSolutionStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of available solution stacks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSolutionStacks() const { return m_solutionStacks; }
    template<typename SolutionStacksT = Aws::Vector<Aws::String>>
    void SetSolutionStacks(SolutionStacksT&& value) { m_solutionStacksHasBeenSet = true; m_solutionStacks = std::forward<SolutionStacksT>(value); }
    template<typename SolutionStacksT = Aws::Vector<Aws::String>>
    ListAvailableSolutionStacksResult& WithSolutionStacks(SolutionStacksT&& value) { SetSolutionStacks(std::forward<SolutionStacksT>(value)); return *this;}
    template<typename SolutionStacksT = Aws::String>
    ListAvailableSolutionStacksResult& AddSolutionStacks(SolutionStacksT&& value) { m_solutionStacksHasBeenSet = true; m_solutionStacks.emplace_back(std::forward<SolutionStacksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of available solution stacks and their
     * <a>SolutionStackDescription</a>. </p>
     */
    inline const Aws::Vector<SolutionStackDescription>& GetSolutionStackDetails() const { return m_solutionStackDetails; }
    template<typename SolutionStackDetailsT = Aws::Vector<SolutionStackDescription>>
    void SetSolutionStackDetails(SolutionStackDetailsT&& value) { m_solutionStackDetailsHasBeenSet = true; m_solutionStackDetails = std::forward<SolutionStackDetailsT>(value); }
    template<typename SolutionStackDetailsT = Aws::Vector<SolutionStackDescription>>
    ListAvailableSolutionStacksResult& WithSolutionStackDetails(SolutionStackDetailsT&& value) { SetSolutionStackDetails(std::forward<SolutionStackDetailsT>(value)); return *this;}
    template<typename SolutionStackDetailsT = SolutionStackDescription>
    ListAvailableSolutionStacksResult& AddSolutionStackDetails(SolutionStackDetailsT&& value) { m_solutionStackDetailsHasBeenSet = true; m_solutionStackDetails.emplace_back(std::forward<SolutionStackDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListAvailableSolutionStacksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_solutionStacks;
    bool m_solutionStacksHasBeenSet = false;

    Aws::Vector<SolutionStackDescription> m_solutionStackDetails;
    bool m_solutionStackDetailsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
