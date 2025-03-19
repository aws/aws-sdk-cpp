/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionDescription.h>
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
   * <p>Describes the settings for a specified configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationOptionsDescription">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationOptionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    DescribeConfigurationOptionsResult& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    DescribeConfigurationOptionsResult& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline const Aws::Vector<ConfigurationOptionDescription>& GetOptions() const { return m_options; }
    template<typename OptionsT = Aws::Vector<ConfigurationOptionDescription>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<ConfigurationOptionDescription>>
    DescribeConfigurationOptionsResult& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = ConfigurationOptionDescription>
    DescribeConfigurationOptionsResult& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::Vector<ConfigurationOptionDescription> m_options;
    bool m_optionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
