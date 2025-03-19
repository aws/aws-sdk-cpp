/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/MappedResourceConfigurationListItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisVideo
{
namespace Model
{
  class DescribeMappedResourceConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationResult() = default;
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeMappedResourceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that encapsulates, or contains, the media storage configuration
     * properties.</p>
     */
    inline const Aws::Vector<MappedResourceConfigurationListItem>& GetMappedResourceConfigurationList() const { return m_mappedResourceConfigurationList; }
    template<typename MappedResourceConfigurationListT = Aws::Vector<MappedResourceConfigurationListItem>>
    void SetMappedResourceConfigurationList(MappedResourceConfigurationListT&& value) { m_mappedResourceConfigurationListHasBeenSet = true; m_mappedResourceConfigurationList = std::forward<MappedResourceConfigurationListT>(value); }
    template<typename MappedResourceConfigurationListT = Aws::Vector<MappedResourceConfigurationListItem>>
    DescribeMappedResourceConfigurationResult& WithMappedResourceConfigurationList(MappedResourceConfigurationListT&& value) { SetMappedResourceConfigurationList(std::forward<MappedResourceConfigurationListT>(value)); return *this;}
    template<typename MappedResourceConfigurationListT = MappedResourceConfigurationListItem>
    DescribeMappedResourceConfigurationResult& AddMappedResourceConfigurationList(MappedResourceConfigurationListT&& value) { m_mappedResourceConfigurationListHasBeenSet = true; m_mappedResourceConfigurationList.emplace_back(std::forward<MappedResourceConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that was used in the <code>NextToken</code>request to fetch the
     * next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMappedResourceConfigurationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMappedResourceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MappedResourceConfigurationListItem> m_mappedResourceConfigurationList;
    bool m_mappedResourceConfigurationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
