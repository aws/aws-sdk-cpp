/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
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
namespace Macie
{
namespace Model
{

  /**
   * <p>(Discontinued) Contains information about the Amazon Macie Classic member
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/MemberAccount">AWS
   * API Reference</a></p>
   */
  class MemberAccount
  {
  public:
    AWS_MACIE_API MemberAccount();
    AWS_MACIE_API MemberAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API MemberAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline MemberAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline MemberAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The Amazon Web Services account ID of the Amazon Macie Classic
     * member account.</p>
     */
    inline MemberAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
