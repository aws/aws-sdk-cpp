/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for CreateTopic action.</p>
   */
  class AWS_SNS_API CreateTopicRequest : public SNSRequest
  {
  public:
    CreateTopicRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline CreateTopicRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline CreateTopicRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     */
    inline CreateTopicRequest& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
