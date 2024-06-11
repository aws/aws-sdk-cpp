﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class AssociateRoleToGroupResult
  {
  public:
    AWS_GREENGRASS_API AssociateRoleToGroupResult();
    AWS_GREENGRASS_API AssociateRoleToGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API AssociateRoleToGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The time, in milliseconds since the epoch, when the role ARN was associated with
     * the group.
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }
    inline AssociateRoleToGroupResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}
    inline AssociateRoleToGroupResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}
    inline AssociateRoleToGroupResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateRoleToGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateRoleToGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateRoleToGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
