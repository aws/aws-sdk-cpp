/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ImageScanStatus.h>
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
  class StartImageScanResult
  {
  public:
    AWS_ECR_API StartImageScanResult();
    AWS_ECR_API StartImageScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API StartImageScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline StartImageScanResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline StartImageScanResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline StartImageScanResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline StartImageScanResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline StartImageScanResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline StartImageScanResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    
    inline void SetImageId(const ImageIdentifier& value) { m_imageId = value; }

    
    inline void SetImageId(ImageIdentifier&& value) { m_imageId = std::move(value); }

    
    inline StartImageScanResult& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    
    inline StartImageScanResult& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}


    /**
     * <p>The current state of the scan.</p>
     */
    inline const ImageScanStatus& GetImageScanStatus() const{ return m_imageScanStatus; }

    /**
     * <p>The current state of the scan.</p>
     */
    inline void SetImageScanStatus(const ImageScanStatus& value) { m_imageScanStatus = value; }

    /**
     * <p>The current state of the scan.</p>
     */
    inline void SetImageScanStatus(ImageScanStatus&& value) { m_imageScanStatus = std::move(value); }

    /**
     * <p>The current state of the scan.</p>
     */
    inline StartImageScanResult& WithImageScanStatus(const ImageScanStatus& value) { SetImageScanStatus(value); return *this;}

    /**
     * <p>The current state of the scan.</p>
     */
    inline StartImageScanResult& WithImageScanStatus(ImageScanStatus&& value) { SetImageScanStatus(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    ImageIdentifier m_imageId;

    ImageScanStatus m_imageScanStatus;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
