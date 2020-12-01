/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/NotificationChannelConfig.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API NotificationChannel
  {
  public:
    NotificationChannel();
    NotificationChannel(Aws::Utils::Json::JsonView jsonValue);
    NotificationChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const NotificationChannelConfig& GetConfig() const{ return m_config; }

    
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    
    inline void SetConfig(const NotificationChannelConfig& value) { m_configHasBeenSet = true; m_config = value; }

    
    inline void SetConfig(NotificationChannelConfig&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    
    inline NotificationChannel& WithConfig(const NotificationChannelConfig& value) { SetConfig(value); return *this;}

    
    inline NotificationChannel& WithConfig(NotificationChannelConfig&& value) { SetConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline NotificationChannel& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline NotificationChannel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline NotificationChannel& WithId(const char* value) { SetId(value); return *this;}

  private:

    NotificationChannelConfig m_config;
    bool m_configHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
