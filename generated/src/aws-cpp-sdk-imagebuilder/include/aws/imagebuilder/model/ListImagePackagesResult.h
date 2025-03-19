/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImagePackage.h>
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
  class ListImagePackagesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImagePackagesResult() = default;
    AWS_IMAGEBUILDER_API ListImagePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImagePackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline const Aws::Vector<ImagePackage>& GetImagePackageList() const { return m_imagePackageList; }
    template<typename ImagePackageListT = Aws::Vector<ImagePackage>>
    void SetImagePackageList(ImagePackageListT&& value) { m_imagePackageListHasBeenSet = true; m_imagePackageList = std::forward<ImagePackageListT>(value); }
    template<typename ImagePackageListT = Aws::Vector<ImagePackage>>
    ListImagePackagesResult& WithImagePackageList(ImagePackageListT&& value) { SetImagePackageList(std::forward<ImagePackageListT>(value)); return *this;}
    template<typename ImagePackageListT = ImagePackage>
    ListImagePackagesResult& AddImagePackageList(ImagePackageListT&& value) { m_imagePackageListHasBeenSet = true; m_imagePackageList.emplace_back(std::forward<ImagePackageListT>(value)); return *this; }
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
    ListImagePackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<ImagePackage> m_imagePackageList;
    bool m_imagePackageListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
