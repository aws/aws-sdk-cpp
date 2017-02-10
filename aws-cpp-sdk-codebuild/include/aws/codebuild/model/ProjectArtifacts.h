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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ArtifactsType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ArtifactNamespace.h>
#include <aws/codebuild/model/ArtifactPackaging.h>

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
   * <p>Information about the build output artifacts for the build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectArtifacts">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectArtifacts
  {
  public:
    ProjectArtifacts();
    ProjectArtifacts(const Aws::Utils::Json::JsonValue& jsonValue);
    ProjectArtifacts& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of build output artifact. Valid values include:</p> <ul> <li> <p>
     * <code>CODEPIPELINE</code>: The build project will have build output generated
     * through AWS CodePipeline.</p> </li> <li> <p> <code>NO_ARTIFACTS</code>: The
     * build project will not produce any build output.</p> </li> <li> <p>
     * <code>S3</code>: The build project will store build output in Amazon Simple
     * Storage Service (Amazon S3).</p> </li> </ul>
     */
    inline const ArtifactsType& GetType() const{ return m_type; }

    /**
     * <p>The type of build output artifact. Valid values include:</p> <ul> <li> <p>
     * <code>CODEPIPELINE</code>: The build project will have build output generated
     * through AWS CodePipeline.</p> </li> <li> <p> <code>NO_ARTIFACTS</code>: The
     * build project will not produce any build output.</p> </li> <li> <p>
     * <code>S3</code>: The build project will store build output in Amazon Simple
     * Storage Service (Amazon S3).</p> </li> </ul>
     */
    inline void SetType(const ArtifactsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of build output artifact. Valid values include:</p> <ul> <li> <p>
     * <code>CODEPIPELINE</code>: The build project will have build output generated
     * through AWS CodePipeline.</p> </li> <li> <p> <code>NO_ARTIFACTS</code>: The
     * build project will not produce any build output.</p> </li> <li> <p>
     * <code>S3</code>: The build project will store build output in Amazon Simple
     * Storage Service (Amazon S3).</p> </li> </ul>
     */
    inline void SetType(ArtifactsType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of build output artifact. Valid values include:</p> <ul> <li> <p>
     * <code>CODEPIPELINE</code>: The build project will have build output generated
     * through AWS CodePipeline.</p> </li> <li> <p> <code>NO_ARTIFACTS</code>: The
     * build project will not produce any build output.</p> </li> <li> <p>
     * <code>S3</code>: The build project will store build output in Amazon Simple
     * Storage Service (Amazon S3).</p> </li> </ul>
     */
    inline ProjectArtifacts& WithType(const ArtifactsType& value) { SetType(value); return *this;}

    /**
     * <p>The type of build output artifact. Valid values include:</p> <ul> <li> <p>
     * <code>CODEPIPELINE</code>: The build project will have build output generated
     * through AWS CodePipeline.</p> </li> <li> <p> <code>NO_ARTIFACTS</code>: The
     * build project will not produce any build output.</p> </li> <li> <p>
     * <code>S3</code>: The build project will store build output in Amazon Simple
     * Storage Service (Amazon S3).</p> </li> </ul>
     */
    inline ProjectArtifacts& WithType(ArtifactsType&& value) { SetType(value); return *this;}

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline ProjectArtifacts& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline ProjectArtifacts& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the build output artifact location, as follows:</p> <ul>
     * <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output locations instead of AWS CodeBuild.</p>
     * </li> <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then
     * this value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output bucket.</p> </li> </ul>
     */
    inline ProjectArtifacts& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>Along with <code>namespaceType</code> and <code>name</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the path to the output artifact. If <code>path</code> is not specified, then
     * <code>path</code> will not be used.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>NONE</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in the
     * output bucket at <code>MyArtifacts/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>Along with <code>path</code> and <code>name</code>, the pattern that AWS
     * CodeBuild will use to determine the name and location to store the output
     * artifact, as follows:</p> <ul> <li> <p>If <code>type</code> is set to
     * <code>CODEPIPELINE</code>, then AWS CodePipeline will ignore this value if
     * specified. This is because AWS CodePipeline manages its build output names
     * instead of AWS CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, then this value will be ignored if specified, because
     * no build output will be produced.</p> </li> <li> <p>If <code>type</code> is set
     * to <code>S3</code>, then valid values include:</p> <ul> <li> <p>
     * <code>BUILD_ID</code>: Include the build ID in the location of the build output
     * artifact.</p> </li> <li> <p> <code>NONE</code>: Do not include the build ID.
     * This is the default if <code>namespaceType</code> is not specified.</p> </li>
     * </ul> </li> </ul> <p>For example, if <code>path</code> is set to
     * <code>MyArtifacts</code>, <code>namespaceType</code> is set to
     * <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline const ArtifactNamespace& GetNamespaceType() const{ return m_namespaceType; }

    /**
     * <p>Along with <code>path</code> and <code>name</code>, the pattern that AWS
     * CodeBuild will use to determine the name and location to store the output
     * artifact, as follows:</p> <ul> <li> <p>If <code>type</code> is set to
     * <code>CODEPIPELINE</code>, then AWS CodePipeline will ignore this value if
     * specified. This is because AWS CodePipeline manages its build output names
     * instead of AWS CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, then this value will be ignored if specified, because
     * no build output will be produced.</p> </li> <li> <p>If <code>type</code> is set
     * to <code>S3</code>, then valid values include:</p> <ul> <li> <p>
     * <code>BUILD_ID</code>: Include the build ID in the location of the build output
     * artifact.</p> </li> <li> <p> <code>NONE</code>: Do not include the build ID.
     * This is the default if <code>namespaceType</code> is not specified.</p> </li>
     * </ul> </li> </ul> <p>For example, if <code>path</code> is set to
     * <code>MyArtifacts</code>, <code>namespaceType</code> is set to
     * <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline void SetNamespaceType(const ArtifactNamespace& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = value; }

    /**
     * <p>Along with <code>path</code> and <code>name</code>, the pattern that AWS
     * CodeBuild will use to determine the name and location to store the output
     * artifact, as follows:</p> <ul> <li> <p>If <code>type</code> is set to
     * <code>CODEPIPELINE</code>, then AWS CodePipeline will ignore this value if
     * specified. This is because AWS CodePipeline manages its build output names
     * instead of AWS CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, then this value will be ignored if specified, because
     * no build output will be produced.</p> </li> <li> <p>If <code>type</code> is set
     * to <code>S3</code>, then valid values include:</p> <ul> <li> <p>
     * <code>BUILD_ID</code>: Include the build ID in the location of the build output
     * artifact.</p> </li> <li> <p> <code>NONE</code>: Do not include the build ID.
     * This is the default if <code>namespaceType</code> is not specified.</p> </li>
     * </ul> </li> </ul> <p>For example, if <code>path</code> is set to
     * <code>MyArtifacts</code>, <code>namespaceType</code> is set to
     * <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline void SetNamespaceType(ArtifactNamespace&& value) { m_namespaceTypeHasBeenSet = true; m_namespaceType = value; }

    /**
     * <p>Along with <code>path</code> and <code>name</code>, the pattern that AWS
     * CodeBuild will use to determine the name and location to store the output
     * artifact, as follows:</p> <ul> <li> <p>If <code>type</code> is set to
     * <code>CODEPIPELINE</code>, then AWS CodePipeline will ignore this value if
     * specified. This is because AWS CodePipeline manages its build output names
     * instead of AWS CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, then this value will be ignored if specified, because
     * no build output will be produced.</p> </li> <li> <p>If <code>type</code> is set
     * to <code>S3</code>, then valid values include:</p> <ul> <li> <p>
     * <code>BUILD_ID</code>: Include the build ID in the location of the build output
     * artifact.</p> </li> <li> <p> <code>NONE</code>: Do not include the build ID.
     * This is the default if <code>namespaceType</code> is not specified.</p> </li>
     * </ul> </li> </ul> <p>For example, if <code>path</code> is set to
     * <code>MyArtifacts</code>, <code>namespaceType</code> is set to
     * <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithNamespaceType(const ArtifactNamespace& value) { SetNamespaceType(value); return *this;}

    /**
     * <p>Along with <code>path</code> and <code>name</code>, the pattern that AWS
     * CodeBuild will use to determine the name and location to store the output
     * artifact, as follows:</p> <ul> <li> <p>If <code>type</code> is set to
     * <code>CODEPIPELINE</code>, then AWS CodePipeline will ignore this value if
     * specified. This is because AWS CodePipeline manages its build output names
     * instead of AWS CodeBuild.</p> </li> <li> <p>If <code>type</code> is set to
     * <code>NO_ARTIFACTS</code>, then this value will be ignored if specified, because
     * no build output will be produced.</p> </li> <li> <p>If <code>type</code> is set
     * to <code>S3</code>, then valid values include:</p> <ul> <li> <p>
     * <code>BUILD_ID</code>: Include the build ID in the location of the build output
     * artifact.</p> </li> <li> <p> <code>NONE</code>: Do not include the build ID.
     * This is the default if <code>namespaceType</code> is not specified.</p> </li>
     * </ul> </li> </ul> <p>For example, if <code>path</code> is set to
     * <code>MyArtifacts</code>, <code>namespaceType</code> is set to
     * <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithNamespaceType(ArtifactNamespace&& value) { SetNamespaceType(value); return *this;}

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Along with <code>path</code> and <code>namespaceType</code>, the pattern that
     * AWS CodeBuild will use to name and store the output artifact, as follows:</p>
     * <ul> <li> <p>If <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS
     * CodePipeline will ignore this value if specified. This is because AWS
     * CodePipeline manages its build output names instead of AWS CodeBuild.</p> </li>
     * <li> <p>If <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this
     * value will be ignored if specified, because no build output will be
     * produced.</p> </li> <li> <p>If <code>type</code> is set to <code>S3</code>, this
     * is the name of the output artifact object.</p> </li> </ul> <p>For example, if
     * <code>path</code> is set to <code>MyArtifacts</code>, <code>namespaceType</code>
     * is set to <code>BUILD_ID</code>, and <code>name</code> is set to
     * <code>MyArtifact.zip</code>, then the output artifact would be stored in
     * <code>MyArtifacts/<i>build-ID</i>/MyArtifact.zip</code>.</p>
     */
    inline ProjectArtifacts& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The type of build output artifact to create, as follows:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS CodePipeline
     * will ignore this value if specified. This is because AWS CodePipeline manages
     * its build output artifacts instead of AWS CodeBuild.</p> </li> <li> <p>If
     * <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this value will be
     * ignored if specified, because no build output will be produced.</p> </li> <li>
     * <p>If <code>type</code> is set to <code>S3</code>, valid values include:</p>
     * <ul> <li> <p> <code>NONE</code>: AWS CodeBuild will create in the output bucket
     * a folder containing the build output. This is the default if
     * <code>packaging</code> is not specified.</p> </li> <li> <p> <code>ZIP</code>:
     * AWS CodeBuild will create in the output bucket a ZIP file containing the build
     * output.</p> </li> </ul> </li> </ul>
     */
    inline const ArtifactPackaging& GetPackaging() const{ return m_packaging; }

    /**
     * <p>The type of build output artifact to create, as follows:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS CodePipeline
     * will ignore this value if specified. This is because AWS CodePipeline manages
     * its build output artifacts instead of AWS CodeBuild.</p> </li> <li> <p>If
     * <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this value will be
     * ignored if specified, because no build output will be produced.</p> </li> <li>
     * <p>If <code>type</code> is set to <code>S3</code>, valid values include:</p>
     * <ul> <li> <p> <code>NONE</code>: AWS CodeBuild will create in the output bucket
     * a folder containing the build output. This is the default if
     * <code>packaging</code> is not specified.</p> </li> <li> <p> <code>ZIP</code>:
     * AWS CodeBuild will create in the output bucket a ZIP file containing the build
     * output.</p> </li> </ul> </li> </ul>
     */
    inline void SetPackaging(const ArtifactPackaging& value) { m_packagingHasBeenSet = true; m_packaging = value; }

    /**
     * <p>The type of build output artifact to create, as follows:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS CodePipeline
     * will ignore this value if specified. This is because AWS CodePipeline manages
     * its build output artifacts instead of AWS CodeBuild.</p> </li> <li> <p>If
     * <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this value will be
     * ignored if specified, because no build output will be produced.</p> </li> <li>
     * <p>If <code>type</code> is set to <code>S3</code>, valid values include:</p>
     * <ul> <li> <p> <code>NONE</code>: AWS CodeBuild will create in the output bucket
     * a folder containing the build output. This is the default if
     * <code>packaging</code> is not specified.</p> </li> <li> <p> <code>ZIP</code>:
     * AWS CodeBuild will create in the output bucket a ZIP file containing the build
     * output.</p> </li> </ul> </li> </ul>
     */
    inline void SetPackaging(ArtifactPackaging&& value) { m_packagingHasBeenSet = true; m_packaging = value; }

    /**
     * <p>The type of build output artifact to create, as follows:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS CodePipeline
     * will ignore this value if specified. This is because AWS CodePipeline manages
     * its build output artifacts instead of AWS CodeBuild.</p> </li> <li> <p>If
     * <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this value will be
     * ignored if specified, because no build output will be produced.</p> </li> <li>
     * <p>If <code>type</code> is set to <code>S3</code>, valid values include:</p>
     * <ul> <li> <p> <code>NONE</code>: AWS CodeBuild will create in the output bucket
     * a folder containing the build output. This is the default if
     * <code>packaging</code> is not specified.</p> </li> <li> <p> <code>ZIP</code>:
     * AWS CodeBuild will create in the output bucket a ZIP file containing the build
     * output.</p> </li> </ul> </li> </ul>
     */
    inline ProjectArtifacts& WithPackaging(const ArtifactPackaging& value) { SetPackaging(value); return *this;}

    /**
     * <p>The type of build output artifact to create, as follows:</p> <ul> <li> <p>If
     * <code>type</code> is set to <code>CODEPIPELINE</code>, then AWS CodePipeline
     * will ignore this value if specified. This is because AWS CodePipeline manages
     * its build output artifacts instead of AWS CodeBuild.</p> </li> <li> <p>If
     * <code>type</code> is set to <code>NO_ARTIFACTS</code>, then this value will be
     * ignored if specified, because no build output will be produced.</p> </li> <li>
     * <p>If <code>type</code> is set to <code>S3</code>, valid values include:</p>
     * <ul> <li> <p> <code>NONE</code>: AWS CodeBuild will create in the output bucket
     * a folder containing the build output. This is the default if
     * <code>packaging</code> is not specified.</p> </li> <li> <p> <code>ZIP</code>:
     * AWS CodeBuild will create in the output bucket a ZIP file containing the build
     * output.</p> </li> </ul> </li> </ul>
     */
    inline ProjectArtifacts& WithPackaging(ArtifactPackaging&& value) { SetPackaging(value); return *this;}

  private:
    ArtifactsType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_location;
    bool m_locationHasBeenSet;
    Aws::String m_path;
    bool m_pathHasBeenSet;
    ArtifactNamespace m_namespaceType;
    bool m_namespaceTypeHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ArtifactPackaging m_packaging;
    bool m_packagingHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
