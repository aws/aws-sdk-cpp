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
  class AWS_CODESTAR_API ToolchainSource
  {
  public:
    ToolchainSource();
    ToolchainSource(Aws::Utils::Json::JsonView jsonValue);
    ToolchainSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_s3HasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
