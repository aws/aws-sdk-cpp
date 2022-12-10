/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The <a>PutResourcePolicy</a> API action enforces two limits. A policy can't
   * be greater than 1024 bytes in size. And only one policy can be attached to
   * <code>OpsItemGroup</code>. Verify these limits and try again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourcePolicyLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ResourcePolicyLimitExceededException
  {
  public:
    AWS_SSM_API ResourcePolicyLimitExceededException();
    AWS_SSM_API ResourcePolicyLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourcePolicyLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ResourcePolicyLimitExceededException& WithLimit(int value) { SetLimit(value); return *this;}


    
    inline const Aws::String& GetLimitType() const{ return m_limitType; }

    
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }

    
    inline void SetLimitType(const Aws::String& value) { m_limitTypeHasBeenSet = true; m_limitType = value; }

    
    inline void SetLimitType(Aws::String&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::move(value); }

    
    inline void SetLimitType(const char* value) { m_limitTypeHasBeenSet = true; m_limitType.assign(value); }

    
    inline ResourcePolicyLimitExceededException& WithLimitType(const Aws::String& value) { SetLimitType(value); return *this;}

    
    inline ResourcePolicyLimitExceededException& WithLimitType(Aws::String&& value) { SetLimitType(std::move(value)); return *this;}

    
    inline ResourcePolicyLimitExceededException& WithLimitType(const char* value) { SetLimitType(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourcePolicyLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourcePolicyLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourcePolicyLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_limitType;
    bool m_limitTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
