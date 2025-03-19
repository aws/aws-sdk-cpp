/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DescribePackagesFilterName.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Filter to apply in <code>DescribePackage</code> response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackagesFilter">AWS
   * API Reference</a></p>
   */
  class DescribePackagesFilter
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesFilter() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline DescribePackagesFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(DescribePackagesFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline DescribePackagesFilter& WithName(DescribePackagesFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-empty list of values for the specified field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    DescribePackagesFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    DescribePackagesFilter& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
    ///@}
  private:

    DescribePackagesFilterName m_name{DescribePackagesFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
