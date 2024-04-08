/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controlcatalog/model/ObjectiveResourceFilter.h>
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
   * <p>An optional filter that narrows the results to a specific
   * objective.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/CommonControlFilter">AWS
   * API Reference</a></p>
   */
  class CommonControlFilter
  {
  public:
    AWS_CONTROLCATALOG_API CommonControlFilter();
    AWS_CONTROLCATALOG_API CommonControlFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API CommonControlFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline const Aws::Vector<ObjectiveResourceFilter>& GetObjectives() const{ return m_objectives; }

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline bool ObjectivesHasBeenSet() const { return m_objectivesHasBeenSet; }

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline void SetObjectives(const Aws::Vector<ObjectiveResourceFilter>& value) { m_objectivesHasBeenSet = true; m_objectives = value; }

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline void SetObjectives(Aws::Vector<ObjectiveResourceFilter>&& value) { m_objectivesHasBeenSet = true; m_objectives = std::move(value); }

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline CommonControlFilter& WithObjectives(const Aws::Vector<ObjectiveResourceFilter>& value) { SetObjectives(value); return *this;}

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline CommonControlFilter& WithObjectives(Aws::Vector<ObjectiveResourceFilter>&& value) { SetObjectives(std::move(value)); return *this;}

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline CommonControlFilter& AddObjectives(const ObjectiveResourceFilter& value) { m_objectivesHasBeenSet = true; m_objectives.push_back(value); return *this; }

    /**
     * <p>The objective that's used as filter criteria.</p> <p>You can use this
     * parameter to specify one objective ARN at a time. Passing multiple ARNs in the
     * <code>CommonControlFilter</code> isn’t currently supported.</p>
     */
    inline CommonControlFilter& AddObjectives(ObjectiveResourceFilter&& value) { m_objectivesHasBeenSet = true; m_objectives.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ObjectiveResourceFilter> m_objectives;
    bool m_objectivesHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
