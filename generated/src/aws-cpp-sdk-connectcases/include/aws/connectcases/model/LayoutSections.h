/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/Section.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Ordered list containing different kinds of sections that can be added. A
   * LayoutSections object can only contain one section.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/LayoutSections">AWS
   * API Reference</a></p>
   */
  class LayoutSections
  {
  public:
    AWS_CONNECTCASES_API LayoutSections() = default;
    AWS_CONNECTCASES_API LayoutSections(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API LayoutSections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Section>& GetSections() const { return m_sections; }
    inline bool SectionsHasBeenSet() const { return m_sectionsHasBeenSet; }
    template<typename SectionsT = Aws::Vector<Section>>
    void SetSections(SectionsT&& value) { m_sectionsHasBeenSet = true; m_sections = std::forward<SectionsT>(value); }
    template<typename SectionsT = Aws::Vector<Section>>
    LayoutSections& WithSections(SectionsT&& value) { SetSections(std::forward<SectionsT>(value)); return *this;}
    template<typename SectionsT = Section>
    LayoutSections& AddSections(SectionsT&& value) { m_sectionsHasBeenSet = true; m_sections.emplace_back(std::forward<SectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Section> m_sections;
    bool m_sectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
