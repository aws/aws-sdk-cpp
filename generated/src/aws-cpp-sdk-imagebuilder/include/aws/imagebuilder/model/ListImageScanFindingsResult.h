/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImageScanFinding.h>
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
  class ListImageScanFindingsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImageScanFindingsResult();
    AWS_IMAGEBUILDER_API ListImageScanFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImageScanFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImageScanFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImageScanFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImageScanFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image scan findings for your account that meet your request filter
     * criteria.</p>
     */
    inline const Aws::Vector<ImageScanFinding>& GetFindings() const{ return m_findings; }
    inline void SetFindings(const Aws::Vector<ImageScanFinding>& value) { m_findings = value; }
    inline void SetFindings(Aws::Vector<ImageScanFinding>&& value) { m_findings = std::move(value); }
    inline ListImageScanFindingsResult& WithFindings(const Aws::Vector<ImageScanFinding>& value) { SetFindings(value); return *this;}
    inline ListImageScanFindingsResult& WithFindings(Aws::Vector<ImageScanFinding>&& value) { SetFindings(std::move(value)); return *this;}
    inline ListImageScanFindingsResult& AddFindings(const ImageScanFinding& value) { m_findings.push_back(value); return *this; }
    inline ListImageScanFindingsResult& AddFindings(ImageScanFinding&& value) { m_findings.push_back(std::move(value)); return *this; }
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
    inline ListImageScanFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImageScanFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImageScanFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<ImageScanFinding> m_findings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
