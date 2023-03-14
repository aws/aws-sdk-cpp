/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
  class CreateRoleAliasResult
  {
  public:
    AWS_IOT_API CreateRoleAliasResult();
    AWS_IOT_API CreateRoleAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateRoleAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(const Aws::String& value) { m_roleAlias = value; }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(Aws::String&& value) { m_roleAlias = std::move(value); }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(const char* value) { m_roleAlias.assign(value); }

    /**
     * <p>The role alias.</p>
     */
    inline CreateRoleAliasResult& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}

    /**
     * <p>The role alias.</p>
     */
    inline CreateRoleAliasResult& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}

    /**
     * <p>The role alias.</p>
     */
    inline CreateRoleAliasResult& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}


    /**
     * <p>The role alias ARN.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const{ return m_roleAliasArn; }

    /**
     * <p>The role alias ARN.</p>
     */
    inline void SetRoleAliasArn(const Aws::String& value) { m_roleAliasArn = value; }

    /**
     * <p>The role alias ARN.</p>
     */
    inline void SetRoleAliasArn(Aws::String&& value) { m_roleAliasArn = std::move(value); }

    /**
     * <p>The role alias ARN.</p>
     */
    inline void SetRoleAliasArn(const char* value) { m_roleAliasArn.assign(value); }

    /**
     * <p>The role alias ARN.</p>
     */
    inline CreateRoleAliasResult& WithRoleAliasArn(const Aws::String& value) { SetRoleAliasArn(value); return *this;}

    /**
     * <p>The role alias ARN.</p>
     */
    inline CreateRoleAliasResult& WithRoleAliasArn(Aws::String&& value) { SetRoleAliasArn(std::move(value)); return *this;}

    /**
     * <p>The role alias ARN.</p>
     */
    inline CreateRoleAliasResult& WithRoleAliasArn(const char* value) { SetRoleAliasArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRoleAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRoleAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRoleAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_roleAlias;

    Aws::String m_roleAliasArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
