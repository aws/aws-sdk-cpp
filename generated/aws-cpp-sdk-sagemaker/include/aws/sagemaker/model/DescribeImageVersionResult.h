/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ImageVersionStatus.h>
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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API DescribeImageVersionResult
  {
  public:
    DescribeImageVersionResult();
    DescribeImageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline const Aws::String& GetBaseImage() const{ return m_baseImage; }

    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline void SetBaseImage(const Aws::String& value) { m_baseImage = value; }

    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline void SetBaseImage(Aws::String&& value) { m_baseImage = std::move(value); }

    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline void SetBaseImage(const char* value) { m_baseImage.assign(value); }

    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline DescribeImageVersionResult& WithBaseImage(const Aws::String& value) { SetBaseImage(value); return *this;}

    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline DescribeImageVersionResult& WithBaseImage(Aws::String&& value) { SetBaseImage(std::move(value)); return *this;}

    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline DescribeImageVersionResult& WithBaseImage(const char* value) { SetBaseImage(value); return *this;}


    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline const Aws::String& GetContainerImage() const{ return m_containerImage; }

    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline void SetContainerImage(const Aws::String& value) { m_containerImage = value; }

    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline void SetContainerImage(Aws::String&& value) { m_containerImage = std::move(value); }

    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline void SetContainerImage(const char* value) { m_containerImage.assign(value); }

    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline DescribeImageVersionResult& WithContainerImage(const Aws::String& value) { SetContainerImage(value); return *this;}

    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline DescribeImageVersionResult& WithContainerImage(Aws::String&& value) { SetContainerImage(std::move(value)); return *this;}

    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline DescribeImageVersionResult& WithContainerImage(const char* value) { SetContainerImage(value); return *this;}


    /**
     * <p>When the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the version was created.</p>
     */
    inline DescribeImageVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the version was created.</p>
     */
    inline DescribeImageVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline DescribeImageVersionResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline DescribeImageVersionResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline DescribeImageVersionResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline DescribeImageVersionResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline DescribeImageVersionResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image the version is based on.</p>
     */
    inline DescribeImageVersionResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The ARN of the version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const{ return m_imageVersionArn; }

    /**
     * <p>The ARN of the version.</p>
     */
    inline void SetImageVersionArn(const Aws::String& value) { m_imageVersionArn = value; }

    /**
     * <p>The ARN of the version.</p>
     */
    inline void SetImageVersionArn(Aws::String&& value) { m_imageVersionArn = std::move(value); }

    /**
     * <p>The ARN of the version.</p>
     */
    inline void SetImageVersionArn(const char* value) { m_imageVersionArn.assign(value); }

    /**
     * <p>The ARN of the version.</p>
     */
    inline DescribeImageVersionResult& WithImageVersionArn(const Aws::String& value) { SetImageVersionArn(value); return *this;}

    /**
     * <p>The ARN of the version.</p>
     */
    inline DescribeImageVersionResult& WithImageVersionArn(Aws::String&& value) { SetImageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the version.</p>
     */
    inline DescribeImageVersionResult& WithImageVersionArn(const char* value) { SetImageVersionArn(value); return *this;}


    /**
     * <p>The status of the version.</p>
     */
    inline const ImageVersionStatus& GetImageVersionStatus() const{ return m_imageVersionStatus; }

    /**
     * <p>The status of the version.</p>
     */
    inline void SetImageVersionStatus(const ImageVersionStatus& value) { m_imageVersionStatus = value; }

    /**
     * <p>The status of the version.</p>
     */
    inline void SetImageVersionStatus(ImageVersionStatus&& value) { m_imageVersionStatus = std::move(value); }

    /**
     * <p>The status of the version.</p>
     */
    inline DescribeImageVersionResult& WithImageVersionStatus(const ImageVersionStatus& value) { SetImageVersionStatus(value); return *this;}

    /**
     * <p>The status of the version.</p>
     */
    inline DescribeImageVersionResult& WithImageVersionStatus(ImageVersionStatus&& value) { SetImageVersionStatus(std::move(value)); return *this;}


    /**
     * <p>When the version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the version was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the version was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the version was last modified.</p>
     */
    inline DescribeImageVersionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the version was last modified.</p>
     */
    inline DescribeImageVersionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(int value) { m_version = value; }

    /**
     * <p>The version number.</p>
     */
    inline DescribeImageVersionResult& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_baseImage;

    Aws::String m_containerImage;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    Aws::String m_imageArn;

    Aws::String m_imageVersionArn;

    ImageVersionStatus m_imageVersionStatus;

    Aws::Utils::DateTime m_lastModifiedTime;

    int m_version;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
