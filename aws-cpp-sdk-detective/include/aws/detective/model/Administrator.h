/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Information about the Detective administrator account for an
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/Administrator">AWS
   * API Reference</a></p>
   */
  class Administrator
  {
  public:
    AWS_DETECTIVE_API Administrator();
    AWS_DETECTIVE_API Administrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Administrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline Administrator& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline Administrator& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the Detective administrator
     * account for the organization.</p>
     */
    inline Administrator& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline Administrator& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline Administrator& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline Administrator& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetDelegationTime() const{ return m_delegationTime; }

    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline bool DelegationTimeHasBeenSet() const { return m_delegationTimeHasBeenSet; }

    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetDelegationTime(const Aws::Utils::DateTime& value) { m_delegationTimeHasBeenSet = true; m_delegationTime = value; }

    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetDelegationTime(Aws::Utils::DateTime&& value) { m_delegationTimeHasBeenSet = true; m_delegationTime = std::move(value); }

    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline Administrator& WithDelegationTime(const Aws::Utils::DateTime& value) { SetDelegationTime(value); return *this;}

    /**
     * <p>The date and time when the Detective administrator account was enabled. The
     * value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline Administrator& WithDelegationTime(Aws::Utils::DateTime&& value) { SetDelegationTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::Utils::DateTime m_delegationTime;
    bool m_delegationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
