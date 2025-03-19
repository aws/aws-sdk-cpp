/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class DeleteParameterGroupRequest : public DAXRequest
  {
  public:
    AWS_DAX_API DeleteParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteParameterGroup"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the parameter group to delete.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    DeleteParameterGroupRequest& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
