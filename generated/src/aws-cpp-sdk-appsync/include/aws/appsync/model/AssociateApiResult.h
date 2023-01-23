/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiAssociation.h>
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
namespace AppSync
{
namespace Model
{
  class AssociateApiResult
  {
  public:
    AWS_APPSYNC_API AssociateApiResult();
    AWS_APPSYNC_API AssociateApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API AssociateApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline const ApiAssociation& GetApiAssociation() const{ return m_apiAssociation; }

    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline void SetApiAssociation(const ApiAssociation& value) { m_apiAssociation = value; }

    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline void SetApiAssociation(ApiAssociation&& value) { m_apiAssociation = std::move(value); }

    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline AssociateApiResult& WithApiAssociation(const ApiAssociation& value) { SetApiAssociation(value); return *this;}

    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline AssociateApiResult& WithApiAssociation(ApiAssociation&& value) { SetApiAssociation(std::move(value)); return *this;}

  private:

    ApiAssociation m_apiAssociation;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
