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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/CacheType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the cache for the build project.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectCache">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectCache
  {
  public:
    ProjectCache();
    ProjectCache(const Aws::Utils::Json::JsonValue& jsonValue);
    ProjectCache& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project will not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project will read and write from/to
     * S3.</p> </li> </ul>
     */
    inline const CacheType& GetType() const{ return m_type; }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project will not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project will read and write from/to
     * S3.</p> </li> </ul>
     */
    inline void SetType(const CacheType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project will not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project will read and write from/to
     * S3.</p> </li> </ul>
     */
    inline void SetType(CacheType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project will not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project will read and write from/to
     * S3.</p> </li> </ul>
     */
    inline ProjectCache& WithType(const CacheType& value) { SetType(value); return *this;}

    /**
     * <p>The type of cache used by the build project. Valid values include:</p> <ul>
     * <li> <p> <code>NO_CACHE</code>: The build project will not use any cache.</p>
     * </li> <li> <p> <code>S3</code>: The build project will read and write from/to
     * S3.</p> </li> </ul>
     */
    inline ProjectCache& WithType(CacheType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline ProjectCache& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline ProjectCache& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Information about the cache location, as follows: </p> <ul> <li> <p>
     * <code>NO_CACHE</code>: This value will be ignored.</p> </li> <li> <p>
     * <code>S3</code>: This is the S3 bucket name/prefix.</p> </li> </ul>
     */
    inline ProjectCache& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    CacheType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
