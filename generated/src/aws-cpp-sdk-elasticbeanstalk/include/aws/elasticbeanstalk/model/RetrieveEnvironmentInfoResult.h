/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoDescription.h>
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
   * <p>Result message containing a description of the requested environment
   * info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfoResultMessage">AWS
   * API Reference</a></p>
   */
  class RetrieveEnvironmentInfoResult
  {
  public:
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult() = default;
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The <a>EnvironmentInfoDescription</a> of the environment. </p>
     */
    inline const Aws::Vector<EnvironmentInfoDescription>& GetEnvironmentInfo() const { return m_environmentInfo; }
    template<typename EnvironmentInfoT = Aws::Vector<EnvironmentInfoDescription>>
    void SetEnvironmentInfo(EnvironmentInfoT&& value) { m_environmentInfoHasBeenSet = true; m_environmentInfo = std::forward<EnvironmentInfoT>(value); }
    template<typename EnvironmentInfoT = Aws::Vector<EnvironmentInfoDescription>>
    RetrieveEnvironmentInfoResult& WithEnvironmentInfo(EnvironmentInfoT&& value) { SetEnvironmentInfo(std::forward<EnvironmentInfoT>(value)); return *this;}
    template<typename EnvironmentInfoT = EnvironmentInfoDescription>
    RetrieveEnvironmentInfoResult& AddEnvironmentInfo(EnvironmentInfoT&& value) { m_environmentInfoHasBeenSet = true; m_environmentInfo.emplace_back(std::forward<EnvironmentInfoT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RetrieveEnvironmentInfoResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentInfoDescription> m_environmentInfo;
    bool m_environmentInfoHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
