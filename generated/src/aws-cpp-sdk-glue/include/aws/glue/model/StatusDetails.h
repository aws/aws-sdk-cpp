/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ViewValidation.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace Glue
{
namespace Model
{
  class Table;

  /**
   * <p>A structure containing information about an asynchronous change to a
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatusDetails">AWS
   * API Reference</a></p>
   */
  class StatusDetails
  {
  public:
    AWS_GLUE_API StatusDetails() = default;
    AWS_GLUE_API StatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>Table</code> object representing the requested changes.</p>
     */
    inline const Table& GetRequestedChange() const{
      return *m_requestedChange;
    }
    inline bool RequestedChangeHasBeenSet() const { return m_requestedChangeHasBeenSet; }
    template<typename RequestedChangeT = Table>
    void SetRequestedChange(RequestedChangeT&& value) {
      m_requestedChangeHasBeenSet = true; 
      m_requestedChange = Aws::MakeShared<Table>("StatusDetails", std::forward<RequestedChangeT>(value));
    }
    template<typename RequestedChangeT = Table>
    StatusDetails& WithRequestedChange(RequestedChangeT&& value) { SetRequestedChange(std::forward<RequestedChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ViewValidation</code> objects that contain information for an
     * analytical engine to validate a view.</p>
     */
    inline const Aws::Vector<ViewValidation>& GetViewValidations() const { return m_viewValidations; }
    inline bool ViewValidationsHasBeenSet() const { return m_viewValidationsHasBeenSet; }
    template<typename ViewValidationsT = Aws::Vector<ViewValidation>>
    void SetViewValidations(ViewValidationsT&& value) { m_viewValidationsHasBeenSet = true; m_viewValidations = std::forward<ViewValidationsT>(value); }
    template<typename ViewValidationsT = Aws::Vector<ViewValidation>>
    StatusDetails& WithViewValidations(ViewValidationsT&& value) { SetViewValidations(std::forward<ViewValidationsT>(value)); return *this;}
    template<typename ViewValidationsT = ViewValidation>
    StatusDetails& AddViewValidations(ViewValidationsT&& value) { m_viewValidationsHasBeenSet = true; m_viewValidations.emplace_back(std::forward<ViewValidationsT>(value)); return *this; }
    ///@}
  private:

    std::shared_ptr<Table> m_requestedChange;
    bool m_requestedChangeHasBeenSet = false;

    Aws::Vector<ViewValidation> m_viewValidations;
    bool m_viewValidationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
