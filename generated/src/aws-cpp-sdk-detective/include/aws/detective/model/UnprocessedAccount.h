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
   * <p>A member account that was included in a request but for which the request
   * could not be processed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/UnprocessedAccount">AWS
   * API Reference</a></p>
   */
  class UnprocessedAccount
  {
  public:
    AWS_DETECTIVE_API UnprocessedAccount();
    AWS_DETECTIVE_API UnprocessedAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API UnprocessedAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline UnprocessedAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline UnprocessedAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the member account that was not
     * processed.</p>
     */
    inline UnprocessedAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline UnprocessedAccount& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline UnprocessedAccount& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the member account request could not be processed.</p>
     */
    inline UnprocessedAccount& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
