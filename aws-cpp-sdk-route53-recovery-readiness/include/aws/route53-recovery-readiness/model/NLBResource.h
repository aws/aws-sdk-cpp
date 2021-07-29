﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * The NLB resource a DNS Target Resource points to<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/NLBResource">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API NLBResource
  {
  public:
    NLBResource();
    NLBResource(Aws::Utils::Json::JsonView jsonValue);
    NLBResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An NLB resource arn
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * An NLB resource arn
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * An NLB resource arn
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * An NLB resource arn
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * An NLB resource arn
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * An NLB resource arn
     */
    inline NLBResource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * An NLB resource arn
     */
    inline NLBResource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * An NLB resource arn
     */
    inline NLBResource& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
