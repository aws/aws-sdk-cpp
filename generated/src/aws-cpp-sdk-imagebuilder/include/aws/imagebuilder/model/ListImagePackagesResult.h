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
    AWS_IMAGEBUILDER_API ListImagePackagesResult();
    AWS_IMAGEBUILDER_API ListImagePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImagePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImagePackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImagePackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImagePackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline const Aws::Vector<ImagePackage>& GetImagePackageList() const{ return m_imagePackageList; }
    inline void SetImagePackageList(const Aws::Vector<ImagePackage>& value) { m_imagePackageList = value; }
    inline void SetImagePackageList(Aws::Vector<ImagePackage>&& value) { m_imagePackageList = std::move(value); }
    inline ListImagePackagesResult& WithImagePackageList(const Aws::Vector<ImagePackage>& value) { SetImagePackageList(value); return *this;}
    inline ListImagePackagesResult& WithImagePackageList(Aws::Vector<ImagePackage>&& value) { SetImagePackageList(std::move(value)); return *this;}
    inline ListImagePackagesResult& AddImagePackageList(const ImagePackage& value) { m_imagePackageList.push_back(value); return *this; }
    inline ListImagePackagesResult& AddImagePackageList(ImagePackage&& value) { m_imagePackageList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListImagePackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImagePackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImagePackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<ImagePackage> m_imagePackageList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
