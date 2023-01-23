﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/ImageIdentifier.h>
#include <aws/ecr-public/model/ImageFailureCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object that represents an Amazon ECR image failure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ImageFailure">AWS
   * API Reference</a></p>
   */
  class ImageFailure
  {
  public:
    AWS_ECRPUBLIC_API ImageFailure();
    AWS_ECRPUBLIC_API ImageFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ImageFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image ID that's associated with the failure.</p>
     */
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    /**
     * <p>The image ID that's associated with the failure.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The image ID that's associated with the failure.</p>
     */
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The image ID that's associated with the failure.</p>
     */
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The image ID that's associated with the failure.</p>
     */
    inline ImageFailure& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    /**
     * <p>The image ID that's associated with the failure.</p>
     */
    inline ImageFailure& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}


    /**
     * <p>The code that's associated with the failure.</p>
     */
    inline const ImageFailureCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The code that's associated with the failure.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The code that's associated with the failure.</p>
     */
    inline void SetFailureCode(const ImageFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The code that's associated with the failure.</p>
     */
    inline void SetFailureCode(ImageFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The code that's associated with the failure.</p>
     */
    inline ImageFailure& WithFailureCode(const ImageFailureCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The code that's associated with the failure.</p>
     */
    inline ImageFailure& WithFailureCode(ImageFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason for the failure.</p>
     */
    inline ImageFailure& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline ImageFailure& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline ImageFailure& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet = false;

    ImageFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
