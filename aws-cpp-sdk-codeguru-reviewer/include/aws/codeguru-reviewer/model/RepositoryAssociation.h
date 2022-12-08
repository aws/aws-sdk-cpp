/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-reviewer/model/KMSKeyDetails.h>
#include <aws/codeguru-reviewer/model/S3RepositoryDetails.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about a repository association. The <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_DescribeRepositoryAssociation.html">DescribeRepositoryAssociation</a>
   * operation returns a <code>RepositoryAssociation</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RepositoryAssociation">AWS
   * API Reference</a></p>
   */
  class RepositoryAssociation
  {
  public:
    AWS_CODEGURUREVIEWER_API RepositoryAssociation();
    AWS_CODEGURUREVIEWER_API RepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the repository association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the repository association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the repository association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the repository association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the repository association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline RepositoryAssociation& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline RepositoryAssociation& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline RepositoryAssociation& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline RepositoryAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline RepositoryAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline RepositoryAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline RepositoryAssociation& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline RepositoryAssociation& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline RepositoryAssociation& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The provider type of the repository association.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline RepositoryAssociation& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline RepositoryAssociation& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The state of the repository association.</p> <p>The valid repository
     * association states are:</p> <ul> <li> <p> <b>Associated</b>: The repository
     * association is complete.</p> </li> <li> <p> <b>Associating</b>: CodeGuru
     * Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications. This is
     * required for pull requests to trigger a CodeGuru Reviewer review.</p> 
     * <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline const RepositoryAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the repository association.</p> <p>The valid repository
     * association states are:</p> <ul> <li> <p> <b>Associated</b>: The repository
     * association is complete.</p> </li> <li> <p> <b>Associating</b>: CodeGuru
     * Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications. This is
     * required for pull requests to trigger a CodeGuru Reviewer review.</p> 
     * <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the repository association.</p> <p>The valid repository
     * association states are:</p> <ul> <li> <p> <b>Associated</b>: The repository
     * association is complete.</p> </li> <li> <p> <b>Associating</b>: CodeGuru
     * Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications. This is
     * required for pull requests to trigger a CodeGuru Reviewer review.</p> 
     * <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline void SetState(const RepositoryAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the repository association.</p> <p>The valid repository
     * association states are:</p> <ul> <li> <p> <b>Associated</b>: The repository
     * association is complete.</p> </li> <li> <p> <b>Associating</b>: CodeGuru
     * Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications. This is
     * required for pull requests to trigger a CodeGuru Reviewer review.</p> 
     * <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline void SetState(RepositoryAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the repository association.</p> <p>The valid repository
     * association states are:</p> <ul> <li> <p> <b>Associated</b>: The repository
     * association is complete.</p> </li> <li> <p> <b>Associating</b>: CodeGuru
     * Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications. This is
     * required for pull requests to trigger a CodeGuru Reviewer review.</p> 
     * <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline RepositoryAssociation& WithState(const RepositoryAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the repository association.</p> <p>The valid repository
     * association states are:</p> <ul> <li> <p> <b>Associated</b>: The repository
     * association is complete.</p> </li> <li> <p> <b>Associating</b>: CodeGuru
     * Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications. This is
     * required for pull requests to trigger a CodeGuru Reviewer review.</p> 
     * <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline RepositoryAssociation& WithState(RepositoryAssociationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline RepositoryAssociation& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline RepositoryAssociation& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline RepositoryAssociation& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const{ return m_lastUpdatedTimeStamp; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline RepositoryAssociation& WithLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimeStamp(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline RepositoryAssociation& WithLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const{ return m_createdTimeStamp; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline void SetCreatedTimeStamp(const Aws::Utils::DateTime& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline void SetCreatedTimeStamp(Aws::Utils::DateTime&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline RepositoryAssociation& WithCreatedTimeStamp(const Aws::Utils::DateTime& value) { SetCreatedTimeStamp(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline RepositoryAssociation& WithCreatedTimeStamp(Aws::Utils::DateTime&& value) { SetCreatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline const KMSKeyDetails& GetKMSKeyDetails() const{ return m_kMSKeyDetails; }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline bool KMSKeyDetailsHasBeenSet() const { return m_kMSKeyDetailsHasBeenSet; }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline void SetKMSKeyDetails(const KMSKeyDetails& value) { m_kMSKeyDetailsHasBeenSet = true; m_kMSKeyDetails = value; }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline void SetKMSKeyDetails(KMSKeyDetails&& value) { m_kMSKeyDetailsHasBeenSet = true; m_kMSKeyDetails = std::move(value); }

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline RepositoryAssociation& WithKMSKeyDetails(const KMSKeyDetails& value) { SetKMSKeyDetails(value); return *this;}

    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline RepositoryAssociation& WithKMSKeyDetails(KMSKeyDetails&& value) { SetKMSKeyDetails(std::move(value)); return *this;}


    
    inline const S3RepositoryDetails& GetS3RepositoryDetails() const{ return m_s3RepositoryDetails; }

    
    inline bool S3RepositoryDetailsHasBeenSet() const { return m_s3RepositoryDetailsHasBeenSet; }

    
    inline void SetS3RepositoryDetails(const S3RepositoryDetails& value) { m_s3RepositoryDetailsHasBeenSet = true; m_s3RepositoryDetails = value; }

    
    inline void SetS3RepositoryDetails(S3RepositoryDetails&& value) { m_s3RepositoryDetailsHasBeenSet = true; m_s3RepositoryDetails = std::move(value); }

    
    inline RepositoryAssociation& WithS3RepositoryDetails(const S3RepositoryDetails& value) { SetS3RepositoryDetails(value); return *this;}

    
    inline RepositoryAssociation& WithS3RepositoryDetails(S3RepositoryDetails&& value) { SetS3RepositoryDetails(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    RepositoryAssociationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp;
    bool m_lastUpdatedTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp;
    bool m_createdTimeStampHasBeenSet = false;

    KMSKeyDetails m_kMSKeyDetails;
    bool m_kMSKeyDetailsHasBeenSet = false;

    S3RepositoryDetails m_s3RepositoryDetails;
    bool m_s3RepositoryDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
