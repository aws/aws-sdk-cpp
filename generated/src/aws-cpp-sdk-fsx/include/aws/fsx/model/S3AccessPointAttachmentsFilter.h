/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/S3AccessPointAttachmentsFilterName.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A set of Name and Values pairs used to view a select set of S3 access point
   * attachments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/S3AccessPointAttachmentsFilter">AWS
   * API Reference</a></p>
   */
  class S3AccessPointAttachmentsFilter
  {
  public:
    AWS_FSX_API S3AccessPointAttachmentsFilter() = default;
    AWS_FSX_API S3AccessPointAttachmentsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API S3AccessPointAttachmentsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline S3AccessPointAttachmentsFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(S3AccessPointAttachmentsFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline S3AccessPointAttachmentsFilter& WithName(S3AccessPointAttachmentsFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    S3AccessPointAttachmentsFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    S3AccessPointAttachmentsFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    S3AccessPointAttachmentsFilterName m_name{S3AccessPointAttachmentsFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
