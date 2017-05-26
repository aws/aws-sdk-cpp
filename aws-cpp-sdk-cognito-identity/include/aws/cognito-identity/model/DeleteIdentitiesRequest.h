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
  class AWS_COGNITOIDENTITY_API DeleteIdentitiesRequest : public CognitoIdentityRequest
  {
  public:
    DeleteIdentitiesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentityIdsToDelete() const{ return m_identityIdsToDelete; }

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline void SetIdentityIdsToDelete(const Aws::Vector<Aws::String>& value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete = value; }

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline void SetIdentityIdsToDelete(Aws::Vector<Aws::String>&& value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete = std::move(value); }

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline DeleteIdentitiesRequest& WithIdentityIdsToDelete(const Aws::Vector<Aws::String>& value) { SetIdentityIdsToDelete(value); return *this;}

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline DeleteIdentitiesRequest& WithIdentityIdsToDelete(Aws::Vector<Aws::String>&& value) { SetIdentityIdsToDelete(std::move(value)); return *this;}

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline DeleteIdentitiesRequest& AddIdentityIdsToDelete(const Aws::String& value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete.push_back(value); return *this; }

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline DeleteIdentitiesRequest& AddIdentityIdsToDelete(Aws::String&& value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of 1-60 identities that you want to delete.</p>
     */
    inline DeleteIdentitiesRequest& AddIdentityIdsToDelete(const char* value) { m_identityIdsToDeleteHasBeenSet = true; m_identityIdsToDelete.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_identityIdsToDelete;
    bool m_identityIdsToDeleteHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
