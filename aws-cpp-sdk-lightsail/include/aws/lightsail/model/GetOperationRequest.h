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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetOperationRequest : public LightsailRequest
  {
  public:
    GetOperationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline GetOperationRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline GetOperationRequest& WithOperationId(Aws::String&& value) { SetOperationId(value); return *this;}

    /**
     * <p>A GUID used to identify the operation.</p>
     */
    inline GetOperationRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:
    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
