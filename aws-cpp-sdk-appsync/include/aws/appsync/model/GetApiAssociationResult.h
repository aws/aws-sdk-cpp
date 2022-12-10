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
  class GetApiAssociationResult
  {
  public:
    AWS_APPSYNC_API GetApiAssociationResult();
    AWS_APPSYNC_API GetApiAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetApiAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetApiAssociationResult& WithApiAssociation(const ApiAssociation& value) { SetApiAssociation(value); return *this;}

    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline GetApiAssociationResult& WithApiAssociation(ApiAssociation&& value) { SetApiAssociation(std::move(value)); return *this;}

  private:

    ApiAssociation m_apiAssociation;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
