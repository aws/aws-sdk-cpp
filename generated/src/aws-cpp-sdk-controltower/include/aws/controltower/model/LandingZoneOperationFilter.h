/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controltower/model/LandingZoneOperationStatus.h>
#include <aws/controltower/model/LandingZoneOperationType.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>A filter object that lets you call <code>ListLandingZoneOperations</code>
   * with a specific filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/LandingZoneOperationFilter">AWS
   * API Reference</a></p>
   */
  class LandingZoneOperationFilter
  {
  public:
    AWS_CONTROLTOWER_API LandingZoneOperationFilter();
    AWS_CONTROLTOWER_API LandingZoneOperationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneOperationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The statuses of the set of landing zone operations selected by the
     * filter.</p>
     */
    inline const Aws::Vector<LandingZoneOperationStatus>& GetStatuses() const{ return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    inline void SetStatuses(const Aws::Vector<LandingZoneOperationStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }
    inline void SetStatuses(Aws::Vector<LandingZoneOperationStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }
    inline LandingZoneOperationFilter& WithStatuses(const Aws::Vector<LandingZoneOperationStatus>& value) { SetStatuses(value); return *this;}
    inline LandingZoneOperationFilter& WithStatuses(Aws::Vector<LandingZoneOperationStatus>&& value) { SetStatuses(std::move(value)); return *this;}
    inline LandingZoneOperationFilter& AddStatuses(const LandingZoneOperationStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    inline LandingZoneOperationFilter& AddStatuses(LandingZoneOperationStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of landing zone operation types selected by the filter.</p>
     */
    inline const Aws::Vector<LandingZoneOperationType>& GetTypes() const{ return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    inline void SetTypes(const Aws::Vector<LandingZoneOperationType>& value) { m_typesHasBeenSet = true; m_types = value; }
    inline void SetTypes(Aws::Vector<LandingZoneOperationType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }
    inline LandingZoneOperationFilter& WithTypes(const Aws::Vector<LandingZoneOperationType>& value) { SetTypes(value); return *this;}
    inline LandingZoneOperationFilter& WithTypes(Aws::Vector<LandingZoneOperationType>&& value) { SetTypes(std::move(value)); return *this;}
    inline LandingZoneOperationFilter& AddTypes(const LandingZoneOperationType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    inline LandingZoneOperationFilter& AddTypes(LandingZoneOperationType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LandingZoneOperationStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    Aws::Vector<LandingZoneOperationType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
