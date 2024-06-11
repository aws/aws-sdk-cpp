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
  class GetAssociatedRoleResult
  {
  public:
    AWS_GREENGRASS_API GetAssociatedRoleResult();
    AWS_GREENGRASS_API GetAssociatedRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetAssociatedRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The time when the role was associated with the group.
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }
    inline GetAssociatedRoleResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}
    inline GetAssociatedRoleResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}
    inline GetAssociatedRoleResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the role that is associated with the group.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetAssociatedRoleResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetAssociatedRoleResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetAssociatedRoleResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAssociatedRoleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAssociatedRoleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAssociatedRoleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedAt;

    Aws::String m_roleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
