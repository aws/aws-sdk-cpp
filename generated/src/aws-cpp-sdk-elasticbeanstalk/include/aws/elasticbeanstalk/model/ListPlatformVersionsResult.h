/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/PlatformSummary.h>
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
  class ListPlatformVersionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult() = default;
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Summary information about the platform versions.</p>
     */
    inline const Aws::Vector<PlatformSummary>& GetPlatformSummaryList() const { return m_platformSummaryList; }
    template<typename PlatformSummaryListT = Aws::Vector<PlatformSummary>>
    void SetPlatformSummaryList(PlatformSummaryListT&& value) { m_platformSummaryListHasBeenSet = true; m_platformSummaryList = std::forward<PlatformSummaryListT>(value); }
    template<typename PlatformSummaryListT = Aws::Vector<PlatformSummary>>
    ListPlatformVersionsResult& WithPlatformSummaryList(PlatformSummaryListT&& value) { SetPlatformSummaryList(std::forward<PlatformSummaryListT>(value)); return *this;}
    template<typename PlatformSummaryListT = PlatformSummary>
    ListPlatformVersionsResult& AddPlatformSummaryList(PlatformSummaryListT&& value) { m_platformSummaryListHasBeenSet = true; m_platformSummaryList.emplace_back(std::forward<PlatformSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In a paginated request, if this value isn't <code>null</code>, it's the token
     * that you can pass in a subsequent request to get the next response page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPlatformVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListPlatformVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlatformSummary> m_platformSummaryList;
    bool m_platformSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
