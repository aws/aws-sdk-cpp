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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItem.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetOpsItemResult
  {
  public:
    GetOpsItemResult();
    GetOpsItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOpsItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The OpsItem.</p>
     */
    inline const OpsItem& GetOpsItem() const{ return m_opsItem; }

    /**
     * <p>The OpsItem.</p>
     */
    inline void SetOpsItem(const OpsItem& value) { m_opsItem = value; }

    /**
     * <p>The OpsItem.</p>
     */
    inline void SetOpsItem(OpsItem&& value) { m_opsItem = std::move(value); }

    /**
     * <p>The OpsItem.</p>
     */
    inline GetOpsItemResult& WithOpsItem(const OpsItem& value) { SetOpsItem(value); return *this;}

    /**
     * <p>The OpsItem.</p>
     */
    inline GetOpsItemResult& WithOpsItem(OpsItem&& value) { SetOpsItem(std::move(value)); return *this;}

  private:

    OpsItem m_opsItem;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
