/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/AlternateContact.h>
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
namespace Account
{
namespace Model
{
  class GetAlternateContactResult
  {
  public:
    AWS_ACCOUNT_API GetAlternateContactResult();
    AWS_ACCOUNT_API GetAlternateContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetAlternateContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the details for the specified alternate
     * contact.</p>
     */
    inline const AlternateContact& GetAlternateContact() const{ return m_alternateContact; }

    /**
     * <p>A structure that contains the details for the specified alternate
     * contact.</p>
     */
    inline void SetAlternateContact(const AlternateContact& value) { m_alternateContact = value; }

    /**
     * <p>A structure that contains the details for the specified alternate
     * contact.</p>
     */
    inline void SetAlternateContact(AlternateContact&& value) { m_alternateContact = std::move(value); }

    /**
     * <p>A structure that contains the details for the specified alternate
     * contact.</p>
     */
    inline GetAlternateContactResult& WithAlternateContact(const AlternateContact& value) { SetAlternateContact(value); return *this;}

    /**
     * <p>A structure that contains the details for the specified alternate
     * contact.</p>
     */
    inline GetAlternateContactResult& WithAlternateContact(AlternateContact&& value) { SetAlternateContact(std::move(value)); return *this;}

  private:

    AlternateContact m_alternateContact;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
