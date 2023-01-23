/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an Amazon Web Services account and entity that
   * performed an action on an affected resource. The action was performed using the
   * credentials for an Amazon Web Services account other than your own
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AwsAccount">AWS
   * API Reference</a></p>
   */
  class AwsAccount
  {
  public:
    AWS_MACIE2_API AwsAccount();
    AWS_MACIE2_API AwsAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AwsAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline AwsAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline AwsAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account.</p>
     */
    inline AwsAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline AwsAccount& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline AwsAccount& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the entity that performed the action.</p>
     */
    inline AwsAccount& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
