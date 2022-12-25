/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ScanConditionPair.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanCondition">AWS
   * API Reference</a></p>
   */
  class ScanCondition
  {
  public:
    AWS_GUARDDUTY_API ScanCondition();
    AWS_GUARDDUTY_API ScanCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline const Aws::Vector<ScanConditionPair>& GetMapEquals() const{ return m_mapEquals; }

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline bool MapEqualsHasBeenSet() const { return m_mapEqualsHasBeenSet; }

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline void SetMapEquals(const Aws::Vector<ScanConditionPair>& value) { m_mapEqualsHasBeenSet = true; m_mapEquals = value; }

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline void SetMapEquals(Aws::Vector<ScanConditionPair>&& value) { m_mapEqualsHasBeenSet = true; m_mapEquals = std::move(value); }

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline ScanCondition& WithMapEquals(const Aws::Vector<ScanConditionPair>& value) { SetMapEquals(value); return *this;}

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline ScanCondition& WithMapEquals(Aws::Vector<ScanConditionPair>&& value) { SetMapEquals(std::move(value)); return *this;}

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline ScanCondition& AddMapEquals(const ScanConditionPair& value) { m_mapEqualsHasBeenSet = true; m_mapEquals.push_back(value); return *this; }

    /**
     * <p>Represents an <i>mapEqual</i> <b/> condition to be applied to a single field
     * when triggering for malware scan.</p>
     */
    inline ScanCondition& AddMapEquals(ScanConditionPair&& value) { m_mapEqualsHasBeenSet = true; m_mapEquals.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ScanConditionPair> m_mapEquals;
    bool m_mapEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
