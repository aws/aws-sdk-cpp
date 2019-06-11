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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RootAccess.h>
#include <aws/sagemaker/model/NotebookInstanceAcceleratorType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateNotebookInstanceRequest : public SageMakerRequest
  {
  public:
    UpdateNotebookInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebookInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline UpdateNotebookInstanceRequest& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline UpdateNotebookInstanceRequest& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline UpdateNotebookInstanceRequest& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}


    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline UpdateNotebookInstanceRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline UpdateNotebookInstanceRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline UpdateNotebookInstanceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline UpdateNotebookInstanceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker can
     * assume to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline UpdateNotebookInstanceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline const Aws::String& GetLifecycleConfigName() const{ return m_lifecycleConfigName; }

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline bool LifecycleConfigNameHasBeenSet() const { return m_lifecycleConfigNameHasBeenSet; }

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline void SetLifecycleConfigName(const Aws::String& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = value; }

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline void SetLifecycleConfigName(Aws::String&& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = std::move(value); }

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline void SetLifecycleConfigName(const char* value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName.assign(value); }

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithLifecycleConfigName(const Aws::String& value) { SetLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithLifecycleConfigName(Aws::String&& value) { SetLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithLifecycleConfigName(const char* value) { SetLifecycleConfigName(value); return *this;}


    /**
     * <p>Set to <code>true</code> to remove the notebook instance lifecycle
     * configuration currently associated with the notebook instance. This operation is
     * idempotent. If you specify a lifecycle configuration that is not associated with
     * the notebook instance when you call this method, it does not throw an error.</p>
     */
    inline bool GetDisassociateLifecycleConfig() const{ return m_disassociateLifecycleConfig; }

    /**
     * <p>Set to <code>true</code> to remove the notebook instance lifecycle
     * configuration currently associated with the notebook instance. This operation is
     * idempotent. If you specify a lifecycle configuration that is not associated with
     * the notebook instance when you call this method, it does not throw an error.</p>
     */
    inline bool DisassociateLifecycleConfigHasBeenSet() const { return m_disassociateLifecycleConfigHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to remove the notebook instance lifecycle
     * configuration currently associated with the notebook instance. This operation is
     * idempotent. If you specify a lifecycle configuration that is not associated with
     * the notebook instance when you call this method, it does not throw an error.</p>
     */
    inline void SetDisassociateLifecycleConfig(bool value) { m_disassociateLifecycleConfigHasBeenSet = true; m_disassociateLifecycleConfig = value; }

    /**
     * <p>Set to <code>true</code> to remove the notebook instance lifecycle
     * configuration currently associated with the notebook instance. This operation is
     * idempotent. If you specify a lifecycle configuration that is not associated with
     * the notebook instance when you call this method, it does not throw an error.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDisassociateLifecycleConfig(bool value) { SetDisassociateLifecycleConfig(value); return *this;}


    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB. ML storage volumes are encrypted, so Amazon SageMaker
     * can't determine the amount of available free space on the volume. Because of
     * this, you can increase the volume size when you update a notebook instance, but
     * you can't decrease the volume size. If you want to decrease the size of the ML
     * storage volume in use, create a new notebook instance with the desired size.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB. ML storage volumes are encrypted, so Amazon SageMaker
     * can't determine the amount of available free space on the volume. Because of
     * this, you can increase the volume size when you update a notebook instance, but
     * you can't decrease the volume size. If you want to decrease the size of the ML
     * storage volume in use, create a new notebook instance with the desired size.</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB. ML storage volumes are encrypted, so Amazon SageMaker
     * can't determine the amount of available free space on the volume. Because of
     * this, you can increase the volume size when you update a notebook instance, but
     * you can't decrease the volume size. If you want to decrease the size of the ML
     * storage volume in use, create a new notebook instance with the desired size.</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB. ML storage volumes are encrypted, so Amazon SageMaker
     * can't determine the amount of available free space on the volume. Because of
     * this, you can increase the volume size when you update a notebook instance, but
     * you can't decrease the volume size. If you want to decrease the size of the ML
     * storage volume in use, create a new notebook instance with the desired size.</p>
     */
    inline UpdateNotebookInstanceRequest& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = value; }

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::move(value); }

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository.assign(value); }

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}

    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}


    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = value; }

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::move(value); }

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with Amazon SageMaker Notebook Instances</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }


    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& WithAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& AddAcceleratorTypes(const NotebookInstanceAcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to associate with this
     * notebook instance. Currently only one EI instance type can be associated with a
     * notebook instance. For more information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/ei.html">Using Elastic
     * Inference in Amazon SageMaker</a>.</p>
     */
    inline UpdateNotebookInstanceRequest& AddAcceleratorTypes(NotebookInstanceAcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the Elastic Inference (EI) instance types to remove from this
     * notebook instance. This operation is idempotent. If you specify an accelerator
     * type that is not associated with the notebook instance when you call this
     * method, it does not throw an error.</p>
     */
    inline bool GetDisassociateAcceleratorTypes() const{ return m_disassociateAcceleratorTypes; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to remove from this
     * notebook instance. This operation is idempotent. If you specify an accelerator
     * type that is not associated with the notebook instance when you call this
     * method, it does not throw an error.</p>
     */
    inline bool DisassociateAcceleratorTypesHasBeenSet() const { return m_disassociateAcceleratorTypesHasBeenSet; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to remove from this
     * notebook instance. This operation is idempotent. If you specify an accelerator
     * type that is not associated with the notebook instance when you call this
     * method, it does not throw an error.</p>
     */
    inline void SetDisassociateAcceleratorTypes(bool value) { m_disassociateAcceleratorTypesHasBeenSet = true; m_disassociateAcceleratorTypes = value; }

    /**
     * <p>A list of the Elastic Inference (EI) instance types to remove from this
     * notebook instance. This operation is idempotent. If you specify an accelerator
     * type that is not associated with the notebook instance when you call this
     * method, it does not throw an error.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDisassociateAcceleratorTypes(bool value) { SetDisassociateAcceleratorTypes(value); return *this;}


    /**
     * <p>The name or URL of the default Git repository to remove from this notebook
     * instance. This operation is idempotent. If you specify a Git repository that is
     * not associated with the notebook instance when you call this method, it does not
     * throw an error.</p>
     */
    inline bool GetDisassociateDefaultCodeRepository() const{ return m_disassociateDefaultCodeRepository; }

    /**
     * <p>The name or URL of the default Git repository to remove from this notebook
     * instance. This operation is idempotent. If you specify a Git repository that is
     * not associated with the notebook instance when you call this method, it does not
     * throw an error.</p>
     */
    inline bool DisassociateDefaultCodeRepositoryHasBeenSet() const { return m_disassociateDefaultCodeRepositoryHasBeenSet; }

    /**
     * <p>The name or URL of the default Git repository to remove from this notebook
     * instance. This operation is idempotent. If you specify a Git repository that is
     * not associated with the notebook instance when you call this method, it does not
     * throw an error.</p>
     */
    inline void SetDisassociateDefaultCodeRepository(bool value) { m_disassociateDefaultCodeRepositoryHasBeenSet = true; m_disassociateDefaultCodeRepository = value; }

    /**
     * <p>The name or URL of the default Git repository to remove from this notebook
     * instance. This operation is idempotent. If you specify a Git repository that is
     * not associated with the notebook instance when you call this method, it does not
     * throw an error.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDisassociateDefaultCodeRepository(bool value) { SetDisassociateDefaultCodeRepository(value); return *this;}


    /**
     * <p>A list of names or URLs of the default Git repositories to remove from this
     * notebook instance. This operation is idempotent. If you specify a Git repository
     * that is not associated with the notebook instance when you call this method, it
     * does not throw an error.</p>
     */
    inline bool GetDisassociateAdditionalCodeRepositories() const{ return m_disassociateAdditionalCodeRepositories; }

    /**
     * <p>A list of names or URLs of the default Git repositories to remove from this
     * notebook instance. This operation is idempotent. If you specify a Git repository
     * that is not associated with the notebook instance when you call this method, it
     * does not throw an error.</p>
     */
    inline bool DisassociateAdditionalCodeRepositoriesHasBeenSet() const { return m_disassociateAdditionalCodeRepositoriesHasBeenSet; }

    /**
     * <p>A list of names or URLs of the default Git repositories to remove from this
     * notebook instance. This operation is idempotent. If you specify a Git repository
     * that is not associated with the notebook instance when you call this method, it
     * does not throw an error.</p>
     */
    inline void SetDisassociateAdditionalCodeRepositories(bool value) { m_disassociateAdditionalCodeRepositoriesHasBeenSet = true; m_disassociateAdditionalCodeRepositories = value; }

    /**
     * <p>A list of names or URLs of the default Git repositories to remove from this
     * notebook instance. This operation is idempotent. If you specify a Git repository
     * that is not associated with the notebook instance when you call this method, it
     * does not throw an error.</p>
     */
    inline UpdateNotebookInstanceRequest& WithDisassociateAdditionalCodeRepositories(bool value) { SetDisassociateAdditionalCodeRepositories(value); return *this;}


    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p> <note> <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> </note>
     */
    inline const RootAccess& GetRootAccess() const{ return m_rootAccess; }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p> <note> <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> </note>
     */
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p> <note> <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> </note>
     */
    inline void SetRootAccess(const RootAccess& value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p> <note> <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> </note>
     */
    inline void SetRootAccess(RootAccess&& value) { m_rootAccessHasBeenSet = true; m_rootAccess = std::move(value); }

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p> <note> <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> </note>
     */
    inline UpdateNotebookInstanceRequest& WithRootAccess(const RootAccess& value) { SetRootAccess(value); return *this;}

    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p> <note> <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> </note>
     */
    inline UpdateNotebookInstanceRequest& WithRootAccess(RootAccess&& value) { SetRootAccess(std::move(value)); return *this;}

  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_lifecycleConfigName;
    bool m_lifecycleConfigNameHasBeenSet;

    bool m_disassociateLifecycleConfig;
    bool m_disassociateLifecycleConfigHasBeenSet;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet;

    Aws::Vector<NotebookInstanceAcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet;

    bool m_disassociateAcceleratorTypes;
    bool m_disassociateAcceleratorTypesHasBeenSet;

    bool m_disassociateDefaultCodeRepository;
    bool m_disassociateDefaultCodeRepositoryHasBeenSet;

    bool m_disassociateAdditionalCodeRepositories;
    bool m_disassociateAdditionalCodeRepositoriesHasBeenSet;

    RootAccess m_rootAccess;
    bool m_rootAccessHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
