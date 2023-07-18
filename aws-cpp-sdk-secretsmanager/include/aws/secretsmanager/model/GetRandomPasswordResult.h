﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{
  class AWS_SECRETSMANAGER_API GetRandomPasswordResult
  {
  public:
    GetRandomPasswordResult();
    GetRandomPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRandomPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string with the password.</p>
     */
    inline const Aws::String& GetRandomPassword() const{ return m_randomPassword; }

    /**
     * <p>A string with the password.</p>
     */
    inline void SetRandomPassword(const Aws::String& value) { m_randomPassword = value; }

    /**
     * <p>A string with the password.</p>
     */
    inline void SetRandomPassword(Aws::String&& value) { m_randomPassword = std::move(value); }

    /**
     * <p>A string with the password.</p>
     */
    inline void SetRandomPassword(const char* value) { m_randomPassword.assign(value); }

    /**
     * <p>A string with the password.</p>
     */
    inline GetRandomPasswordResult& WithRandomPassword(const Aws::String& value) { SetRandomPassword(value); return *this;}

    /**
     * <p>A string with the password.</p>
     */
    inline GetRandomPasswordResult& WithRandomPassword(Aws::String&& value) { SetRandomPassword(std::move(value)); return *this;}

    /**
     * <p>A string with the password.</p>
     */
    inline GetRandomPasswordResult& WithRandomPassword(const char* value) { SetRandomPassword(value); return *this;}

  private:

    Aws::String m_randomPassword;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
