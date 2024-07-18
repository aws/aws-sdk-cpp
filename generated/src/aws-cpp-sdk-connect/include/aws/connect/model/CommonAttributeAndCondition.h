/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TagCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A list of conditions which would be applied together with an <code>AND</code>
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CommonAttributeAndCondition">AWS
   * API Reference</a></p>
   */
  class CommonAttributeAndCondition
  {
  public:
    AWS_CONNECT_API CommonAttributeAndCondition();
    AWS_CONNECT_API CommonAttributeAndCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CommonAttributeAndCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline const Aws::Vector<TagCondition>& GetTagConditions() const{ return m_tagConditions; }
    inline bool TagConditionsHasBeenSet() const { return m_tagConditionsHasBeenSet; }
    inline void SetTagConditions(const Aws::Vector<TagCondition>& value) { m_tagConditionsHasBeenSet = true; m_tagConditions = value; }
    inline void SetTagConditions(Aws::Vector<TagCondition>&& value) { m_tagConditionsHasBeenSet = true; m_tagConditions = std::move(value); }
    inline CommonAttributeAndCondition& WithTagConditions(const Aws::Vector<TagCondition>& value) { SetTagConditions(value); return *this;}
    inline CommonAttributeAndCondition& WithTagConditions(Aws::Vector<TagCondition>&& value) { SetTagConditions(std::move(value)); return *this;}
    inline CommonAttributeAndCondition& AddTagConditions(const TagCondition& value) { m_tagConditionsHasBeenSet = true; m_tagConditions.push_back(value); return *this; }
    inline CommonAttributeAndCondition& AddTagConditions(TagCondition&& value) { m_tagConditionsHasBeenSet = true; m_tagConditions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TagCondition> m_tagConditions;
    bool m_tagConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
