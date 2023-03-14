/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/RoleAliasDescription.h>
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
namespace IoT
{
namespace Model
{
  class DescribeRoleAliasResult
  {
  public:
    AWS_IOT_API DescribeRoleAliasResult();
    AWS_IOT_API DescribeRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The role alias description.</p>
     */
    inline const RoleAliasDescription& GetRoleAliasDescription() const{ return m_roleAliasDescription; }

    /**
     * <p>The role alias description.</p>
     */
    inline void SetRoleAliasDescription(const RoleAliasDescription& value) { m_roleAliasDescription = value; }

    /**
     * <p>The role alias description.</p>
     */
    inline void SetRoleAliasDescription(RoleAliasDescription&& value) { m_roleAliasDescription = std::move(value); }

    /**
     * <p>The role alias description.</p>
     */
    inline DescribeRoleAliasResult& WithRoleAliasDescription(const RoleAliasDescription& value) { SetRoleAliasDescription(value); return *this;}

    /**
     * <p>The role alias description.</p>
     */
    inline DescribeRoleAliasResult& WithRoleAliasDescription(RoleAliasDescription&& value) { SetRoleAliasDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRoleAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRoleAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRoleAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RoleAliasDescription m_roleAliasDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
