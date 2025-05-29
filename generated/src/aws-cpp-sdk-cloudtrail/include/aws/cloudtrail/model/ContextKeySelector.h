/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/Type.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>An object that contains information types to be included in CloudTrail
   * enriched events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ContextKeySelector">AWS
   * API Reference</a></p>
   */
  class ContextKeySelector
  {
  public:
    AWS_CLOUDTRAIL_API ContextKeySelector() = default;
    AWS_CLOUDTRAIL_API ContextKeySelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API ContextKeySelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of the event record field in ContextKeySelector. Valid
     * values include RequestContext, TagContext.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline ContextKeySelector& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of keys defined by Type to be included in CloudTrail enriched events.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    ContextKeySelector& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    template<typename EqualsT = Aws::String>
    ContextKeySelector& AddEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals.emplace_back(std::forward<EqualsT>(value)); return *this; }
    ///@}
  private:

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
