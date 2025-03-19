/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A wildcard object, consisting of an optional list of excluded column names or
   * indexes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ColumnWildcard">AWS
   * API Reference</a></p>
   */
  class ColumnWildcard
  {
  public:
    AWS_LAKEFORMATION_API ColumnWildcard() = default;
    AWS_LAKEFORMATION_API ColumnWildcard(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ColumnWildcard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Excludes column names. Any column with this name will be excluded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedColumnNames() const { return m_excludedColumnNames; }
    inline bool ExcludedColumnNamesHasBeenSet() const { return m_excludedColumnNamesHasBeenSet; }
    template<typename ExcludedColumnNamesT = Aws::Vector<Aws::String>>
    void SetExcludedColumnNames(ExcludedColumnNamesT&& value) { m_excludedColumnNamesHasBeenSet = true; m_excludedColumnNames = std::forward<ExcludedColumnNamesT>(value); }
    template<typename ExcludedColumnNamesT = Aws::Vector<Aws::String>>
    ColumnWildcard& WithExcludedColumnNames(ExcludedColumnNamesT&& value) { SetExcludedColumnNames(std::forward<ExcludedColumnNamesT>(value)); return *this;}
    template<typename ExcludedColumnNamesT = Aws::String>
    ColumnWildcard& AddExcludedColumnNames(ExcludedColumnNamesT&& value) { m_excludedColumnNamesHasBeenSet = true; m_excludedColumnNames.emplace_back(std::forward<ExcludedColumnNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_excludedColumnNames;
    bool m_excludedColumnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
