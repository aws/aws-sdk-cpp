/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{
  class AssociateMemberResult
  {
  public:
    AWS_INSPECTOR2_API AssociateMemberResult();
    AWS_INSPECTOR2_API AssociateMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API AssociateMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline AssociateMemberResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline AssociateMemberResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the successfully associated member
     * account.</p>
     */
    inline AssociateMemberResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
