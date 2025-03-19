/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/IdentityType.h>
#include <aws/core/utils/DateTime.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Details for an Amazon EMR Studio session mapping. The details do not include
   * the time the session mapping was last modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SessionMappingSummary">AWS
   * API Reference</a></p>
   */
  class SessionMappingSummary
  {
  public:
    AWS_EMR_API SessionMappingSummary() = default;
    AWS_EMR_API SessionMappingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SessionMappingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const { return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    template<typename StudioIdT = Aws::String>
    void SetStudioId(StudioIdT&& value) { m_studioIdHasBeenSet = true; m_studioId = std::forward<StudioIdT>(value); }
    template<typename StudioIdT = Aws::String>
    SessionMappingSummary& WithStudioId(StudioIdT&& value) { SetStudioId(std::forward<StudioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier (GUID) of the user or group from the IAM
     * Identity Center Identity Store.</p>
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    SessionMappingSummary& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>IAM Identity Center Identity Store API Reference</i>.</p>
     */
    inline const Aws::String& GetIdentityName() const { return m_identityName; }
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }
    template<typename IdentityNameT = Aws::String>
    void SetIdentityName(IdentityNameT&& value) { m_identityNameHasBeenSet = true; m_identityName = std::forward<IdentityNameT>(value); }
    template<typename IdentityNameT = Aws::String>
    SessionMappingSummary& WithIdentityName(IdentityNameT&& value) { SetIdentityName(std::forward<IdentityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline SessionMappingSummary& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline const Aws::String& GetSessionPolicyArn() const { return m_sessionPolicyArn; }
    inline bool SessionPolicyArnHasBeenSet() const { return m_sessionPolicyArnHasBeenSet; }
    template<typename SessionPolicyArnT = Aws::String>
    void SetSessionPolicyArn(SessionPolicyArnT&& value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn = std::forward<SessionPolicyArnT>(value); }
    template<typename SessionPolicyArnT = Aws::String>
    SessionMappingSummary& WithSessionPolicyArn(SessionPolicyArnT&& value) { SetSessionPolicyArn(std::forward<SessionPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the session mapping was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    SessionMappingSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_identityName;
    bool m_identityNameHasBeenSet = false;

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_sessionPolicyArn;
    bool m_sessionPolicyArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
