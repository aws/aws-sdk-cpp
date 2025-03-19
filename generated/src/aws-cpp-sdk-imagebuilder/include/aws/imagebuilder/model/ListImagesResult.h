/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImageVersion.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListImagesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImagesResult() = default;
    AWS_IMAGEBUILDER_API ListImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of image semantic versions.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Filtering:</b> With semantic versioning, you have the flexibility to use
     * wildcards (x) to specify the most recent versions or nodes when selecting the
     * base image or components for your recipe. When you use a wildcard in any node,
     * all nodes to the right of the first wildcard must also be wildcards.</p> 
     */
    inline const Aws::Vector<ImageVersion>& GetImageVersionList() const { return m_imageVersionList; }
    template<typename ImageVersionListT = Aws::Vector<ImageVersion>>
    void SetImageVersionList(ImageVersionListT&& value) { m_imageVersionListHasBeenSet = true; m_imageVersionList = std::forward<ImageVersionListT>(value); }
    template<typename ImageVersionListT = Aws::Vector<ImageVersion>>
    ListImagesResult& WithImageVersionList(ImageVersionListT&& value) { SetImageVersionList(std::forward<ImageVersionListT>(value)); return *this;}
    template<typename ImageVersionListT = ImageVersion>
    ListImagesResult& AddImageVersionList(ImageVersionListT&& value) { m_imageVersionListHasBeenSet = true; m_imageVersionList.emplace_back(std::forward<ImageVersionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<ImageVersion> m_imageVersionList;
    bool m_imageVersionListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
