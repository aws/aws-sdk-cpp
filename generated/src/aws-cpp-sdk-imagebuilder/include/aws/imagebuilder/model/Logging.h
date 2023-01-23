/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/S3Logs.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Logging configuration defines where Image Builder uploads your
   * logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Logging">AWS
   * API Reference</a></p>
   */
  class Logging
  {
  public:
    AWS_IMAGEBUILDER_API Logging();
    AWS_IMAGEBUILDER_API Logging(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 logging configuration.</p>
     */
    inline const S3Logs& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>The Amazon S3 logging configuration.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>The Amazon S3 logging configuration.</p>
     */
    inline void SetS3Logs(const S3Logs& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>The Amazon S3 logging configuration.</p>
     */
    inline void SetS3Logs(S3Logs&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>The Amazon S3 logging configuration.</p>
     */
    inline Logging& WithS3Logs(const S3Logs& value) { SetS3Logs(value); return *this;}

    /**
     * <p>The Amazon S3 logging configuration.</p>
     */
    inline Logging& WithS3Logs(S3Logs&& value) { SetS3Logs(std::move(value)); return *this;}

  private:

    S3Logs m_s3Logs;
    bool m_s3LogsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
