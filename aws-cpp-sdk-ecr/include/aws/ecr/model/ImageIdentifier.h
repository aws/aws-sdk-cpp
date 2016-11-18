﻿/*
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

  /**
   * <p>An object with identifying information for an Amazon ECR image.</p>
   */
  class AWS_ECR_API ImageIdentifier
  {
  public:
    ImageIdentifier();
    ImageIdentifier(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageIdentifier& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageIdentifier& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageIdentifier& WithImageDigest(Aws::String&& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageIdentifier& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}

    /**
     * <p>The tag used for the image.</p>
     */
    inline const Aws::String& GetImageTag() const{ return m_imageTag; }

    /**
     * <p>The tag used for the image.</p>
     */
    inline void SetImageTag(const Aws::String& value) { m_imageTagHasBeenSet = true; m_imageTag = value; }

    /**
     * <p>The tag used for the image.</p>
     */
    inline void SetImageTag(Aws::String&& value) { m_imageTagHasBeenSet = true; m_imageTag = value; }

    /**
     * <p>The tag used for the image.</p>
     */
    inline void SetImageTag(const char* value) { m_imageTagHasBeenSet = true; m_imageTag.assign(value); }

    /**
     * <p>The tag used for the image.</p>
     */
    inline ImageIdentifier& WithImageTag(const Aws::String& value) { SetImageTag(value); return *this;}

    /**
     * <p>The tag used for the image.</p>
     */
    inline ImageIdentifier& WithImageTag(Aws::String&& value) { SetImageTag(value); return *this;}

    /**
     * <p>The tag used for the image.</p>
     */
    inline ImageIdentifier& WithImageTag(const char* value) { SetImageTag(value); return *this;}

  private:
    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet;
    Aws::String m_imageTag;
    bool m_imageTagHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
