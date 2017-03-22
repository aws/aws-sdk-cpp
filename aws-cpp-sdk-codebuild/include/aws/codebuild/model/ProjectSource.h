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
#include <aws/codebuild/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SourceAuth.h>

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
   * <p>Information about the build input source code for the build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectSource">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectSource
  {
  public:
    ProjectSource();
    ProjectSource(const Aws::Utils::Json::JsonValue& jsonValue);
    ProjectSource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>CODECOMMIT</code>: The source code is in
     * an AWS CodeCommit repository.</p> </li> <li> <p> <code>CODEPIPELINE</code>: The
     * source code settings are specified in the source action of a pipeline in AWS
     * CodePipeline.</p> </li> <li> <p> <code>GITHUB</code>: The source code is in a
     * GitHub repository.</p> </li> <li> <p> <code>S3</code>: The source code is in an
     * Amazon Simple Storage Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline const SourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>CODECOMMIT</code>: The source code is in
     * an AWS CodeCommit repository.</p> </li> <li> <p> <code>CODEPIPELINE</code>: The
     * source code settings are specified in the source action of a pipeline in AWS
     * CodePipeline.</p> </li> <li> <p> <code>GITHUB</code>: The source code is in a
     * GitHub repository.</p> </li> <li> <p> <code>S3</code>: The source code is in an
     * Amazon Simple Storage Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline void SetType(const SourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>CODECOMMIT</code>: The source code is in
     * an AWS CodeCommit repository.</p> </li> <li> <p> <code>CODEPIPELINE</code>: The
     * source code settings are specified in the source action of a pipeline in AWS
     * CodePipeline.</p> </li> <li> <p> <code>GITHUB</code>: The source code is in a
     * GitHub repository.</p> </li> <li> <p> <code>S3</code>: The source code is in an
     * Amazon Simple Storage Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline void SetType(SourceType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>CODECOMMIT</code>: The source code is in
     * an AWS CodeCommit repository.</p> </li> <li> <p> <code>CODEPIPELINE</code>: The
     * source code settings are specified in the source action of a pipeline in AWS
     * CodePipeline.</p> </li> <li> <p> <code>GITHUB</code>: The source code is in a
     * GitHub repository.</p> </li> <li> <p> <code>S3</code>: The source code is in an
     * Amazon Simple Storage Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline ProjectSource& WithType(const SourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>CODECOMMIT</code>: The source code is in
     * an AWS CodeCommit repository.</p> </li> <li> <p> <code>CODEPIPELINE</code>: The
     * source code settings are specified in the source action of a pipeline in AWS
     * CodePipeline.</p> </li> <li> <p> <code>GITHUB</code>: The source code is in a
     * GitHub repository.</p> </li> <li> <p> <code>S3</code>: The source code is in an
     * Amazon Simple Storage Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline ProjectSource& WithType(SourceType&& value) { SetType(value); return *this;}

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline ProjectSource& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline ProjectSource& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline will ignore it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, the path to the ZIP file that contains the source code
     * (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>)</p>
     * </li> <li> <p>For source code in a GitHub repository, the HTTPS clone URL to the
     * repository that contains the source and the build spec. Also, you must connect
     * your AWS account to your GitHub account. To do this, use the AWS CodeBuild
     * console to begin creating a build project, and follow the on-screen instructions
     * to complete the connection. (After you have connected to your GitHub account,
     * you do not need to finish creating the build project, and you may then leave the
     * AWS CodeBuild console.) To instruct AWS CodeBuild to then use this connection,
     * in the <code>source</code> object, set the <code>auth</code> object's
     * <code>type</code> value to <code>OAUTH</code>.</p> </li> </ul>
     */
    inline ProjectSource& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline const Aws::String& GetBuildspec() const{ return m_buildspec; }

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline void SetBuildspec(const Aws::String& value) { m_buildspecHasBeenSet = true; m_buildspec = value; }

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline void SetBuildspec(Aws::String&& value) { m_buildspecHasBeenSet = true; m_buildspec = value; }

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline void SetBuildspec(const char* value) { m_buildspecHasBeenSet = true; m_buildspec.assign(value); }

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline ProjectSource& WithBuildspec(const Aws::String& value) { SetBuildspec(value); return *this;}

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline ProjectSource& WithBuildspec(Aws::String&& value) { SetBuildspec(value); return *this;}

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline ProjectSource& WithBuildspec(const char* value) { SetBuildspec(value); return *this;}

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information directly
     * (unless the build project's source <code>type</code> value is
     * <code>GITHUB</code>).</p>
     */
    inline const SourceAuth& GetAuth() const{ return m_auth; }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information directly
     * (unless the build project's source <code>type</code> value is
     * <code>GITHUB</code>).</p>
     */
    inline void SetAuth(const SourceAuth& value) { m_authHasBeenSet = true; m_auth = value; }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information directly
     * (unless the build project's source <code>type</code> value is
     * <code>GITHUB</code>).</p>
     */
    inline void SetAuth(SourceAuth&& value) { m_authHasBeenSet = true; m_auth = value; }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information directly
     * (unless the build project's source <code>type</code> value is
     * <code>GITHUB</code>).</p>
     */
    inline ProjectSource& WithAuth(const SourceAuth& value) { SetAuth(value); return *this;}

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information directly
     * (unless the build project's source <code>type</code> value is
     * <code>GITHUB</code>).</p>
     */
    inline ProjectSource& WithAuth(SourceAuth&& value) { SetAuth(value); return *this;}

  private:
    SourceType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_location;
    bool m_locationHasBeenSet;
    Aws::String m_buildspec;
    bool m_buildspecHasBeenSet;
    SourceAuth m_auth;
    bool m_authHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
