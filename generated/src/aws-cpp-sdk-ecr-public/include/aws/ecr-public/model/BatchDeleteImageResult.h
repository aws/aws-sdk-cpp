/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/ImageIdentifier.h>
#include <aws/ecr-public/model/ImageFailure.h>
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
namespace ECRPublic
{
namespace Model
{
  class BatchDeleteImageResult
  {
  public:
    AWS_ECRPUBLIC_API BatchDeleteImageResult() = default;
    AWS_ECRPUBLIC_API BatchDeleteImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API BatchDeleteImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The image IDs of the deleted images.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const { return m_imageIds; }
    template<typename ImageIdsT = Aws::Vector<ImageIdentifier>>
    void SetImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::forward<ImageIdsT>(value); }
    template<typename ImageIdsT = Aws::Vector<ImageIdentifier>>
    BatchDeleteImageResult& WithImageIds(ImageIdsT&& value) { SetImageIds(std::forward<ImageIdsT>(value)); return *this;}
    template<typename ImageIdsT = ImageIdentifier>
    BatchDeleteImageResult& AddImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds.emplace_back(std::forward<ImageIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<ImageFailure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<ImageFailure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<ImageFailure>>
    BatchDeleteImageResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = ImageFailure>
    BatchDeleteImageResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteImageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageIdentifier> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    Aws::Vector<ImageFailure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
