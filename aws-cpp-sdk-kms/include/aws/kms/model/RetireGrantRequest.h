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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API RetireGrantRequest : public KMSRequest
  {
  public:
    RetireGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetireGrant"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline const Aws::String& GetGrantToken() const{ return m_grantToken; }

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline bool GrantTokenHasBeenSet() const { return m_grantTokenHasBeenSet; }

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline void SetGrantToken(const Aws::String& value) { m_grantTokenHasBeenSet = true; m_grantToken = value; }

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline void SetGrantToken(Aws::String&& value) { m_grantTokenHasBeenSet = true; m_grantToken = std::move(value); }

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline void SetGrantToken(const char* value) { m_grantTokenHasBeenSet = true; m_grantToken.assign(value); }

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline RetireGrantRequest& WithGrantToken(const Aws::String& value) { SetGrantToken(value); return *this;}

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline RetireGrantRequest& WithGrantToken(Aws::String&& value) { SetGrantToken(std::move(value)); return *this;}

    /**
     * <p>Token that identifies the grant to be retired.</p>
     */
    inline RetireGrantRequest& WithGrantToken(const char* value) { SetGrantToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline RetireGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline RetireGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CMK associated with the grant. </p>
     * <p>For example:
     * <code>arn:aws:kms:us-east-2:444455556666:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p>
     */
    inline RetireGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline void SetGrantId(const Aws::String& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline void SetGrantId(Aws::String&& value) { m_grantIdHasBeenSet = true; m_grantId = std::move(value); }

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline void SetGrantId(const char* value) { m_grantIdHasBeenSet = true; m_grantId.assign(value); }

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline RetireGrantRequest& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline RetireGrantRequest& WithGrantId(Aws::String&& value) { SetGrantId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the grant to retire. The grant ID is returned in the
     * response to a <code>CreateGrant</code> operation.</p> <ul> <li> <p>Grant ID
     * Example - 0123456789012345678901234567890123456789012345678901234567890123</p>
     * </li> </ul>
     */
    inline RetireGrantRequest& WithGrantId(const char* value) { SetGrantId(value); return *this;}

  private:

    Aws::String m_grantToken;
    bool m_grantTokenHasBeenSet;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
