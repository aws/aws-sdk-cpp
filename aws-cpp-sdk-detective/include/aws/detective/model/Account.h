/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>An AWS account that is the master of or a member of a behavior
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/Account">AWS
   * API Reference</a></p>
   */
  class AWS_DETECTIVE_API Account
  {
  public:
    Account();
    Account(Aws::Utils::Json::JsonView jsonValue);
    Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline Account& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline Account& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account identifier of the AWS account.</p>
     */
    inline Account& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline Account& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline Account& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The AWS account root user email address for the AWS account.</p>
     */
    inline Account& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
