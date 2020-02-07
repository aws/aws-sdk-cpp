/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_IMAGEBUILDER_API Logging
  {
  public:
    Logging();
    Logging(Aws::Utils::Json::JsonView jsonValue);
    Logging& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_s3LogsHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
