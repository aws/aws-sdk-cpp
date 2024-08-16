/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ViewValidation.h>
#include <utility>
#include <memory>

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
    AWS_GLUE_API StatusDetails();
    AWS_GLUE_API StatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>Table</code> object representing the requested changes.</p>
     */
    AWS_GLUE_API const Table& GetRequestedChange() const;
    AWS_GLUE_API bool RequestedChangeHasBeenSet() const;
    AWS_GLUE_API void SetRequestedChange(const Table& value);
    AWS_GLUE_API void SetRequestedChange(Table&& value);
    AWS_GLUE_API StatusDetails& WithRequestedChange(const Table& value);
    AWS_GLUE_API StatusDetails& WithRequestedChange(Table&& value);
    ///@}

    ///@{
    /**
     * <p>A list of <code>ViewValidation</code> objects that contain information for an
     * analytical engine to validate a view.</p>
     */
    inline const Aws::Vector<ViewValidation>& GetViewValidations() const{ return m_viewValidations; }
    inline bool ViewValidationsHasBeenSet() const { return m_viewValidationsHasBeenSet; }
    inline void SetViewValidations(const Aws::Vector<ViewValidation>& value) { m_viewValidationsHasBeenSet = true; m_viewValidations = value; }
    inline void SetViewValidations(Aws::Vector<ViewValidation>&& value) { m_viewValidationsHasBeenSet = true; m_viewValidations = std::move(value); }
    inline StatusDetails& WithViewValidations(const Aws::Vector<ViewValidation>& value) { SetViewValidations(value); return *this;}
    inline StatusDetails& WithViewValidations(Aws::Vector<ViewValidation>&& value) { SetViewValidations(std::move(value)); return *this;}
    inline StatusDetails& AddViewValidations(const ViewValidation& value) { m_viewValidationsHasBeenSet = true; m_viewValidations.push_back(value); return *this; }
    inline StatusDetails& AddViewValidations(ViewValidation&& value) { m_viewValidationsHasBeenSet = true; m_viewValidations.push_back(std::move(value)); return *this; }
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
