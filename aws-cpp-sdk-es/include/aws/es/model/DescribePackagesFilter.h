﻿/**
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
  class AWS_ELASTICSEARCHSERVICE_API DescribePackagesFilter
  {
  public:
    DescribePackagesFilter();
    DescribePackagesFilter(Aws::Utils::Json::JsonView jsonValue);
    DescribePackagesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline const DescribePackagesFilterName& GetName() const{ return m_name; }

    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline void SetName(const DescribePackagesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline void SetName(DescribePackagesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline DescribePackagesFilter& WithName(const DescribePackagesFilterName& value) { SetName(value); return *this;}

    /**
     * <p>Any field from <code>PackageDetails</code>.</p>
     */
    inline DescribePackagesFilter& WithName(DescribePackagesFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>A list of values for the specified field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline DescribePackagesFilter& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline DescribePackagesFilter& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline DescribePackagesFilter& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline DescribePackagesFilter& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of values for the specified field.</p>
     */
    inline DescribePackagesFilter& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

  private:

    DescribePackagesFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
