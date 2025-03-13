/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ImageScanStatus.h>
#include <aws/ecr/model/ImageScanFindings.h>
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
namespace ECR
{
namespace Model
{
  class DescribeImageScanFindingsResult
  {
  public:
    AWS_ECR_API DescribeImageScanFindingsResult() = default;
    AWS_ECR_API DescribeImageScanFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeImageScanFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    DescribeImageScanFindingsResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    DescribeImageScanFindingsResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageIdentifier& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = ImageIdentifier>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = ImageIdentifier>
    DescribeImageScanFindingsResult& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the scan.</p>
     */
    inline const ImageScanStatus& GetImageScanStatus() const { return m_imageScanStatus; }
    template<typename ImageScanStatusT = ImageScanStatus>
    void SetImageScanStatus(ImageScanStatusT&& value) { m_imageScanStatusHasBeenSet = true; m_imageScanStatus = std::forward<ImageScanStatusT>(value); }
    template<typename ImageScanStatusT = ImageScanStatus>
    DescribeImageScanFindingsResult& WithImageScanStatus(ImageScanStatusT&& value) { SetImageScanStatus(std::forward<ImageScanStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information contained in the image scan findings.</p>
     */
    inline const ImageScanFindings& GetImageScanFindings() const { return m_imageScanFindings; }
    template<typename ImageScanFindingsT = ImageScanFindings>
    void SetImageScanFindings(ImageScanFindingsT&& value) { m_imageScanFindingsHasBeenSet = true; m_imageScanFindings = std::forward<ImageScanFindingsT>(value); }
    template<typename ImageScanFindingsT = ImageScanFindings>
    DescribeImageScanFindingsResult& WithImageScanFindings(ImageScanFindingsT&& value) { SetImageScanFindings(std::forward<ImageScanFindingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImageScanFindingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImageScanFindingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet = false;

    ImageScanStatus m_imageScanStatus;
    bool m_imageScanStatusHasBeenSet = false;

    ImageScanFindings m_imageScanFindings;
    bool m_imageScanFindingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
