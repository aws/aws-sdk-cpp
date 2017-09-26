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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DisassociateIamInstanceProfileRequest : public EC2Request
  {
  public:
    DisassociateIamInstanceProfileRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateIamInstanceProfile"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline DisassociateIamInstanceProfileRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline DisassociateIamInstanceProfileRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IAM instance profile association.</p>
     */
    inline DisassociateIamInstanceProfileRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
