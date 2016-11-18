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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_LAMBDA_API DeleteEventSourceMappingRequest : public LambdaRequest
  {
  public:
    DeleteEventSourceMappingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The event source mapping ID.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The event source mapping ID.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The event source mapping ID.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The event source mapping ID.</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The event source mapping ID.</p>
     */
    inline DeleteEventSourceMappingRequest& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The event source mapping ID.</p>
     */
    inline DeleteEventSourceMappingRequest& WithUUID(Aws::String&& value) { SetUUID(value); return *this;}

    /**
     * <p>The event source mapping ID.</p>
     */
    inline DeleteEventSourceMappingRequest& WithUUID(const char* value) { SetUUID(value); return *this;}

  private:
    Aws::String m_uUID;
    bool m_uUIDHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
