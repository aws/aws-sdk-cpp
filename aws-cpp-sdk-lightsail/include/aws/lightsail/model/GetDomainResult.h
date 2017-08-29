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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Domain.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetDomainResult
  {
  public:
    GetDomainResult();
    GetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about your get domain
     * request.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>An array of key-value pairs containing information about your get domain
     * request.</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>An array of key-value pairs containing information about your get domain
     * request.</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about your get domain
     * request.</p>
     */
    inline GetDomainResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about your get domain
     * request.</p>
     */
    inline GetDomainResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    Domain m_domain;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
