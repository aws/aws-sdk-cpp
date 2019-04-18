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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/CreateAccountStatus.h>
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
namespace Organizations
{
namespace Model
{
  class AWS_ORGANIZATIONS_API CreateGovCloudAccountResult
  {
  public:
    CreateGovCloudAccountResult();
    CreateGovCloudAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGovCloudAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CreateAccountStatus& GetCreateAccountStatus() const{ return m_createAccountStatus; }

    
    inline void SetCreateAccountStatus(const CreateAccountStatus& value) { m_createAccountStatus = value; }

    
    inline void SetCreateAccountStatus(CreateAccountStatus&& value) { m_createAccountStatus = std::move(value); }

    
    inline CreateGovCloudAccountResult& WithCreateAccountStatus(const CreateAccountStatus& value) { SetCreateAccountStatus(value); return *this;}

    
    inline CreateGovCloudAccountResult& WithCreateAccountStatus(CreateAccountStatus&& value) { SetCreateAccountStatus(std::move(value)); return *this;}

  private:

    CreateAccountStatus m_createAccountStatus;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
