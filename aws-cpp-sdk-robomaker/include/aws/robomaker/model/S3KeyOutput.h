/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about S3 keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/S3KeyOutput">AWS
   * API Reference</a></p>
   */
  class S3KeyOutput
  {
  public:
    AWS_ROBOMAKER_API S3KeyOutput();
    AWS_ROBOMAKER_API S3KeyOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API S3KeyOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 key.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The S3 key.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The S3 key.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The S3 key.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The S3 key.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The S3 key.</p>
     */
    inline S3KeyOutput& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The S3 key.</p>
     */
    inline S3KeyOutput& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The S3 key.</p>
     */
    inline S3KeyOutput& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>The etag for the object.</p>
     */
    inline const Aws::String& GetEtag() const{ return m_etag; }

    /**
     * <p>The etag for the object.</p>
     */
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }

    /**
     * <p>The etag for the object.</p>
     */
    inline void SetEtag(const Aws::String& value) { m_etagHasBeenSet = true; m_etag = value; }

    /**
     * <p>The etag for the object.</p>
     */
    inline void SetEtag(Aws::String&& value) { m_etagHasBeenSet = true; m_etag = std::move(value); }

    /**
     * <p>The etag for the object.</p>
     */
    inline void SetEtag(const char* value) { m_etagHasBeenSet = true; m_etag.assign(value); }

    /**
     * <p>The etag for the object.</p>
     */
    inline S3KeyOutput& WithEtag(const Aws::String& value) { SetEtag(value); return *this;}

    /**
     * <p>The etag for the object.</p>
     */
    inline S3KeyOutput& WithEtag(Aws::String&& value) { SetEtag(std::move(value)); return *this;}

    /**
     * <p>The etag for the object.</p>
     */
    inline S3KeyOutput& WithEtag(const char* value) { SetEtag(value); return *this;}

  private:

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_etag;
    bool m_etagHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
