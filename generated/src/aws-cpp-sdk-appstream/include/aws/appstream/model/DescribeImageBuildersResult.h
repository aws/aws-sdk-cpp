/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/ImageBuilder.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeImageBuildersResult
  {
  public:
    AWS_APPSTREAM_API DescribeImageBuildersResult() = default;
    AWS_APPSTREAM_API DescribeImageBuildersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeImageBuildersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the image builders.</p>
     */
    inline const Aws::Vector<ImageBuilder>& GetImageBuilders() const { return m_imageBuilders; }
    template<typename ImageBuildersT = Aws::Vector<ImageBuilder>>
    void SetImageBuilders(ImageBuildersT&& value) { m_imageBuildersHasBeenSet = true; m_imageBuilders = std::forward<ImageBuildersT>(value); }
    template<typename ImageBuildersT = Aws::Vector<ImageBuilder>>
    DescribeImageBuildersResult& WithImageBuilders(ImageBuildersT&& value) { SetImageBuilders(std::forward<ImageBuildersT>(value)); return *this;}
    template<typename ImageBuildersT = ImageBuilder>
    DescribeImageBuildersResult& AddImageBuilders(ImageBuildersT&& value) { m_imageBuildersHasBeenSet = true; m_imageBuilders.emplace_back(std::forward<ImageBuildersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImageBuildersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImageBuildersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageBuilder> m_imageBuilders;
    bool m_imageBuildersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
