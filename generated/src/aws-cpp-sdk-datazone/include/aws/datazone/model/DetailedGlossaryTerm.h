/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Details of a glossary term attached to the inventory asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DetailedGlossaryTerm">AWS
   * API Reference</a></p>
   */
  class DetailedGlossaryTerm
  {
  public:
    AWS_DATAZONE_API DetailedGlossaryTerm() = default;
    AWS_DATAZONE_API DetailedGlossaryTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DetailedGlossaryTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a glossary term attached to the inventory asset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DetailedGlossaryTerm& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shoft description of a glossary term attached to the inventory asset.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    DetailedGlossaryTerm& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
