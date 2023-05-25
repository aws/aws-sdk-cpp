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
    AWS_CONNECTCASES_API Section();
    AWS_CONNECTCASES_API Section(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Section& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline const FieldGroup& GetFieldGroup() const{ return m_fieldGroup; }

    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline bool FieldGroupHasBeenSet() const { return m_fieldGroupHasBeenSet; }

    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline void SetFieldGroup(const FieldGroup& value) { m_fieldGroupHasBeenSet = true; m_fieldGroup = value; }

    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline void SetFieldGroup(FieldGroup&& value) { m_fieldGroupHasBeenSet = true; m_fieldGroup = std::move(value); }

    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline Section& WithFieldGroup(const FieldGroup& value) { SetFieldGroup(value); return *this;}

    /**
     * <p>Consists of a group of fields and associated properties.</p>
     */
    inline Section& WithFieldGroup(FieldGroup&& value) { SetFieldGroup(std::move(value)); return *this;}

  private:

    FieldGroup m_fieldGroup;
    bool m_fieldGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
