/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDomainResult
  {
  public:
    AWS_LIGHTSAIL_API GetDomainResult();
    AWS_LIGHTSAIL_API GetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
