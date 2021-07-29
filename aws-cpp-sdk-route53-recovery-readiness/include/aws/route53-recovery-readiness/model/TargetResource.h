﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/model/NLBResource.h>
#include <aws/route53-recovery-readiness/model/R53ResourceRecord.h>
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
   * The target resource the R53 record points to<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/TargetResource">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API TargetResource
  {
  public:
    TargetResource();
    TargetResource(Aws::Utils::Json::JsonView jsonValue);
    TargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NLBResource& GetNLBResource() const{ return m_nLBResource; }

    
    inline bool NLBResourceHasBeenSet() const { return m_nLBResourceHasBeenSet; }

    
    inline void SetNLBResource(const NLBResource& value) { m_nLBResourceHasBeenSet = true; m_nLBResource = value; }

    
    inline void SetNLBResource(NLBResource&& value) { m_nLBResourceHasBeenSet = true; m_nLBResource = std::move(value); }

    
    inline TargetResource& WithNLBResource(const NLBResource& value) { SetNLBResource(value); return *this;}

    
    inline TargetResource& WithNLBResource(NLBResource&& value) { SetNLBResource(std::move(value)); return *this;}


    
    inline const R53ResourceRecord& GetR53Resource() const{ return m_r53Resource; }

    
    inline bool R53ResourceHasBeenSet() const { return m_r53ResourceHasBeenSet; }

    
    inline void SetR53Resource(const R53ResourceRecord& value) { m_r53ResourceHasBeenSet = true; m_r53Resource = value; }

    
    inline void SetR53Resource(R53ResourceRecord&& value) { m_r53ResourceHasBeenSet = true; m_r53Resource = std::move(value); }

    
    inline TargetResource& WithR53Resource(const R53ResourceRecord& value) { SetR53Resource(value); return *this;}

    
    inline TargetResource& WithR53Resource(R53ResourceRecord&& value) { SetR53Resource(std::move(value)); return *this;}

  private:

    NLBResource m_nLBResource;
    bool m_nLBResourceHasBeenSet;

    R53ResourceRecord m_r53Resource;
    bool m_r53ResourceHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
