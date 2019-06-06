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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Master.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API GetMasterAccountResult
  {
  public:
    GetMasterAccountResult();
    GetMasterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMasterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Master account details.</p>
     */
    inline const Master& GetMaster() const{ return m_master; }

    /**
     * <p>Master account details.</p>
     */
    inline void SetMaster(const Master& value) { m_master = value; }

    /**
     * <p>Master account details.</p>
     */
    inline void SetMaster(Master&& value) { m_master = std::move(value); }

    /**
     * <p>Master account details.</p>
     */
    inline GetMasterAccountResult& WithMaster(const Master& value) { SetMaster(value); return *this;}

    /**
     * <p>Master account details.</p>
     */
    inline GetMasterAccountResult& WithMaster(Master&& value) { SetMaster(std::move(value)); return *this;}

  private:

    Master m_master;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
