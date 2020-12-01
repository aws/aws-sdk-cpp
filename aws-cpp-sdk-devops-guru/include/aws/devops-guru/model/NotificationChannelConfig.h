/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/SnsChannelConfig.h>
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

  class AWS_DEVOPSGURU_API NotificationChannelConfig
  {
  public:
    NotificationChannelConfig();
    NotificationChannelConfig(Aws::Utils::Json::JsonView jsonValue);
    NotificationChannelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SnsChannelConfig& GetSns() const{ return m_sns; }

    
    inline bool SnsHasBeenSet() const { return m_snsHasBeenSet; }

    
    inline void SetSns(const SnsChannelConfig& value) { m_snsHasBeenSet = true; m_sns = value; }

    
    inline void SetSns(SnsChannelConfig&& value) { m_snsHasBeenSet = true; m_sns = std::move(value); }

    
    inline NotificationChannelConfig& WithSns(const SnsChannelConfig& value) { SetSns(value); return *this;}

    
    inline NotificationChannelConfig& WithSns(SnsChannelConfig&& value) { SetSns(std::move(value)); return *this;}

  private:

    SnsChannelConfig m_sns;
    bool m_snsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
