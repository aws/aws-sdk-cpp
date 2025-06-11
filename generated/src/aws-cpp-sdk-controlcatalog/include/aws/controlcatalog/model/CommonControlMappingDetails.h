/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>A structure that contains details about a common control mapping. In
   * particular, it returns the Amazon Resource Name (ARN) of the common
   * control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/CommonControlMappingDetails">AWS
   * API Reference</a></p>
   */
  class CommonControlMappingDetails
  {
  public:
    AWS_CONTROLCATALOG_API CommonControlMappingDetails() = default;
    AWS_CONTROLCATALOG_API CommonControlMappingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API CommonControlMappingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the common control in the
     * mapping.</p>
     */
    inline const Aws::String& GetCommonControlArn() const { return m_commonControlArn; }
    inline bool CommonControlArnHasBeenSet() const { return m_commonControlArnHasBeenSet; }
    template<typename CommonControlArnT = Aws::String>
    void SetCommonControlArn(CommonControlArnT&& value) { m_commonControlArnHasBeenSet = true; m_commonControlArn = std::forward<CommonControlArnT>(value); }
    template<typename CommonControlArnT = Aws::String>
    CommonControlMappingDetails& WithCommonControlArn(CommonControlArnT&& value) { SetCommonControlArn(std::forward<CommonControlArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commonControlArn;
    bool m_commonControlArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
