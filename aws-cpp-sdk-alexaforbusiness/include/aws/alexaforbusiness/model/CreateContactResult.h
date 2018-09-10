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
  class AWS_ALEXAFORBUSINESS_API CreateContactResult
  {
  public:
    CreateContactResult();
    CreateContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline CreateContactResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline CreateContactResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created address book.</p>
     */
    inline CreateContactResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}

  private:

    Aws::String m_contactArn;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
