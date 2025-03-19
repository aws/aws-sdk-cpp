/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the <code>DeleteIdentities</code> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentitiesInput">AWS
   * API Reference</a></p>
   */
  class DeleteIdentitiesRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API DeleteIdentitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIdentities"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityIdsToDelete() const { return m_identityIdsToDelete; }
    inline bool IdentityIdsToDeleteHasBeenSet() const { return m_identityIdsToDeleteHasBeenSet; }
    template<typename IdentityIdsToDeleteT = Aws::Vector<Aws::String>>
    void SetIdentityIdsToDelete(IdentityIdsToDeleteT&& value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete = std::forward<IdentityIdsToDeleteT>(value); }
    template<typename IdentityIdsToDeleteT = Aws::Vector<Aws::String>>
    DeleteIdentitiesRequest& WithIdentityIdsToDelete(IdentityIdsToDeleteT&& value) { SetIdentityIdsToDelete(std::forward<IdentityIdsToDeleteT>(value)); return *this;}
    template<typename IdentityIdsToDeleteT = Aws::String>
    DeleteIdentitiesRequest& AddIdentityIdsToDelete(IdentityIdsToDeleteT&& value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete.emplace_back(std::forward<IdentityIdsToDeleteT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_identityIdsToDelete;
    bool m_identityIdsToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
