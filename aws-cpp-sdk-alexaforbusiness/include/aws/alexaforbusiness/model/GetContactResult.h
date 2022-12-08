/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/Contact.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class GetContactResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetContactResult();
    AWS_ALEXAFORBUSINESS_API GetContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the requested contact.</p>
     */
    inline const Contact& GetContact() const{ return m_contact; }

    /**
     * <p>The details of the requested contact.</p>
     */
    inline void SetContact(const Contact& value) { m_contact = value; }

    /**
     * <p>The details of the requested contact.</p>
     */
    inline void SetContact(Contact&& value) { m_contact = std::move(value); }

    /**
     * <p>The details of the requested contact.</p>
     */
    inline GetContactResult& WithContact(const Contact& value) { SetContact(value); return *this;}

    /**
     * <p>The details of the requested contact.</p>
     */
    inline GetContactResult& WithContact(Contact&& value) { SetContact(std::move(value)); return *this;}

  private:

    Contact m_contact;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
