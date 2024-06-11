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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Short term API credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/Credentials">AWS
   * API Reference</a></p>
   */
  class Credentials
  {
  public:
    AWS_FINSPACEDATA_API Credentials();
    AWS_FINSPACEDATA_API Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access key identifier.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }
    inline Credentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline Credentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline Credentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access key.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }
    inline Credentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}
    inline Credentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}
    inline Credentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session token.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }
    inline Credentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}
    inline Credentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}
    inline Credentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
