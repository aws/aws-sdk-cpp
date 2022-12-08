/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/Type.h>
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
  class UpdateTypeResult
  {
  public:
    AWS_APPSYNC_API UpdateTypeResult();
    AWS_APPSYNC_API UpdateTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated <code>Type</code> object.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The updated <code>Type</code> object.</p>
     */
    inline void SetType(const Type& value) { m_type = value; }

    /**
     * <p>The updated <code>Type</code> object.</p>
     */
    inline void SetType(Type&& value) { m_type = std::move(value); }

    /**
     * <p>The updated <code>Type</code> object.</p>
     */
    inline UpdateTypeResult& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The updated <code>Type</code> object.</p>
     */
    inline UpdateTypeResult& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Type m_type;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
