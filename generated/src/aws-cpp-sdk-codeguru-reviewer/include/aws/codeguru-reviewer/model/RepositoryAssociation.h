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
    AWS_CODEGURUREVIEWER_API RepositoryAssociation() = default;
    AWS_CODEGURUREVIEWER_API RepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the repository association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    RepositoryAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline const Aws::String& GetAssociationArn() const { return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    template<typename AssociationArnT = Aws::String>
    void SetAssociationArn(AssociationArnT&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::forward<AssociationArnT>(value); }
    template<typename AssociationArnT = Aws::String>
    RepositoryAssociation& WithAssociationArn(AssociationArnT&& value) { SetAssociationArn(std::forward<AssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services CodeStar Connections
     * connection. Its format is
     * <code>arn:aws:codestar-connections:region-id:aws-account_id:connection/connection-id</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/API_Connection.html">Connection</a>
     * in the <i>Amazon Web Services CodeStar Connections API Reference</i>.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    RepositoryAssociation& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RepositoryAssociation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    RepositoryAssociation& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type of the repository association.</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline RepositoryAssociation& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
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
    inline RepositoryAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RepositoryAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RepositoryAssociation& WithState(RepositoryAssociationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    RepositoryAssociation& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const { return m_lastUpdatedTimeStamp; }
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }
    template<typename LastUpdatedTimeStampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::forward<LastUpdatedTimeStampT>(value); }
    template<typename LastUpdatedTimeStampT = Aws::Utils::DateTime>
    RepositoryAssociation& WithLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { SetLastUpdatedTimeStamp(std::forward<LastUpdatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    void SetCreatedTimeStamp(CreatedTimeStampT&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::forward<CreatedTimeStampT>(value); }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    RepositoryAssociation& WithCreatedTimeStamp(CreatedTimeStampT&& value) { SetCreatedTimeStamp(std::forward<CreatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>KMSKeyDetails</code> object that contains:</p> <ul> <li> <p>The
     * encryption option for this repository association. It is either owned by Amazon
     * Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID
     * of the Amazon Web Services KMS key that is associated with this repository
     * association.</p> </li> </ul>
     */
    inline const KMSKeyDetails& GetKMSKeyDetails() const { return m_kMSKeyDetails; }
    inline bool KMSKeyDetailsHasBeenSet() const { return m_kMSKeyDetailsHasBeenSet; }
    template<typename KMSKeyDetailsT = KMSKeyDetails>
    void SetKMSKeyDetails(KMSKeyDetailsT&& value) { m_kMSKeyDetailsHasBeenSet = true; m_kMSKeyDetails = std::forward<KMSKeyDetailsT>(value); }
    template<typename KMSKeyDetailsT = KMSKeyDetails>
    RepositoryAssociation& WithKMSKeyDetails(KMSKeyDetailsT&& value) { SetKMSKeyDetails(std::forward<KMSKeyDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3RepositoryDetails& GetS3RepositoryDetails() const { return m_s3RepositoryDetails; }
    inline bool S3RepositoryDetailsHasBeenSet() const { return m_s3RepositoryDetailsHasBeenSet; }
    template<typename S3RepositoryDetailsT = S3RepositoryDetails>
    void SetS3RepositoryDetails(S3RepositoryDetailsT&& value) { m_s3RepositoryDetailsHasBeenSet = true; m_s3RepositoryDetails = std::forward<S3RepositoryDetailsT>(value); }
    template<typename S3RepositoryDetailsT = S3RepositoryDetails>
    RepositoryAssociation& WithS3RepositoryDetails(S3RepositoryDetailsT&& value) { SetS3RepositoryDetails(std::forward<S3RepositoryDetailsT>(value)); return *this;}
    ///@}
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

    ProviderType m_providerType{ProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    RepositoryAssociationState m_state{RepositoryAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp{};
    bool m_lastUpdatedTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp{};
    bool m_createdTimeStampHasBeenSet = false;

    KMSKeyDetails m_kMSKeyDetails;
    bool m_kMSKeyDetailsHasBeenSet = false;

    S3RepositoryDetails m_s3RepositoryDetails;
    bool m_s3RepositoryDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
