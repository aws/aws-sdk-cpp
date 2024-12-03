/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DescribeConnectionTypeRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DescribeConnectionTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectionType"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the connection type to be described.</p>
     */
    inline const Aws::String& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const Aws::String& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(Aws::String&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline void SetConnectionType(const char* value) { m_connectionTypeHasBeenSet = true; m_connectionType.assign(value); }
    inline DescribeConnectionTypeRequest& WithConnectionType(const Aws::String& value) { SetConnectionType(value); return *this;}
    inline DescribeConnectionTypeRequest& WithConnectionType(Aws::String&& value) { SetConnectionType(std::move(value)); return *this;}
    inline DescribeConnectionTypeRequest& WithConnectionType(const char* value) { SetConnectionType(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
