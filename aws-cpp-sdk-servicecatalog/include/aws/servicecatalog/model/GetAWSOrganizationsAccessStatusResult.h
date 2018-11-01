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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/AccessStatus.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult
  {
  public:
    GetAWSOrganizationsAccessStatusResult();
    GetAWSOrganizationsAccessStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAWSOrganizationsAccessStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline const AccessStatus& GetAccessStatus() const{ return m_accessStatus; }

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline void SetAccessStatus(const AccessStatus& value) { m_accessStatus = value; }

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline void SetAccessStatus(AccessStatus&& value) { m_accessStatus = std::move(value); }

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline GetAWSOrganizationsAccessStatusResult& WithAccessStatus(const AccessStatus& value) { SetAccessStatus(value); return *this;}

    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline GetAWSOrganizationsAccessStatusResult& WithAccessStatus(AccessStatus&& value) { SetAccessStatus(std::move(value)); return *this;}

  private:

    AccessStatus m_accessStatus;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
