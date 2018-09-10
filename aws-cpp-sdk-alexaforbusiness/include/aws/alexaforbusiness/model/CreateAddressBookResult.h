﻿/*
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API CreateAddressBookResult
  {
  public:
    CreateAddressBookResult();
    CreateAddressBookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAddressBookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline const Aws::String& GetAddressBookArn() const{ return m_addressBookArn; }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline void SetAddressBookArn(const Aws::String& value) { m_addressBookArn = value; }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline void SetAddressBookArn(Aws::String&& value) { m_addressBookArn = std::move(value); }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline void SetAddressBookArn(const char* value) { m_addressBookArn.assign(value); }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline CreateAddressBookResult& WithAddressBookArn(const Aws::String& value) { SetAddressBookArn(value); return *this;}

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline CreateAddressBookResult& WithAddressBookArn(Aws::String&& value) { SetAddressBookArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline CreateAddressBookResult& WithAddressBookArn(const char* value) { SetAddressBookArn(value); return *this;}

  private:

    Aws::String m_addressBookArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
