﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DisassociateSubnetCidrBlockRequest : public EC2Request
  {
  public:
    DisassociateSubnetCidrBlockRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline DisassociateSubnetCidrBlockRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline DisassociateSubnetCidrBlockRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID for the CIDR block.</p>
     */
    inline DisassociateSubnetCidrBlockRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}

  private:
    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
