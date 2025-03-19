/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The details of the term relations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TermRelations">AWS
   * API Reference</a></p>
   */
  class TermRelations
  {
  public:
    AWS_DATAZONE_API TermRelations() = default;
    AWS_DATAZONE_API TermRelations(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TermRelations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The classifies of the term relations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassifies() const { return m_classifies; }
    inline bool ClassifiesHasBeenSet() const { return m_classifiesHasBeenSet; }
    template<typename ClassifiesT = Aws::Vector<Aws::String>>
    void SetClassifies(ClassifiesT&& value) { m_classifiesHasBeenSet = true; m_classifies = std::forward<ClassifiesT>(value); }
    template<typename ClassifiesT = Aws::Vector<Aws::String>>
    TermRelations& WithClassifies(ClassifiesT&& value) { SetClassifies(std::forward<ClassifiesT>(value)); return *this;}
    template<typename ClassifiesT = Aws::String>
    TermRelations& AddClassifies(ClassifiesT&& value) { m_classifiesHasBeenSet = true; m_classifies.emplace_back(std::forward<ClassifiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>isA</code> property of the term relations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIsA() const { return m_isA; }
    inline bool IsAHasBeenSet() const { return m_isAHasBeenSet; }
    template<typename IsAT = Aws::Vector<Aws::String>>
    void SetIsA(IsAT&& value) { m_isAHasBeenSet = true; m_isA = std::forward<IsAT>(value); }
    template<typename IsAT = Aws::Vector<Aws::String>>
    TermRelations& WithIsA(IsAT&& value) { SetIsA(std::forward<IsAT>(value)); return *this;}
    template<typename IsAT = Aws::String>
    TermRelations& AddIsA(IsAT&& value) { m_isAHasBeenSet = true; m_isA.emplace_back(std::forward<IsAT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_classifies;
    bool m_classifiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_isA;
    bool m_isAHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
