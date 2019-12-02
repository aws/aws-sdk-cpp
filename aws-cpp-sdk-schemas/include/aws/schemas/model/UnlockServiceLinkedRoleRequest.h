/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class AWS_SCHEMAS_API UnlockServiceLinkedRoleRequest : public SchemasRequest
  {
  public:
    UnlockServiceLinkedRoleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnlockServiceLinkedRole"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    
    inline UnlockServiceLinkedRoleRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    
    inline UnlockServiceLinkedRoleRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    
    inline UnlockServiceLinkedRoleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
