/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/EC2ProtocolRequest.h>
#include <aws/ec2-protocol/model/StructArg.h>
#include <utility>

namespace Aws
{
namespace EC2Protocol
{
namespace Model
{

  /**
   */
  class NestedStructuresRequest : public EC2ProtocolRequest
  {
  public:
    AWS_EC2PROTOCOL_API NestedStructuresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NestedStructures"; }

    AWS_EC2PROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2PROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const StructArg& GetNested() const{ return m_nested; }
    inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
    inline void SetNested(const StructArg& value) { m_nestedHasBeenSet = true; m_nested = value; }
    inline void SetNested(StructArg&& value) { m_nestedHasBeenSet = true; m_nested = std::move(value); }
    inline NestedStructuresRequest& WithNested(const StructArg& value) { SetNested(value); return *this;}
    inline NestedStructuresRequest& WithNested(StructArg&& value) { SetNested(std::move(value)); return *this;}
    ///@}
  private:

    StructArg m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
