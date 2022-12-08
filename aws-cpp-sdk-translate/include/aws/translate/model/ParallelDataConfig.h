/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataFormat.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Specifies the format and S3 location of the parallel data input
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ParallelDataConfig">AWS
   * API Reference</a></p>
   */
  class ParallelDataConfig
  {
  public:
    AWS_TRANSLATE_API ParallelDataConfig();
    AWS_TRANSLATE_API ParallelDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API ParallelDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline ParallelDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline ParallelDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI of the Amazon S3 folder that contains the parallel data input file.
     * The folder must be in the same Region as the API endpoint you are calling.</p>
     */
    inline ParallelDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline const ParallelDataFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline void SetFormat(const ParallelDataFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline void SetFormat(ParallelDataFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline ParallelDataConfig& WithFormat(const ParallelDataFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the parallel data input file.</p>
     */
    inline ParallelDataConfig& WithFormat(ParallelDataFormat&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    ParallelDataFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
