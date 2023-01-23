/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/ImportTaskFilterName.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>A name-values pair of elements you can use to filter the results when
   * querying your import tasks. Currently, wildcards are not supported for
   * filters.</p>  <p>When filtering by import status, all other filter values
   * are ignored.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ImportTaskFilter">AWS
   * API Reference</a></p>
   */
  class ImportTaskFilter
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ImportTaskFilter();
    AWS_APPLICATIONDISCOVERYSERVICE_API ImportTaskFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ImportTaskFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name, status, or import task ID for a specific import task.</p>
     */
    inline const ImportTaskFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name, status, or import task ID for a specific import task.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name, status, or import task ID for a specific import task.</p>
     */
    inline void SetName(const ImportTaskFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name, status, or import task ID for a specific import task.</p>
     */
    inline void SetName(ImportTaskFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name, status, or import task ID for a specific import task.</p>
     */
    inline ImportTaskFilter& WithName(const ImportTaskFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name, status, or import task ID for a specific import task.</p>
     */
    inline ImportTaskFilter& WithName(ImportTaskFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline ImportTaskFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline ImportTaskFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline ImportTaskFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline ImportTaskFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that you can provide to match against a specific name,
     * status, or import task ID to filter the results for your import task
     * queries.</p>
     */
    inline ImportTaskFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    ImportTaskFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
