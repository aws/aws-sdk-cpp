/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ImageFailureCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
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

  class AWS_ECR_API ImageFailure
  {
  public:
    ImageFailure();
    ImageFailure(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageFailure& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The image ID associated with the failure.</p>
     */
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    /**
     * <p>The image ID associated with the failure.</p>
     */
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The image ID associated with the failure.</p>
     */
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The image ID associated with the failure.</p>
     */
    inline ImageFailure& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    /**
     * <p>The image ID associated with the failure.</p>
     */
    inline ImageFailure& WithImageId(ImageIdentifier&& value) { SetImageId(value); return *this;}

    /**
     * <p>The code associated with the failure.</p>
     */
    inline const ImageFailureCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The code associated with the failure.</p>
     */
    inline void SetFailureCode(const ImageFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The code associated with the failure.</p>
     */
    inline void SetFailureCode(ImageFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The code associated with the failure.</p>
     */
    inline ImageFailure& WithFailureCode(const ImageFailureCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The code associated with the failure.</p>
     */
    inline ImageFailure& WithFailureCode(ImageFailureCode&& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

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
    inline ImageFailure& WithFailureReason(Aws::String&& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for the failure.</p>
     */
    inline ImageFailure& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:
    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet;
    ImageFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet;
    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
