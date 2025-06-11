/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ImplementationFilter.h>
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
   * <p>A structure that defines filtering criteria for the ListControls operation.
   * You can use this filter to narrow down the list of controls based on their
   * implementation details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ControlFilter">AWS
   * API Reference</a></p>
   */
  class ControlFilter
  {
  public:
    AWS_CONTROLCATALOG_API ControlFilter() = default;
    AWS_CONTROLCATALOG_API ControlFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ControlFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A filter that narrows the results to controls with specific implementation
     * types or identifiers. This field allows you to find controls that are
     * implemented by specific Amazon Web Services services or with specific service
     * identifiers.</p>
     */
    inline const ImplementationFilter& GetImplementations() const { return m_implementations; }
    inline bool ImplementationsHasBeenSet() const { return m_implementationsHasBeenSet; }
    template<typename ImplementationsT = ImplementationFilter>
    void SetImplementations(ImplementationsT&& value) { m_implementationsHasBeenSet = true; m_implementations = std::forward<ImplementationsT>(value); }
    template<typename ImplementationsT = ImplementationFilter>
    ControlFilter& WithImplementations(ImplementationsT&& value) { SetImplementations(std::forward<ImplementationsT>(value)); return *this;}
    ///@}
  private:

    ImplementationFilter m_implementations;
    bool m_implementationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
