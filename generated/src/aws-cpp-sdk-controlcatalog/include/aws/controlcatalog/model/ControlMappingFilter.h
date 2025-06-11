/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/MappingType.h>
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
   * <p>A structure that defines filtering criteria for the ListControlMappings
   * operation. You can use this filter to narrow down the list of control mappings
   * based on control ARNs, common control ARNs, or mapping types.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ControlMappingFilter">AWS
   * API Reference</a></p>
   */
  class ControlMappingFilter
  {
  public:
    AWS_CONTROLCATALOG_API ControlMappingFilter() = default;
    AWS_CONTROLCATALOG_API ControlMappingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ControlMappingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of control ARNs to filter the mappings. When specified, only mappings
     * associated with these controls are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetControlArns() const { return m_controlArns; }
    inline bool ControlArnsHasBeenSet() const { return m_controlArnsHasBeenSet; }
    template<typename ControlArnsT = Aws::Vector<Aws::String>>
    void SetControlArns(ControlArnsT&& value) { m_controlArnsHasBeenSet = true; m_controlArns = std::forward<ControlArnsT>(value); }
    template<typename ControlArnsT = Aws::Vector<Aws::String>>
    ControlMappingFilter& WithControlArns(ControlArnsT&& value) { SetControlArns(std::forward<ControlArnsT>(value)); return *this;}
    template<typename ControlArnsT = Aws::String>
    ControlMappingFilter& AddControlArns(ControlArnsT&& value) { m_controlArnsHasBeenSet = true; m_controlArns.emplace_back(std::forward<ControlArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of common control ARNs to filter the mappings. When specified, only
     * mappings associated with these common controls are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommonControlArns() const { return m_commonControlArns; }
    inline bool CommonControlArnsHasBeenSet() const { return m_commonControlArnsHasBeenSet; }
    template<typename CommonControlArnsT = Aws::Vector<Aws::String>>
    void SetCommonControlArns(CommonControlArnsT&& value) { m_commonControlArnsHasBeenSet = true; m_commonControlArns = std::forward<CommonControlArnsT>(value); }
    template<typename CommonControlArnsT = Aws::Vector<Aws::String>>
    ControlMappingFilter& WithCommonControlArns(CommonControlArnsT&& value) { SetCommonControlArns(std::forward<CommonControlArnsT>(value)); return *this;}
    template<typename CommonControlArnsT = Aws::String>
    ControlMappingFilter& AddCommonControlArns(CommonControlArnsT&& value) { m_commonControlArnsHasBeenSet = true; m_commonControlArns.emplace_back(std::forward<CommonControlArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of mapping types to filter the mappings. When specified, only mappings
     * of these types are returned.</p>
     */
    inline const Aws::Vector<MappingType>& GetMappingTypes() const { return m_mappingTypes; }
    inline bool MappingTypesHasBeenSet() const { return m_mappingTypesHasBeenSet; }
    template<typename MappingTypesT = Aws::Vector<MappingType>>
    void SetMappingTypes(MappingTypesT&& value) { m_mappingTypesHasBeenSet = true; m_mappingTypes = std::forward<MappingTypesT>(value); }
    template<typename MappingTypesT = Aws::Vector<MappingType>>
    ControlMappingFilter& WithMappingTypes(MappingTypesT&& value) { SetMappingTypes(std::forward<MappingTypesT>(value)); return *this;}
    inline ControlMappingFilter& AddMappingTypes(MappingType value) { m_mappingTypesHasBeenSet = true; m_mappingTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_controlArns;
    bool m_controlArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_commonControlArns;
    bool m_commonControlArnsHasBeenSet = false;

    Aws::Vector<MappingType> m_mappingTypes;
    bool m_mappingTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
