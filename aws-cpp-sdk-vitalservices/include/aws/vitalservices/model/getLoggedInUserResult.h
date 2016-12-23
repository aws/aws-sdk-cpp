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
#include <aws/vitalservices/model/GetLoggedInUserResult_user.h>

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

    
    inline const GetLoggedInUserResult_user& GetUser() const{ return m_user; }

    
    inline void SetUser(const GetLoggedInUserResult_user& value) { m_user = value; }

    
    inline void SetUser(GetLoggedInUserResult_user&& value) { m_user = value; }

    
    inline getLoggedInUserResult& WithUser(const GetLoggedInUserResult_user& value) { SetUser(value); return *this;}

    
    inline getLoggedInUserResult& WithUser(GetLoggedInUserResult_user&& value) { SetUser(value); return *this;}

    
    inline bool GetUserExists() const{ return m_userExists; }

    
    inline void SetUserExists(bool value) { m_userExists = value; }

    
    inline getLoggedInUserResult& WithUserExists(bool value) { SetUserExists(value); return *this;}

  private:
    GetLoggedInUserResult_user m_user;
    bool m_userExists;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
