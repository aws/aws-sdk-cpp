/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ALEXAFORBUSINESS_API GetContactResult
  {
  public:
    GetContactResult();
    GetContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
