/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/FrameworkMappingDetails.h>
#include <aws/controlcatalog/model/CommonControlMappingDetails.h>
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
   * <p>A structure that contains the details of a mapping relationship, which can be
   * either to a framework or to a common control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/Mapping">AWS
   * API Reference</a></p>
   */
  class Mapping
  {
  public:
    AWS_CONTROLCATALOG_API Mapping() = default;
    AWS_CONTROLCATALOG_API Mapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Mapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The framework mapping details when the mapping type relates to a compliance
     * framework.</p>
     */
    inline const FrameworkMappingDetails& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = FrameworkMappingDetails>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = FrameworkMappingDetails>
    Mapping& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The common control mapping details when the mapping type relates to a common
     * control.</p>
     */
    inline const CommonControlMappingDetails& GetCommonControl() const { return m_commonControl; }
    inline bool CommonControlHasBeenSet() const { return m_commonControlHasBeenSet; }
    template<typename CommonControlT = CommonControlMappingDetails>
    void SetCommonControl(CommonControlT&& value) { m_commonControlHasBeenSet = true; m_commonControl = std::forward<CommonControlT>(value); }
    template<typename CommonControlT = CommonControlMappingDetails>
    Mapping& WithCommonControl(CommonControlT&& value) { SetCommonControl(std::forward<CommonControlT>(value)); return *this;}
    ///@}
  private:

    FrameworkMappingDetails m_framework;
    bool m_frameworkHasBeenSet = false;

    CommonControlMappingDetails m_commonControl;
    bool m_commonControlHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
