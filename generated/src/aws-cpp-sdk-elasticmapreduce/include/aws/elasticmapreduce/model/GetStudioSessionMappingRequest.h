/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/IdentityType.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class GetStudioSessionMappingRequest : public EMRRequest
  {
  public:
    AWS_EMR_API GetStudioSessionMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStudioSessionMapping"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const { return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    template<typename StudioIdT = Aws::String>
    void SetStudioId(StudioIdT&& value) { m_studioIdHasBeenSet = true; m_studioId = std::forward<StudioIdT>(value); }
    template<typename StudioIdT = Aws::String>
    GetStudioSessionMappingRequest& WithStudioId(StudioIdT&& value) { SetStudioId(std::forward<StudioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier (GUID) of the user or group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>IAM Identity Center Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    GetStudioSessionMappingRequest& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user or group to fetch. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>IAM Identity Center Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline const Aws::String& GetIdentityName() const { return m_identityName; }
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }
    template<typename IdentityNameT = Aws::String>
    void SetIdentityName(IdentityNameT&& value) { m_identityNameHasBeenSet = true; m_identityName = std::forward<IdentityNameT>(value); }
    template<typename IdentityNameT = Aws::String>
    GetStudioSessionMappingRequest& WithIdentityName(IdentityNameT&& value) { SetIdentityName(std::forward<IdentityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the identity to fetch is a user or a group.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline GetStudioSessionMappingRequest& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
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
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
