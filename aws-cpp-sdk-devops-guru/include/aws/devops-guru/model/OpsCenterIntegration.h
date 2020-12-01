/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OptInStatus.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API OpsCenterIntegration
  {
  public:
    OpsCenterIntegration();
    OpsCenterIntegration(Aws::Utils::Json::JsonView jsonValue);
    OpsCenterIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const OptInStatus& GetOptInStatus() const{ return m_optInStatus; }

    
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }

    
    inline void SetOptInStatus(const OptInStatus& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }

    
    inline void SetOptInStatus(OptInStatus&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }

    
    inline OpsCenterIntegration& WithOptInStatus(const OptInStatus& value) { SetOptInStatus(value); return *this;}

    
    inline OpsCenterIntegration& WithOptInStatus(OptInStatus&& value) { SetOptInStatus(std::move(value)); return *this;}

  private:

    OptInStatus m_optInStatus;
    bool m_optInStatusHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
