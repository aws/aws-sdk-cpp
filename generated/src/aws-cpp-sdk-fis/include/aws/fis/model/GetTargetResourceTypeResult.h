/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/TargetResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTargetResourceTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTargetResourceTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTargetResourceTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TargetResourceType m_targetResourceType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
