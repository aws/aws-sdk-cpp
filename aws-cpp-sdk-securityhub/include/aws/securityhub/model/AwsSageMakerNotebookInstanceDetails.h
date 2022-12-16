/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Amazon SageMaker notebook instance. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSageMakerNotebookInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsSageMakerNotebookInstanceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails();
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<Aws::String>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<Aws::String>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithAcceleratorTypes(const Aws::Vector<Aws::String>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithAcceleratorTypes(Aws::Vector<Aws::String>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(const Aws::String& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(Aws::String&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(const char* value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }


    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = value; }

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::move(value); }

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(std::move(value)); return *this; }

    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. These repositories are cloned at
     * the same level as the default repository of your notebook instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }


    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = value; }

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::move(value); }

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository.assign(value); }

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}

    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
     * CodeCommit</a> or in any other Git repository. When you open a notebook
     * instance, it opens in the directory that contains this repository. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker notebook instances</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}


    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline const Aws::String& GetDirectInternetAccess() const{ return m_directInternetAccess; }

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline bool DirectInternetAccessHasBeenSet() const { return m_directInternetAccessHasBeenSet; }

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline void SetDirectInternetAccess(const Aws::String& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = value; }

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline void SetDirectInternetAccess(Aws::String&& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = std::move(value); }

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline void SetDirectInternetAccess(const char* value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess.assign(value); }

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(const Aws::String& value) { SetDirectInternetAccess(value); return *this;}

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(Aws::String&& value) { SetDirectInternetAccess(std::move(value)); return *this;}

    /**
     * <p> Sets whether SageMaker provides internet access to the notebook instance. If
     * you set this to <code>Disabled</code>, this notebook instance is able to access
     * resources only in your VPC, and is not be able to connect to SageMaker training
     * and endpoint services unless you configure a Network Address Translation (NAT)
     * Gateway in your VPC. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(const char* value) { SetDirectInternetAccess(value); return *this;}


    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& GetInstanceMetadataServiceConfiguration() const{ return m_instanceMetadataServiceConfiguration; }

    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline bool InstanceMetadataServiceConfigurationHasBeenSet() const { return m_instanceMetadataServiceConfigurationHasBeenSet; }

    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline void SetInstanceMetadataServiceConfiguration(const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = value; }

    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline void SetInstanceMetadataServiceConfiguration(AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::move(value); }

    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceMetadataServiceConfiguration(const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& value) { SetInstanceMetadataServiceConfiguration(value); return *this;}

    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceMetadataServiceConfiguration(AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails&& value) { SetInstanceMetadataServiceConfiguration(std::move(value)); return *this;}


    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker uses to encrypt data on the storage volume attached to your notebook
     * instance. The KMS key you provide must be enabled. For information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p> The network interface ID that SageMaker created when the instance was
     * created. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline bool NotebookInstanceArnHasBeenSet() const { return m_notebookInstanceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}


    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}


    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}

    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}


    /**
     * <p> The status of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceStatus() const{ return m_notebookInstanceStatus; }

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline bool NotebookInstanceStatusHasBeenSet() const { return m_notebookInstanceStatusHasBeenSet; }

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline void SetNotebookInstanceStatus(const Aws::String& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = value; }

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline void SetNotebookInstanceStatus(Aws::String&& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = std::move(value); }

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline void SetNotebookInstanceStatus(const char* value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus.assign(value); }

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(const Aws::String& value) { SetNotebookInstanceStatus(value); return *this;}

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(Aws::String&& value) { SetNotebookInstanceStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(const char* value) { SetNotebookInstanceStatus(value); return *this;}


    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline const Aws::String& GetPlatformIdentifier() const{ return m_platformIdentifier; }

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline bool PlatformIdentifierHasBeenSet() const { return m_platformIdentifierHasBeenSet; }

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline void SetPlatformIdentifier(const Aws::String& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = value; }

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline void SetPlatformIdentifier(Aws::String&& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = std::move(value); }

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline void SetPlatformIdentifier(const char* value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier.assign(value); }

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(const Aws::String& value) { SetPlatformIdentifier(value); return *this;}

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(Aws::String&& value) { SetPlatformIdentifier(std::move(value)); return *this;}

    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(const char* value) { SetPlatformIdentifier(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline const Aws::String& GetRootAccess() const{ return m_rootAccess; }

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline void SetRootAccess(const Aws::String& value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline void SetRootAccess(Aws::String&& value) { m_rootAccessHasBeenSet = true; m_rootAccess = std::move(value); }

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline void SetRootAccess(const char* value) { m_rootAccessHasBeenSet = true; m_rootAccess.assign(value); }

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithRootAccess(const Aws::String& value) { SetRootAccess(value); return *this;}

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithRootAccess(Aws::String&& value) { SetRootAccess(std::move(value)); return *this;}

    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithRootAccess(const char* value) { SetRootAccess(value); return *this;}


    /**
     * <p> The VPC security group IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p> The VPC security group IDs. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p> The size, in GB, of the ML storage volume to attach to the notebook
     * instance. </p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p> The size, in GB, of the ML storage volume to attach to the notebook
     * instance. </p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p> The size, in GB, of the ML storage volume to attach to the notebook
     * instance. </p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p> The size, in GB, of the ML storage volume to attach to the notebook
     * instance. </p>
     */
    inline AwsSageMakerNotebookInstanceDetails& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::String m_directInternetAccess;
    bool m_directInternetAccessHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails m_instanceMetadataServiceConfiguration;
    bool m_instanceMetadataServiceConfigurationHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_notebookInstanceArn;
    bool m_notebookInstanceArnHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    Aws::String m_notebookInstanceStatus;
    bool m_notebookInstanceStatusHasBeenSet = false;

    Aws::String m_platformIdentifier;
    bool m_platformIdentifierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_rootAccess;
    bool m_rootAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
