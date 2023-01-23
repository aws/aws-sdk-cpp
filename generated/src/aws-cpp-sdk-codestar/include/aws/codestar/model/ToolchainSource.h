/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/model/S3Location.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>The Amazon S3 location where the toolchain template file provided with the
   * project request is stored. AWS CodeStar retrieves the file during project
   * creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ToolchainSource">AWS
   * API Reference</a></p>
   */
  class ToolchainSource
  {
  public:
    AWS_CODESTAR_API ToolchainSource();
    AWS_CODESTAR_API ToolchainSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API ToolchainSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket where the toolchain template file provided with the
     * project request is stored.</p>
     */
    inline const S3Location& GetS3() const{ return m_s3; }

    /**
     * <p>The Amazon S3 bucket where the toolchain template file provided with the
     * project request is stored.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the toolchain template file provided with the
     * project request is stored.</p>
     */
    inline void SetS3(const S3Location& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The Amazon S3 bucket where the toolchain template file provided with the
     * project request is stored.</p>
     */
    inline void SetS3(S3Location&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the toolchain template file provided with the
     * project request is stored.</p>
     */
    inline ToolchainSource& WithS3(const S3Location& value) { SetS3(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the toolchain template file provided with the
     * project request is stored.</p>
     */
    inline ToolchainSource& WithS3(S3Location&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3Location m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
