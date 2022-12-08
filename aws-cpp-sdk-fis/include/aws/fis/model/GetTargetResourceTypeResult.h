/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/TargetResourceType.h>
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
namespace FIS
{
namespace Model
{
  class GetTargetResourceTypeResult
  {
  public:
    AWS_FIS_API GetTargetResourceTypeResult();
    AWS_FIS_API GetTargetResourceTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetTargetResourceTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the resource type.</p>
     */
    inline const TargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }

    /**
     * <p>Information about the resource type.</p>
     */
    inline void SetTargetResourceType(const TargetResourceType& value) { m_targetResourceType = value; }

    /**
     * <p>Information about the resource type.</p>
     */
    inline void SetTargetResourceType(TargetResourceType&& value) { m_targetResourceType = std::move(value); }

    /**
     * <p>Information about the resource type.</p>
     */
    inline GetTargetResourceTypeResult& WithTargetResourceType(const TargetResourceType& value) { SetTargetResourceType(value); return *this;}

    /**
     * <p>Information about the resource type.</p>
     */
    inline GetTargetResourceTypeResult& WithTargetResourceType(TargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}

  private:

    TargetResourceType m_targetResourceType;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
