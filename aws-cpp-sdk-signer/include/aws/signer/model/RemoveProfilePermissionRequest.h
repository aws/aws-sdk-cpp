/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class RemoveProfilePermissionRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API RemoveProfilePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveProfilePermission"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline RemoveProfilePermissionRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline RemoveProfilePermissionRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>A human-readable name for the signing profile with permissions to be
     * removed.</p>
     */
    inline RemoveProfilePermissionRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline RemoveProfilePermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline RemoveProfilePermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the current revision of the signing profile
     * permissions.</p>
     */
    inline RemoveProfilePermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline RemoveProfilePermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline RemoveProfilePermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the cross-account permissions statement.</p>
     */
    inline RemoveProfilePermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
