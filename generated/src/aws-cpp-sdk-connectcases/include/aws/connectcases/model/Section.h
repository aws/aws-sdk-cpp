/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldGroup.h>
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
   * <p>This represents a sections within a panel or tab of the page
   * layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/Section">AWS
   * API Reference</a></p>
   */
  class Section
  {
  public:
    AWS_CONNECTCASES_API Section() = default;
    AWS_CONNECTCASES_API Section(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Section& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline const FieldGroup& GetFieldGroup() const { return m_fieldGroup; }
    inline bool FieldGroupHasBeenSet() const { return m_fieldGroupHasBeenSet; }
    template<typename FieldGroupT = FieldGroup>
    void SetFieldGroup(FieldGroupT&& value) { m_fieldGroupHasBeenSet = true; m_fieldGroup = std::forward<FieldGroupT>(value); }
    template<typename FieldGroupT = FieldGroup>
    Section& WithFieldGroup(FieldGroupT&& value) { SetFieldGroup(std::forward<FieldGroupT>(value)); return *this;}
    ///@}
  private:

    FieldGroup m_fieldGroup;
    bool m_fieldGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
