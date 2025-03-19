/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/PlatformBranchSummary.h>
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
  class ListPlatformBranchesResult
  {
  public:
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesResult() = default;
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Summary information about the platform branches.</p>
     */
    inline const Aws::Vector<PlatformBranchSummary>& GetPlatformBranchSummaryList() const { return m_platformBranchSummaryList; }
    template<typename PlatformBranchSummaryListT = Aws::Vector<PlatformBranchSummary>>
    void SetPlatformBranchSummaryList(PlatformBranchSummaryListT&& value) { m_platformBranchSummaryListHasBeenSet = true; m_platformBranchSummaryList = std::forward<PlatformBranchSummaryListT>(value); }
    template<typename PlatformBranchSummaryListT = Aws::Vector<PlatformBranchSummary>>
    ListPlatformBranchesResult& WithPlatformBranchSummaryList(PlatformBranchSummaryListT&& value) { SetPlatformBranchSummaryList(std::forward<PlatformBranchSummaryListT>(value)); return *this;}
    template<typename PlatformBranchSummaryListT = PlatformBranchSummary>
    ListPlatformBranchesResult& AddPlatformBranchSummaryList(PlatformBranchSummaryListT&& value) { m_platformBranchSummaryListHasBeenSet = true; m_platformBranchSummaryList.emplace_back(std::forward<PlatformBranchSummaryListT>(value)); return *this; }
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
    ListPlatformBranchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListPlatformBranchesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlatformBranchSummary> m_platformBranchSummaryList;
    bool m_platformBranchSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
