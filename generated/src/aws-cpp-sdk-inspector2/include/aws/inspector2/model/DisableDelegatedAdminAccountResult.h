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
  class DisableDelegatedAdminAccountResult
  {
  public:
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountResult();
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const{ return m_delegatedAdminAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdminAccountId(const Aws::String& value) { m_delegatedAdminAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdminAccountId(Aws::String&& value) { m_delegatedAdminAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdminAccountId(const char* value) { m_delegatedAdminAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline DisableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(const Aws::String& value) { SetDelegatedAdminAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline DisableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(Aws::String&& value) { SetDelegatedAdminAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline DisableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(const char* value) { SetDelegatedAdminAccountId(value); return *this;}

  private:

    Aws::String m_delegatedAdminAccountId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
