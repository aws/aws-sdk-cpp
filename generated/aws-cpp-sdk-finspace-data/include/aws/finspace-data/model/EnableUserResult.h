﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{
  class AWS_FINSPACEDATA_API EnableUserResult
  {
  public:
    EnableUserResult();
    EnableUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EnableUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline EnableUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline EnableUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the enabled user account.</p>
     */
    inline EnableUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
