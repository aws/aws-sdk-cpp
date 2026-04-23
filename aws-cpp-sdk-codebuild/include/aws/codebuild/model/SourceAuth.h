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
#include <aws/codebuild/model/SourceAuthType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the authorization settings for AWS CodeBuild to access the
   * source code to be built.</p> <p>This information is for the AWS CodeBuild
   * console's use only. Your code should not get or set this information
   * directly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/SourceAuth">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API SourceAuth
  {
  public:
    SourceAuth();
    SourceAuth(Aws::Utils::Json::JsonView jsonValue);
    SourceAuth& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <note> <p> This data type is deprecated and is no longer accurate or used. </p>
     * </note> <p>The authorization type to use. The only valid value is
     * <code>OAUTH</code>, which represents the OAuth authorization type.</p>
     */
    inline const SourceAuthType& GetType() const{ return m_type; }

    /**
     * <note> <p> This data type is deprecated and is no longer accurate or used. </p>
     * </note> <p>The authorization type to use. The only valid value is
     * <code>OAUTH</code>, which represents the OAuth authorization type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <note> <p> This data type is deprecated and is no longer accurate or used. </p>
     * </note> <p>The authorization type to use. The only valid value is
     * <code>OAUTH</code>, which represents the OAuth authorization type.</p>
     */
    inline void SetType(const SourceAuthType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <note> <p> This data type is deprecated and is no longer accurate or used. </p>
     * </note> <p>The authorization type to use. The only valid value is
     * <code>OAUTH</code>, which represents the OAuth authorization type.</p>
     */
    inline void SetType(SourceAuthType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <note> <p> This data type is deprecated and is no longer accurate or used. </p>
     * </note> <p>The authorization type to use. The only valid value is
     * <code>OAUTH</code>, which represents the OAuth authorization type.</p>
     */
    inline SourceAuth& WithType(const SourceAuthType& value) { SetType(value); return *this;}

    /**
     * <note> <p> This data type is deprecated and is no longer accurate or used. </p>
     * </note> <p>The authorization type to use. The only valid value is
     * <code>OAUTH</code>, which represents the OAuth authorization type.</p>
     */
    inline SourceAuth& WithType(SourceAuthType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline SourceAuth& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline SourceAuth& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The resource value that applies to the specified authorization type.</p>
     */
    inline SourceAuth& WithResource(const char* value) { SetResource(value); return *this;}

  private:

    SourceAuthType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_resource;
    bool m_resourceHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
