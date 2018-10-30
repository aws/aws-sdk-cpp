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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/User.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API ResetPersonalPINResult
  {
  public:
    ResetPersonalPINResult();
    ResetPersonalPINResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResetPersonalPINResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user details and new personal meeting PIN.</p>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>The user details and new personal meeting PIN.</p>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>The user details and new personal meeting PIN.</p>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>The user details and new personal meeting PIN.</p>
     */
    inline ResetPersonalPINResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>The user details and new personal meeting PIN.</p>
     */
    inline ResetPersonalPINResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}

  private:

    User m_user;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
