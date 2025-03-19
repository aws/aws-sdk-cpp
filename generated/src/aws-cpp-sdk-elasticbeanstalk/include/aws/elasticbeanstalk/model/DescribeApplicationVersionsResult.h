/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
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
   * <p>Result message wrapping a list of application version
   * descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationVersionDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationVersionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of <code>ApplicationVersionDescription</code> objects sorted in order of
     * creation.</p>
     */
    inline const Aws::Vector<ApplicationVersionDescription>& GetApplicationVersions() const { return m_applicationVersions; }
    template<typename ApplicationVersionsT = Aws::Vector<ApplicationVersionDescription>>
    void SetApplicationVersions(ApplicationVersionsT&& value) { m_applicationVersionsHasBeenSet = true; m_applicationVersions = std::forward<ApplicationVersionsT>(value); }
    template<typename ApplicationVersionsT = Aws::Vector<ApplicationVersionDescription>>
    DescribeApplicationVersionsResult& WithApplicationVersions(ApplicationVersionsT&& value) { SetApplicationVersions(std::forward<ApplicationVersionsT>(value)); return *this;}
    template<typename ApplicationVersionsT = ApplicationVersionDescription>
    DescribeApplicationVersionsResult& AddApplicationVersions(ApplicationVersionsT&& value) { m_applicationVersionsHasBeenSet = true; m_applicationVersions.emplace_back(std::forward<ApplicationVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In a paginated request, the token that you can pass in a subsequent request
     * to get the next response page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeApplicationVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeApplicationVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationVersionDescription> m_applicationVersions;
    bool m_applicationVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
