/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/MappingType.h>
#include <aws/controlcatalog/model/Mapping.h>
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
   * <p>A structure that contains information about a control mapping, including the
   * control ARN, mapping type, and mapping details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ControlMapping">AWS
   * API Reference</a></p>
   */
  class ControlMapping
  {
  public:
    AWS_CONTROLCATALOG_API ControlMapping() = default;
    AWS_CONTROLCATALOG_API ControlMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ControlMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the control in the
     * mapping.</p>
     */
    inline const Aws::String& GetControlArn() const { return m_controlArn; }
    inline bool ControlArnHasBeenSet() const { return m_controlArnHasBeenSet; }
    template<typename ControlArnT = Aws::String>
    void SetControlArn(ControlArnT&& value) { m_controlArnHasBeenSet = true; m_controlArn = std::forward<ControlArnT>(value); }
    template<typename ControlArnT = Aws::String>
    ControlMapping& WithControlArn(ControlArnT&& value) { SetControlArn(std::forward<ControlArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of mapping relationship between the control and other entities.
     * Indicates whether the mapping is to a framework or common control.</p>
     */
    inline MappingType GetMappingType() const { return m_mappingType; }
    inline bool MappingTypeHasBeenSet() const { return m_mappingTypeHasBeenSet; }
    inline void SetMappingType(MappingType value) { m_mappingTypeHasBeenSet = true; m_mappingType = value; }
    inline ControlMapping& WithMappingType(MappingType value) { SetMappingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the mapping relationship, containing either framework or
     * common control information.</p>
     */
    inline const Mapping& GetMapping() const { return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    template<typename MappingT = Mapping>
    void SetMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping = std::forward<MappingT>(value); }
    template<typename MappingT = Mapping>
    ControlMapping& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_controlArn;
    bool m_controlArnHasBeenSet = false;

    MappingType m_mappingType{MappingType::NOT_SET};
    bool m_mappingTypeHasBeenSet = false;

    Mapping m_mapping;
    bool m_mappingHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
