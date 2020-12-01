/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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

  class AWS_DEVOPSGURU_API SnsChannelConfig
  {
  public:
    SnsChannelConfig();
    SnsChannelConfig(Aws::Utils::Json::JsonView jsonValue);
    SnsChannelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    
    inline SnsChannelConfig& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    
    inline SnsChannelConfig& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    
    inline SnsChannelConfig& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
