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
#include <aws/codebuild/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/GitSubmodulesConfig.h>
#include <aws/codebuild/model/SourceAuth.h>
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
   * <p>Information about the build input source code for the build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectSource">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectSource
  {
  public:
    ProjectSource();
    ProjectSource(Aws::Utils::Json::JsonView jsonValue);
    ProjectSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an AWS CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in AWS CodePipeline.</p> </li> <li> <p>
     * <code>GITHUB</code>: The source code is in a GitHub repository.</p> </li> <li>
     * <p> <code>NO_SOURCE</code>: The project does not have input source code.</p>
     * </li> <li> <p> <code>S3</code>: The source code is in an Amazon Simple Storage
     * Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline const SourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an AWS CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in AWS CodePipeline.</p> </li> <li> <p>
     * <code>GITHUB</code>: The source code is in a GitHub repository.</p> </li> <li>
     * <p> <code>NO_SOURCE</code>: The project does not have input source code.</p>
     * </li> <li> <p> <code>S3</code>: The source code is in an Amazon Simple Storage
     * Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an AWS CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in AWS CodePipeline.</p> </li> <li> <p>
     * <code>GITHUB</code>: The source code is in a GitHub repository.</p> </li> <li>
     * <p> <code>NO_SOURCE</code>: The project does not have input source code.</p>
     * </li> <li> <p> <code>S3</code>: The source code is in an Amazon Simple Storage
     * Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline void SetType(const SourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an AWS CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in AWS CodePipeline.</p> </li> <li> <p>
     * <code>GITHUB</code>: The source code is in a GitHub repository.</p> </li> <li>
     * <p> <code>NO_SOURCE</code>: The project does not have input source code.</p>
     * </li> <li> <p> <code>S3</code>: The source code is in an Amazon Simple Storage
     * Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline void SetType(SourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an AWS CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in AWS CodePipeline.</p> </li> <li> <p>
     * <code>GITHUB</code>: The source code is in a GitHub repository.</p> </li> <li>
     * <p> <code>NO_SOURCE</code>: The project does not have input source code.</p>
     * </li> <li> <p> <code>S3</code>: The source code is in an Amazon Simple Storage
     * Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline ProjectSource& WithType(const SourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of repository that contains the source code to be built. Valid
     * values include:</p> <ul> <li> <p> <code>BITBUCKET</code>: The source code is in
     * a Bitbucket repository.</p> </li> <li> <p> <code>CODECOMMIT</code>: The source
     * code is in an AWS CodeCommit repository.</p> </li> <li> <p>
     * <code>CODEPIPELINE</code>: The source code settings are specified in the source
     * action of a pipeline in AWS CodePipeline.</p> </li> <li> <p>
     * <code>GITHUB</code>: The source code is in a GitHub repository.</p> </li> <li>
     * <p> <code>NO_SOURCE</code>: The project does not have input source code.</p>
     * </li> <li> <p> <code>S3</code>: The source code is in an Amazon Simple Storage
     * Service (Amazon S3) input bucket.</p> </li> </ul>
     */
    inline ProjectSource& WithType(SourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline ProjectSource& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline ProjectSource& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>Information about the location of the source code to be built. Valid values
     * include:</p> <ul> <li> <p>For source code settings that are specified in the
     * source action of a pipeline in AWS CodePipeline, <code>location</code> should
     * not be specified. If it is specified, AWS CodePipeline ignores it. This is
     * because AWS CodePipeline uses the settings in a pipeline's source action instead
     * of this value.</p> </li> <li> <p>For source code in an AWS CodeCommit
     * repository, the HTTPS clone URL to the repository that contains the source code
     * and the build spec (for example,
     * <code>https://git-codecommit.<i>region-ID</i>.amazonaws.com/v1/repos/<i>repo-name</i>
     * </code>).</p> </li> <li> <p>For source code in an Amazon Simple Storage Service
     * (Amazon S3) input bucket, one of the following. </p> <ul> <li> <p> The path to
     * the ZIP file that contains the source code (for example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>object-name</i>.zip</code>). </p>
     * </li> <li> <p> The path to the folder that contains the source code (for
     * example, <code>
     * <i>bucket-name</i>/<i>path</i>/<i>to</i>/<i>source-code</i>/<i>folder</i>/</code>).
     * </p> </li> </ul> </li> <li> <p>For source code in a GitHub repository, the HTTPS
     * clone URL to the repository that contains the source and the build spec. You
     * must connect your AWS account to your GitHub account. Use the AWS CodeBuild
     * console to start creating a build project. When you use the console to connect
     * (or reconnect) with GitHub, on the GitHub <b>Authorize application</b> page, for
     * <b>Organization access</b>, choose <b>Request access</b> next to each repository
     * you want to allow AWS CodeBuild to have access to, and then choose <b>Authorize
     * application</b>. (After you have connected to your GitHub account, you do not
     * need to finish creating the build project. You can leave the AWS CodeBuild
     * console.) To instruct AWS CodeBuild to use this connection, in the
     * <code>source</code> object, set the <code>auth</code> object's <code>type</code>
     * value to <code>OAUTH</code>.</p> </li> <li> <p>For source code in a Bitbucket
     * repository, the HTTPS clone URL to the repository that contains the source and
     * the build spec. You must connect your AWS account to your Bitbucket account. Use
     * the AWS CodeBuild console to start creating a build project. When you use the
     * console to connect (or reconnect) with Bitbucket, on the Bitbucket <b>Confirm
     * access to your account</b> page, choose <b>Grant access</b>. (After you have
     * connected to your Bitbucket account, you do not need to finish creating the
     * build project. You can leave the AWS CodeBuild console.) To instruct AWS
     * CodeBuild to use this connection, in the <code>source</code> object, set the
     * <code>auth</code> object's <code>type</code> value to <code>OAUTH</code>.</p>
     * </li> </ul>
     */
    inline ProjectSource& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>Information about the Git clone depth for the build project.</p>
     */
    inline int GetGitCloneDepth() const{ return m_gitCloneDepth; }

    /**
     * <p>Information about the Git clone depth for the build project.</p>
     */
    inline bool GitCloneDepthHasBeenSet() const { return m_gitCloneDepthHasBeenSet; }

    /**
     * <p>Information about the Git clone depth for the build project.</p>
     */
    inline void SetGitCloneDepth(int value) { m_gitCloneDepthHasBeenSet = true; m_gitCloneDepth = value; }

    /**
     * <p>Information about the Git clone depth for the build project.</p>
     */
    inline ProjectSource& WithGitCloneDepth(int value) { SetGitCloneDepth(value); return *this;}


    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline const GitSubmodulesConfig& GetGitSubmodulesConfig() const{ return m_gitSubmodulesConfig; }

    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline bool GitSubmodulesConfigHasBeenSet() const { return m_gitSubmodulesConfigHasBeenSet; }

    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline void SetGitSubmodulesConfig(const GitSubmodulesConfig& value) { m_gitSubmodulesConfigHasBeenSet = true; m_gitSubmodulesConfig = value; }

    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline void SetGitSubmodulesConfig(GitSubmodulesConfig&& value) { m_gitSubmodulesConfigHasBeenSet = true; m_gitSubmodulesConfig = std::move(value); }

    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline ProjectSource& WithGitSubmodulesConfig(const GitSubmodulesConfig& value) { SetGitSubmodulesConfig(value); return *this;}

    /**
     * <p> Information about the Git submodules configuration for the build project.
     * </p>
     */
    inline ProjectSource& WithGitSubmodulesConfig(GitSubmodulesConfig&& value) { SetGitSubmodulesConfig(std::move(value)); return *this;}


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
    inline bool BuildspecHasBeenSet() const { return m_buildspecHasBeenSet; }

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
    inline void SetBuildspec(Aws::String&& value) { m_buildspecHasBeenSet = true; m_buildspec = std::move(value); }

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
    inline ProjectSource& WithBuildspec(Aws::String&& value) { SetBuildspec(std::move(value)); return *this;}

    /**
     * <p>The build spec declaration to use for the builds in this build project.</p>
     * <p>If this value is not specified, a build spec must be included along with the
     * source code to be built.</p>
     */
    inline ProjectSource& WithBuildspec(const char* value) { SetBuildspec(value); return *this;}


    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information
     * directly.</p>
     */
    inline const SourceAuth& GetAuth() const{ return m_auth; }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information
     * directly.</p>
     */
    inline bool AuthHasBeenSet() const { return m_authHasBeenSet; }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information
     * directly.</p>
     */
    inline void SetAuth(const SourceAuth& value) { m_authHasBeenSet = true; m_auth = value; }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information
     * directly.</p>
     */
    inline void SetAuth(SourceAuth&& value) { m_authHasBeenSet = true; m_auth = std::move(value); }

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information
     * directly.</p>
     */
    inline ProjectSource& WithAuth(const SourceAuth& value) { SetAuth(value); return *this;}

    /**
     * <p>Information about the authorization settings for AWS CodeBuild to access the
     * source code to be built.</p> <p>This information is for the AWS CodeBuild
     * console's use only. Your code should not get or set this information
     * directly.</p>
     */
    inline ProjectSource& WithAuth(SourceAuth&& value) { SetAuth(std::move(value)); return *this;}


    /**
     * <p> Set to true to report the status of a build's start and finish to your
     * source provider. This option is valid only when your source provider is GitHub,
     * GitHub Enterprise, or Bitbucket. If this is set and you use a different source
     * provider, an invalidInputException is thrown. </p>
     */
    inline bool GetReportBuildStatus() const{ return m_reportBuildStatus; }

    /**
     * <p> Set to true to report the status of a build's start and finish to your
     * source provider. This option is valid only when your source provider is GitHub,
     * GitHub Enterprise, or Bitbucket. If this is set and you use a different source
     * provider, an invalidInputException is thrown. </p>
     */
    inline bool ReportBuildStatusHasBeenSet() const { return m_reportBuildStatusHasBeenSet; }

    /**
     * <p> Set to true to report the status of a build's start and finish to your
     * source provider. This option is valid only when your source provider is GitHub,
     * GitHub Enterprise, or Bitbucket. If this is set and you use a different source
     * provider, an invalidInputException is thrown. </p>
     */
    inline void SetReportBuildStatus(bool value) { m_reportBuildStatusHasBeenSet = true; m_reportBuildStatus = value; }

    /**
     * <p> Set to true to report the status of a build's start and finish to your
     * source provider. This option is valid only when your source provider is GitHub,
     * GitHub Enterprise, or Bitbucket. If this is set and you use a different source
     * provider, an invalidInputException is thrown. </p>
     */
    inline ProjectSource& WithReportBuildStatus(bool value) { SetReportBuildStatus(value); return *this;}


    /**
     * <p>Enable this flag to ignore SSL warnings while connecting to the project
     * source code.</p>
     */
    inline bool GetInsecureSsl() const{ return m_insecureSsl; }

    /**
     * <p>Enable this flag to ignore SSL warnings while connecting to the project
     * source code.</p>
     */
    inline bool InsecureSslHasBeenSet() const { return m_insecureSslHasBeenSet; }

    /**
     * <p>Enable this flag to ignore SSL warnings while connecting to the project
     * source code.</p>
     */
    inline void SetInsecureSsl(bool value) { m_insecureSslHasBeenSet = true; m_insecureSsl = value; }

    /**
     * <p>Enable this flag to ignore SSL warnings while connecting to the project
     * source code.</p>
     */
    inline ProjectSource& WithInsecureSsl(bool value) { SetInsecureSsl(value); return *this;}


    /**
     * <p> An identifier for this project source. </p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p> An identifier for this project source. </p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p> An identifier for this project source. </p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p> An identifier for this project source. </p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p> An identifier for this project source. </p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p> An identifier for this project source. </p>
     */
    inline ProjectSource& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p> An identifier for this project source. </p>
     */
    inline ProjectSource& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p> An identifier for this project source. </p>
     */
    inline ProjectSource& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}

  private:

    SourceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    int m_gitCloneDepth;
    bool m_gitCloneDepthHasBeenSet;

    GitSubmodulesConfig m_gitSubmodulesConfig;
    bool m_gitSubmodulesConfigHasBeenSet;

    Aws::String m_buildspec;
    bool m_buildspecHasBeenSet;

    SourceAuth m_auth;
    bool m_authHasBeenSet;

    bool m_reportBuildStatus;
    bool m_reportBuildStatusHasBeenSet;

    bool m_insecureSsl;
    bool m_insecureSslHasBeenSet;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
