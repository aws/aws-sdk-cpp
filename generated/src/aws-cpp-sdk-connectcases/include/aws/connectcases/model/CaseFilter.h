/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldFilter.h>
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
   * <p>A filter for cases. Only one value can be provided.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseFilter">AWS
   * API Reference</a></p>
   */
  class CaseFilter
  {
  public:
    AWS_CONNECTCASES_API CaseFilter() = default;
    AWS_CONNECTCASES_API CaseFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides "and all" filtering.</p>
     */
    inline const Aws::Vector<CaseFilter>& GetAndAll() const { return m_andAll; }
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
    template<typename AndAllT = Aws::Vector<CaseFilter>>
    void SetAndAll(AndAllT&& value) { m_andAllHasBeenSet = true; m_andAll = std::forward<AndAllT>(value); }
    template<typename AndAllT = Aws::Vector<CaseFilter>>
    CaseFilter& WithAndAll(AndAllT&& value) { SetAndAll(std::forward<AndAllT>(value)); return *this;}
    template<typename AndAllT = CaseFilter>
    CaseFilter& AddAndAll(AndAllT&& value) { m_andAllHasBeenSet = true; m_andAll.emplace_back(std::forward<AndAllT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fields to filter on.</p>
     */
    inline const FieldFilter& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = FieldFilter>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = FieldFilter>
    CaseFilter& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CaseFilter& GetNot() const{
      return *m_not;
    }
    inline bool NotHasBeenSet() const { return m_notHasBeenSet; }
    template<typename NotT = CaseFilter>
    void SetNot(NotT&& value) {
      m_notHasBeenSet = true; 
      m_not = Aws::MakeShared<CaseFilter>("CaseFilter", std::forward<NotT>(value));
    }
    template<typename NotT = CaseFilter>
    CaseFilter& WithNot(NotT&& value) { SetNot(std::forward<NotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides "or all" filtering.</p>
     */
    inline const Aws::Vector<CaseFilter>& GetOrAll() const { return m_orAll; }
    inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
    template<typename OrAllT = Aws::Vector<CaseFilter>>
    void SetOrAll(OrAllT&& value) { m_orAllHasBeenSet = true; m_orAll = std::forward<OrAllT>(value); }
    template<typename OrAllT = Aws::Vector<CaseFilter>>
    CaseFilter& WithOrAll(OrAllT&& value) { SetOrAll(std::forward<OrAllT>(value)); return *this;}
    template<typename OrAllT = CaseFilter>
    CaseFilter& AddOrAll(OrAllT&& value) { m_orAllHasBeenSet = true; m_orAll.emplace_back(std::forward<OrAllT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CaseFilter> m_andAll;
    bool m_andAllHasBeenSet = false;

    FieldFilter m_field;
    bool m_fieldHasBeenSet = false;

    std::shared_ptr<CaseFilter> m_not;
    bool m_notHasBeenSet = false;

    Aws::Vector<CaseFilter> m_orAll;
    bool m_orAllHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
