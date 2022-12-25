/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information includes the Amazon Web Services account ID where the current
   * document is shared and the version shared with that account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AccountSharingInfo">AWS
   * API Reference</a></p>
   */
  class AccountSharingInfo
  {
  public:
    AWS_SSM_API AccountSharingInfo();
    AWS_SSM_API AccountSharingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AccountSharingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline AccountSharingInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline AccountSharingInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID where the current document is shared.</p>
     */
    inline AccountSharingInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline const Aws::String& GetSharedDocumentVersion() const{ return m_sharedDocumentVersion; }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline bool SharedDocumentVersionHasBeenSet() const { return m_sharedDocumentVersionHasBeenSet; }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline void SetSharedDocumentVersion(const Aws::String& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = value; }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline void SetSharedDocumentVersion(Aws::String&& value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion = std::move(value); }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline void SetSharedDocumentVersion(const char* value) { m_sharedDocumentVersionHasBeenSet = true; m_sharedDocumentVersion.assign(value); }

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline AccountSharingInfo& WithSharedDocumentVersion(const Aws::String& value) { SetSharedDocumentVersion(value); return *this;}

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline AccountSharingInfo& WithSharedDocumentVersion(Aws::String&& value) { SetSharedDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the current document shared with the account.</p>
     */
    inline AccountSharingInfo& WithSharedDocumentVersion(const char* value) { SetSharedDocumentVersion(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_sharedDocumentVersion;
    bool m_sharedDocumentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
