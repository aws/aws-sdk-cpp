/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/vitalservices/model/ClientUser.h>

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
namespace VitalServices
{
namespace Model
{
  class AWS_VITALSERVICES_API getLoggedInUserResult
  {
  public:
    getLoggedInUserResult();
    getLoggedInUserResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getLoggedInUserResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline bool GetUserExists() const{ return m_userExists; }

    
    inline void SetUserExists(bool value) { m_userExists = value; }

    
    inline getLoggedInUserResult& WithUserExists(bool value) { SetUserExists(value); return *this;}

    
    inline const ClientUser& GetUser() const{ return m_user; }

    
    inline void SetUser(const ClientUser& value) { m_user = value; }

    
    inline void SetUser(ClientUser&& value) { m_user = value; }

    
    inline getLoggedInUserResult& WithUser(const ClientUser& value) { SetUser(value); return *this;}

    
    inline getLoggedInUserResult& WithUser(ClientUser&& value) { SetUser(value); return *this;}

  private:
    bool m_userExists;
    ClientUser m_user;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
