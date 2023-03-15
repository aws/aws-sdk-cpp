﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Alias.h>
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
namespace GameLift
{
namespace Model
{
  class CreateAliasResult
  {
  public:
    AWS_GAMELIFT_API CreateAliasResult();
    AWS_GAMELIFT_API CreateAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created alias resource.</p>
     */
    inline const Alias& GetAlias() const{ return m_alias; }

    /**
     * <p>The newly created alias resource.</p>
     */
    inline void SetAlias(const Alias& value) { m_alias = value; }

    /**
     * <p>The newly created alias resource.</p>
     */
    inline void SetAlias(Alias&& value) { m_alias = std::move(value); }

    /**
     * <p>The newly created alias resource.</p>
     */
    inline CreateAliasResult& WithAlias(const Alias& value) { SetAlias(value); return *this;}

    /**
     * <p>The newly created alias resource.</p>
     */
    inline CreateAliasResult& WithAlias(Alias&& value) { SetAlias(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Alias m_alias;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
