/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageScanningConfiguration.h>
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
  class PutImageScanningConfigurationResult
  {
  public:
    AWS_ECR_API PutImageScanningConfigurationResult();
    AWS_ECR_API PutImageScanningConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutImageScanningConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline PutImageScanningConfigurationResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline PutImageScanningConfigurationResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline PutImageScanningConfigurationResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline PutImageScanningConfigurationResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PutImageScanningConfigurationResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PutImageScanningConfigurationResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image scanning configuration setting for the repository.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfiguration = value; }
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfiguration = std::move(value); }
    inline PutImageScanningConfigurationResult& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}
    inline PutImageScanningConfigurationResult& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutImageScanningConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutImageScanningConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutImageScanningConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    ImageScanningConfiguration m_imageScanningConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
