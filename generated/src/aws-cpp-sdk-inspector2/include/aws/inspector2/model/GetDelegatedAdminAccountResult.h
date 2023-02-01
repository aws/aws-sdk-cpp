/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/DelegatedAdmin.h>
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
  class GetDelegatedAdminAccountResult
  {
  public:
    AWS_INSPECTOR2_API GetDelegatedAdminAccountResult();
    AWS_INSPECTOR2_API GetDelegatedAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetDelegatedAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline const DelegatedAdmin& GetDelegatedAdmin() const{ return m_delegatedAdmin; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdmin(const DelegatedAdmin& value) { m_delegatedAdmin = value; }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline void SetDelegatedAdmin(DelegatedAdmin&& value) { m_delegatedAdmin = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline GetDelegatedAdminAccountResult& WithDelegatedAdmin(const DelegatedAdmin& value) { SetDelegatedAdmin(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline GetDelegatedAdminAccountResult& WithDelegatedAdmin(DelegatedAdmin&& value) { SetDelegatedAdmin(std::move(value)); return *this;}

  private:

    DelegatedAdmin m_delegatedAdmin;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
