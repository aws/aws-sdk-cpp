/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class DescribeStudioRequest : public EMRRequest
  {
  public:
    AWS_EMR_API DescribeStudioRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStudio"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon EMR Studio ID.</p>
     */
    inline const Aws::String& GetStudioId() const { return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    template<typename StudioIdT = Aws::String>
    void SetStudioId(StudioIdT&& value) { m_studioIdHasBeenSet = true; m_studioId = std::forward<StudioIdT>(value); }
    template<typename StudioIdT = Aws::String>
    DescribeStudioRequest& WithStudioId(StudioIdT&& value) { SetStudioId(std::forward<StudioIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
