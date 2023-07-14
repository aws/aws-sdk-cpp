/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricsSource">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MetricsSource
  {
  public:
    MetricsSource();
    MetricsSource(Aws::Utils::Json::JsonView jsonValue);
    MetricsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p/>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p/>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p/>
     */
    inline MetricsSource& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p/>
     */
    inline MetricsSource& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MetricsSource& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetContentDigest() const{ return m_contentDigest; }

    /**
     * <p/>
     */
    inline bool ContentDigestHasBeenSet() const { return m_contentDigestHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetContentDigest(const Aws::String& value) { m_contentDigestHasBeenSet = true; m_contentDigest = value; }

    /**
     * <p/>
     */
    inline void SetContentDigest(Aws::String&& value) { m_contentDigestHasBeenSet = true; m_contentDigest = std::move(value); }

    /**
     * <p/>
     */
    inline void SetContentDigest(const char* value) { m_contentDigestHasBeenSet = true; m_contentDigest.assign(value); }

    /**
     * <p/>
     */
    inline MetricsSource& WithContentDigest(const Aws::String& value) { SetContentDigest(value); return *this;}

    /**
     * <p/>
     */
    inline MetricsSource& WithContentDigest(Aws::String&& value) { SetContentDigest(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MetricsSource& WithContentDigest(const char* value) { SetContentDigest(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p/>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p/>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p/>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p/>
     */
    inline MetricsSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p/>
     */
    inline MetricsSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MetricsSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    Aws::String m_contentDigest;
    bool m_contentDigestHasBeenSet;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
