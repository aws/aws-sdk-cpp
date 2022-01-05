/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  class AWS_GLUE_API LakeFormationConfiguration
  {
  public:
    LakeFormationConfiguration();
    LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetUseLakeFormationCredentials() const{ return m_useLakeFormationCredentials; }

    
    inline bool UseLakeFormationCredentialsHasBeenSet() const { return m_useLakeFormationCredentialsHasBeenSet; }

    
    inline void SetUseLakeFormationCredentials(bool value) { m_useLakeFormationCredentialsHasBeenSet = true; m_useLakeFormationCredentials = value; }

    
    inline LakeFormationConfiguration& WithUseLakeFormationCredentials(bool value) { SetUseLakeFormationCredentials(value); return *this;}


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline LakeFormationConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline LakeFormationConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline LakeFormationConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    bool m_useLakeFormationCredentials;
    bool m_useLakeFormationCredentialsHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
