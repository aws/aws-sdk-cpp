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
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about a function's deployment package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionCodeLocation">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API FunctionCodeLocation
  {
  public:
    FunctionCodeLocation();
    FunctionCodeLocation(Aws::Utils::Json::JsonView jsonValue);
    FunctionCodeLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service that's hosting the file.</p>
     */
    inline const Aws::String& GetRepositoryType() const{ return m_repositoryType; }

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline bool RepositoryTypeHasBeenSet() const { return m_repositoryTypeHasBeenSet; }

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline void SetRepositoryType(const Aws::String& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = value; }

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline void SetRepositoryType(Aws::String&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = std::move(value); }

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline void SetRepositoryType(const char* value) { m_repositoryTypeHasBeenSet = true; m_repositoryType.assign(value); }

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline FunctionCodeLocation& WithRepositoryType(const Aws::String& value) { SetRepositoryType(value); return *this;}

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline FunctionCodeLocation& WithRepositoryType(Aws::String&& value) { SetRepositoryType(std::move(value)); return *this;}

    /**
     * <p>The service that's hosting the file.</p>
     */
    inline FunctionCodeLocation& WithRepositoryType(const char* value) { SetRepositoryType(value); return *this;}


    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline FunctionCodeLocation& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
     */
    inline FunctionCodeLocation& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>A presigned URL that you can use to download the deployment package.</p>
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
