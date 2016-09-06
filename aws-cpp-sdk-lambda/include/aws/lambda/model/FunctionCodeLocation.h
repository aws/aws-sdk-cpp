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
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The object for the Lambda function location.</p>
   */
  class AWS_LAMBDA_API FunctionCodeLocation
  {
  public:
    FunctionCodeLocation();
    FunctionCodeLocation(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionCodeLocation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline const Aws::String& GetRepositoryType() const{ return m_repositoryType; }

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline void SetRepositoryType(const Aws::String& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = value; }

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline void SetRepositoryType(Aws::String&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = value; }

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline void SetRepositoryType(const char* value) { m_repositoryTypeHasBeenSet = true; m_repositoryType.assign(value); }

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline FunctionCodeLocation& WithRepositoryType(const Aws::String& value) { SetRepositoryType(value); return *this;}

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline FunctionCodeLocation& WithRepositoryType(Aws::String&& value) { SetRepositoryType(value); return *this;}

    /**
     * <p>The repository from which you can download the function.</p>
     */
    inline FunctionCodeLocation& WithRepositoryType(const char* value) { SetRepositoryType(value); return *this;}

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline FunctionCodeLocation& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline FunctionCodeLocation& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * <p>The presigned URL you can use to download the function's .zip file that you
     * previously uploaded. The URL is valid for up to 10 minutes.</p>
     */
    inline FunctionCodeLocation& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:
    Aws::String m_repositoryType;
    bool m_repositoryTypeHasBeenSet;
    Aws::String m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
