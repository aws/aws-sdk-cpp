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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Invitation.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API GetMasterAccountResult
  {
  public:
    GetMasterAccountResult();
    GetMasterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMasterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline const Invitation& GetMaster() const{ return m_master; }

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline void SetMaster(const Invitation& value) { m_master = value; }

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline void SetMaster(Invitation&& value) { m_master = std::move(value); }

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline GetMasterAccountResult& WithMaster(const Invitation& value) { SetMaster(value); return *this;}

    /**
     * <p>A list of details about the Security Hub master account for the current
     * member account. </p>
     */
    inline GetMasterAccountResult& WithMaster(Invitation&& value) { SetMaster(std::move(value)); return *this;}

  private:

    Invitation m_master;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
