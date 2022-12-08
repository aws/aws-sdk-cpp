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


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListImagePackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListImagePackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListImagePackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline const Aws::Vector<ImagePackage>& GetImagePackageList() const{ return m_imagePackageList; }

    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline void SetImagePackageList(const Aws::Vector<ImagePackage>& value) { m_imagePackageList = value; }

    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline void SetImagePackageList(Aws::Vector<ImagePackage>&& value) { m_imagePackageList = std::move(value); }

    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline ListImagePackagesResult& WithImagePackageList(const Aws::Vector<ImagePackage>& value) { SetImagePackageList(value); return *this;}

    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline ListImagePackagesResult& WithImagePackageList(Aws::Vector<ImagePackage>&& value) { SetImagePackageList(std::move(value)); return *this;}

    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline ListImagePackagesResult& AddImagePackageList(const ImagePackage& value) { m_imagePackageList.push_back(value); return *this; }

    /**
     * <p>The list of Image Packages returned in the response.</p>
     */
    inline ListImagePackagesResult& AddImagePackageList(ImagePackage&& value) { m_imagePackageList.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<ImagePackage> m_imagePackageList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
